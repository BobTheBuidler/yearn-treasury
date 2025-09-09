# mypy: disable-error-code="list-item"
"""
This file contains logic for suppressing eth-portfolio error logs where desired.
"""

from typing import Dict, Final, List

from cchecksum import to_checksum_address
from eth_portfolio._utils import SUPPRESS_ERROR_LOGS
from eth_typing import HexAddress
from y import Network

from yearn_treasury.constants import CHAINID


suppress_logs_for: Final[Dict[Network, List[HexAddress]]] = {
    Network.Mainnet: [
        "0xBF7AA989192b020a8d3e1C65a558e123834325cA",  # unpriceable yvWBTC
    ],
}


def setup_eth_portfolio_logging() -> None:
    for token in suppress_logs_for.get(CHAINID, []):  # type: ignore [call-overload]
        SUPPRESS_ERROR_LOGS.append(to_checksum_address(token))
