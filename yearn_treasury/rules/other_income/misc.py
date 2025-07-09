# mypy: disable-error-code="union-attr"
from decimal import Decimal
from typing import Final, Optional

from dao_treasury import TreasuryTx, other_income
from y import Contract, ContractNotVerified, ERC20, Network  # type: ignore [attr-defined]

from yearn_treasury.rules.constants import ZERO_ADDRESS


airdrop: Final = other_income("Airdrop")

_POINT_ONE: Final = Decimal("0.1")

_SAFE_AIRDROP_CONTRACTS: Final = (
    "0xA0b937D5c8E32a80E3a8ed4227CD020221544ee6",
    "0xC0fde70A65C7569Fe919bE57492228DEE8cDb585",
)


@airdrop("SAFE", Network.Mainnet)
def is_safe_airdrop(tx: TreasuryTx) -> bool:
    return tx.symbol == "SAFE" and tx.from_address.address in _SAFE_AIRDROP_CONTRACTS


@airdrop("Other", Network.Mainnet)
def is_airdrop(tx: TreasuryTx) -> bool:
    return tx.hash in {
        "0x327684dab9e3ce61d125b36fe0b59cbfbc8aa5ac7a5b051125ab7cac3b93b90b",
        "0x44f7d3b2030799ea45932baf6049528a059aabd6387f3128993d646d01c8e877",  # TKX
        "0xf2dbe58dffd3bc1476755e9f74e2ae07531579d0a3ea9e2aaac2ef902e080c2a",  # TKX
        "0x8079e9cae847da196dc5507561bc9d1434f765f05045bc1a82df735ec83bc6ec",  # MTV
        # NOTE: this one was rec'd elsewhere, dumped, and WETH sent to treasury
        "0xc12ded505ea158717890e4ae6e7ab5eb5cb61edbc13dfd125dd0e6f9b1af9477",  # Gnosis SAFE airdrop
        "0x7c086a82b43b2f49db93b76a0698cf86a9c620b3bf924f0003175b04a17455ad",  # PRISMA
    }


@other_income("aToken Yield", Network.Mainnet)
def is_atoken_yield(tx: TreasuryTx) -> bool:
    return (
        tx.symbol in ("aLEND", "aLINK")
        and tx.from_address.address == ZERO_ADDRESS
        and tx.to_nickname in ("Yearn Treasury", "Yearn Treasury V1")
    )


@other_income("RoboVault Thank You", Network.Fantom)
async def is_robovault_share(tx: TreasuryTx) -> bool:
    """
    After Yearn devs helped robovault with a vulnerability, robovault committed to sending Yearn a portion of their fees.
    """
    if not tx.symbol.startswith("rv") and tx.from_address.is_contract:
        return False

    try:
        strat = await Contract.coroutine(tx.from_address.address)
    except ContractNotVerified:
        return False
    else:
        vault: Optional[Contract] = getattr(strat, "vault", None)

    if vault is None:
        return False

    if await vault.coroutine(block_identifier=tx.block) == tx.token:
        return True

    return (
        tx.from_nickname == "Contract: Strategy"
        and tx.symbol == "rv3USDCc"
        and await ERC20(  # type: ignore [call-overload]
            await vault.coroutine(block_identifier=tx.block),
            asynchronous=True,
        ).symbol
        == "rv3USDCb"
    )


@other_income("Cowswap Gas Reimbursement", Network.Mainnet)
def is_cowswap_gas_reimbursement(tx: TreasuryTx) -> bool:
    return (
        tx.symbol == "ETH"
        and tx.from_nickname == "Cowswap Multisig"
        and tx.to_nickname == "yMechs Multisig"
    )


@other_income("USDS Referral Code", Network.Mainnet)
def is_usds_referral_code(tx: TreasuryTx) -> bool:
    """Yearn earns some USDS for referring deposits to Maker"""
    return (
        tx.symbol == "USDS"
        and tx.from_address.address == "0x3C5142F28567E6a0F172fd0BaaF1f2847f49D02F"
    )


@other_income("yETH Application Fee", Network.Mainnet)
def is_yeth_application_fee(tx: TreasuryTx) -> bool:
    return tx.symbol == "yETH" and tx.to_nickname == "Yearn Treasury" and tx.amount == _POINT_ONE


@other_income("yPRISMA Fees", Network.Mainnet)
def is_yprisma_fees(tx: TreasuryTx) -> bool:
    return tx.symbol == "yvmkUSD-A" and tx.from_nickname == "Contract: YPrismaFeeDistributor"
