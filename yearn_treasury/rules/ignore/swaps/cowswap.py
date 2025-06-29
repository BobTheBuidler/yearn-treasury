from typing import Final

from dao_treasury import TreasuryTx, TreasuryWallet
from eth_typing import BlockNumber
from pony.orm import select
from y import Network

from yearn_treasury.constants import TREASURY_WALLETS
from yearn_treasury.rules.ignore.swaps import swaps
from yearn_treasury.rules.ignore.swaps._skip_tokens import SKIP_TOKENS


YSWAPS: Final = "0x9008D19f58AAbD9eD0D60971565AA8510560ab41"


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

    # made with some help from other contracts
    return tx.hash in {
        "0xd41e40a0e9b49c4f06e1956066006de901a4ed8c856a43c31ac1cbd344ff0ccf",
        "0x94e1a85fa25e433976962449588e522ce0f2a81ae3d4b67ae199e458dfce4e39",
        "0x579056f777c1f05a18e566dd329ea85f5c747fd6e7246411b5e016c8bebe8742",
        "0xd007d04560fc42df93da0fd25ac3942f89f7f5458eb492872b3d87be91d7a571",
        "0x2eb9a897ea48c9802f0129674d0203835a236e2f41c6db8edb017a4c315b84f4",
        "0xce2338b61c8c5875ce4e19f9d5993895a4d5d9eb81b78e1b33279436d2c2c047",
        "0x6dd14144594e7b19fdc4529682eb1cf554132ae318d8ba5b238cdeb3e694d52a",
        "0xb0d430e1ec4d6fa7bd4e56f86e6fefd7f71946549710ca0b9f39de14c04d02ed",
        "0x0b1b00f0a29f787b44421461a3f9444081fe94ca29958c98cd2c23e271f3f69a",
        "0x69eeeb5d7cb0f23ee98ef23f38d02ff0a695d75a1da1fa010abaa7a5aab947ff",
        "0xdfbe76c0af4ec68021c1603d4f9a6b5f20734e70af86d32fbd57fa87461064f2",
        "0x60cfe7c2c19e1fc3010e441ed369fc414bd10dbb7ba88fb4f490d96e15eb2f26",
        "0x1ddddfff1f02c66ef07817144e9e30d6f734432c2736f7859236d3199d4b23fb",
    }
