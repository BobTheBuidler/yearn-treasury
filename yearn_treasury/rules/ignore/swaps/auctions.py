from typing import Final

from dao_treasury import TreasuryTx
from y import Network

from yearn_treasury.rules.ignore import swaps


auctions: Final = swaps("Auctions")

YEARNFI_DUTCH_AUCTIONS: Final = "0x861fE45742f70054917B65bE18904662bD0dBd30"


@auctions("Auction Proceeds", Network.Mainnet)
def is_auction_proceeds(tx: TreasuryTx) -> bool:    
    # NOTE: the other side of these swaps is currently recorded under
    # 'Ignore:Internal Transfer' when it goes to the Generic bucket contract
    if tx.from_nickname != "Contract: GPv2Settlement":
        return False

    try:
        if "Trade" not in tx.events:
            return False
    except KeyError as e:
        if "components" in str(e):
            return False
        raise

    for trade in tx.get_events("Trade"):
        if trade["owner"] != YEARNFI_DUTCH_AUCTIONS or tx.token != trade["buyToken"]:
            continue
        buy_amount = tx.token.scale_value(trade["buyAmount"])
        if round(buy_amount, 14) == round(tx.amount, 14):
            return True

    return False


@swaps("Cowswap", Network.Mainnet)
def is_cowswap_swap(tx: TreasuryTx) -> bool:
    # One sided, other side goes elsewhere. typically used for output tokens passed-thru to vaults.
    if tx.from_nickname == "yMechs Multisig" and tx.to_nickname == "Contract: GPv2Settlement":
        return True

    try:
        if "Trade" not in tx.events:
            return False
    except KeyError as e:
        if "components" in str(e):
            return False
        raise

    token = tx.token
    block: BlockNumber = tx.block  # type: ignore [assignment]
    amount = tx.amount
    token_address = token.address.address

    for trade in tx.events["Trade"]:
        if (
            trade.address == YSWAPS
            and TreasuryWallet.check_membership(trade["owner"], block)
            and trade["buyToken"] not in SKIP_TOKENS
        ):
            # buy side
            if (
                token_address == trade["buyToken"]
                and TreasuryWallet.check_membership(tx.to_address.address, block)  # type: ignore [union-attr, arg-type]
                and amount == token.scale_value(trade["buyAmount"])
            ):
                return True
            # sell side
            elif (
                token_address == trade["sellToken"]
                and tx.from_address == trade["owner"]
                and amount == token.scale_value(trade["sellAmount"])
            ):
                # Did Yearn actually receive the other side of the trade?
                for address in TREASURY_WALLETS:
                    if TreasuryWallet.check_membership(address, block):
                        other_side_query = select(
                            t
                            for t in TreasuryTx  # type: ignore [attr-defined]
                            if t.hash == tx.hash
                            and t.token.address.address == trade["buyToken"]
                            and t.from_address.address == YSWAPS
                            and t.to_address.address == address
                        )

                        if len(other_side_query) > 0:
                            return True