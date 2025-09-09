"""
This file contains logic for suppressing eth-portfolio error logs where desired.
"""

from cchecksum import to_checksum_address
from eth_portfolio._utils import SUPPRESS_ERROR_LOGS
from y import Network

from yearn_treasury.constants import CHAINID


suppress_logs_for = {
    Network.Mainnet: [],
}


def setup_eth_portfolio_logging() -> None:
    for token in suppress_logs_for.get(CHAINID, []):
        SUPPRESS_ERROR_LOGS.append(to_checksum_address(token))
