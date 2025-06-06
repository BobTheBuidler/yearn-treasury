# keepCOINS: excludes keepCRV as the CRV are locked forever.
from typing import Final, Tuple

from y import Network
from y.constants import CHAINID

from dao_treasury import TreasuryTx, revenue


keepcoins: Final = revenue("keepCOINS")

angle_strats_with_non_specific_names: Final[Tuple[str, ...]] = {  # type: ignore [call-overload]
    Network.Mainnet: (
        "0x2CB390212b0e5091a3c0D0331669c1419165CF80",
        "0x7C2b9DB2Ae5aCC6fAC2Fd6cE9b01A5EB4bDD1309",
    ),
}.get(CHAINID, ())


@keepcoins("KeepANGLE")
def is_keep_angle(tx: TreasuryTx) -> bool:
    return tx.symbol == "ANGLE" and (
        tx.from_nickname == "Contract: StrategyAngleUSDC"
        or tx.from_address in angle_strats_with_non_specific_names
    )


@keepcoins("KeepBAL")
def is_keep_bal(tx: TreasuryTx) -> bool:
    # This particular tx is pass-thru
    if (
        tx.symbol != "BAL"
        or tx.hash == "0xf4677cce1a08ecd54272cdc1b23bc64693450f8bb5d6de59b8e58e288ec3b2a7"
    ):
        return False

    return tx.from_nickname in [
        "Contract: SSBv3 DAI staBAL3",
        "Contract: SSBv3 USDC staBAL3",
        "Contract: SSBv3 USDT staBAL3",
        "Contract: SSBv3 WETH B-stETH-STABLE",
        "Contract: SSBv3 WBTC staBAL3-BTC",
    ] or tx.from_address in [
        # Contract: Strategy (unhelpful name, we can use address though)
        "0x960818b3F08dADca90b840298721FE7B419fBE12",
        "0x074620e389B5715f7ba51Fc062D8fFaf973c7E02",
        "0xB0F8b341951233BF08A5F15a838A1a85B016aEf9",
        "0x034d775615d50D870D742caA1e539fC8d97955c2",
        "0xe614f717b3e8273f38Ed7e0536DfBA60AD021c85",
    ]


@keepcoins("KeepBEETS")
def is_keep_beets(tx: TreasuryTx) -> bool:
    return (
        tx.symbol == "BEETS"
        and tx.hash != "0x1e997aa8c79ece76face8deb8fe7df4cea4f6a1ef7cd28501013ed30dfbe238f"
    )


@keepcoins("KeepPOOL")
def is_keep_pool(tx: TreasuryTx) -> bool:
    return tx.symbol == "POOL" and tx.from_nickname == "Contract: StrategyPoolTogether"
