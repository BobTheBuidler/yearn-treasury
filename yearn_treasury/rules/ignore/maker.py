from decimal import Decimal
from typing import Final

from dao_treasury import TreasuryTx, TreasuryWallet, ignore

from yearn_treasury.rules.constants import ZERO_ADDRESS


DSPROXY: Final = "0xd42e1Cb8b98382df7Db43e0F09dFE57365659D16"
DEPOSIT_EVENT_ARGS: Final = "ilk", "usr", "wad"
WITHDRAWAL_EVENT_ARGS: Final = "cdp", "dst", "wad"

maker: Final = ignore("Maker")
dai: Final = maker("DAI")
dsr: Final = maker("DSR")
cdp: Final = maker("CDP")


dai("Minting").match(symbol="DAI", from_address=ZERO_ADDRESS)
dai("Burning").match(symbol="DAI", to_address=DSPROXY)

# sending DAI to or receiving DAI back from Maker's DSR module
dsr("Deposit").match(to_nickname="Contract: DsrManager")
dsr("Withdrawal").match(from_nickname="Contract: DsrManager")


@cdp("YFI Deposit")
def is_yfi_cdp_deposit(tx: TreasuryTx) -> bool:
    if tx.symbol == "YFI" and TreasuryWallet._get_instance(
        tx.from_address.address  # type: ignore [union-attr, arg-type]
    ):
        for event in tx.get_events("slip"):
            if (
                all(arg in event for arg in DEPOSIT_EVENT_ARGS)
                and Decimal(event["wad"]) / 10**18 == tx.amount
            ):
                return True
    return False


@cdp("YFI Withdrawal")
def is_yfi_cdp_withdrawal(tx: TreasuryTx) -> bool:
    if tx.symbol == "YFI" and TreasuryWallet._get_instance(
        tx.to_address.address  # type: ignore [union-attr, arg-type]
    ):
        for event in tx.get_events("flux"):
            if (
                all(arg in event for arg in WITHDRAWAL_EVENT_ARGS)
                and Decimal(event["wad"]) / 10**18 == tx.amount
            ):
                return True
    return False


@cdp("USDC Deposit")
def is_usdc_cdp_deposit(tx: TreasuryTx) -> bool:
    if tx.symbol == "USDC" and TreasuryWallet._get_instance(
        tx.from_address.address  # type: ignore [union-attr, arg-type]
    ):
        for event in tx.get_events("slip"):
            if (
                all(arg in event for arg in DEPOSIT_EVENT_ARGS)
                and Decimal(event["wad"]) / 10**18 == tx.amount
            ):
                return True
    return False


@cdp("USDC Withdrawal")
def is_usdc_cdp_withdrawal(tx: TreasuryTx) -> bool:
    if tx.symbol == "USDC" and TreasuryWallet._get_instance(
        tx.to_address.address  # type: ignore [union-attr, arg-type]
    ):
        for event in tx.get_events("flux"):
            if (
                all(arg in event for arg in WITHDRAWAL_EVENT_ARGS)
                and Decimal(event["wad"]) / 10**18 == tx.amount
            ):
                return True
    return False
