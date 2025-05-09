import asyncio
import os
from argparse import ArgumentParser
from typing import Final, Set, final

import brownie
import brownie.network
from eth_portfolio_scripts._args import add_infra_port_args
from eth_portfolio_scripts.balances import export_balances
from eth_typing import ChecksumAddress


BROWNIE_NETWORK = os.environ.get("BROWNIE_NETWORK_ID")
if not BROWNIE_NETWORK:
    raise RuntimeError("You must set env BROWNIE_NETWORK_ID with the id for the brownie network you wish to use")


parser = ArgumentParser(description="add me")

add_infra_port_args(parser)

parser.add_argument(
    '--network', 
    type=str,
    help='The brownie network identifier for the rpc you wish to use. default: mainnet',
    default='mainnet', 
)

parser.add_argument(
    '--interval', 
    type=str,
    help='The time interval between datapoints. default: 1d',
    default='5m',  # TODO: put this back for prod
)

parser.add_argument(
    '--daemon', 
    type=bool,
    help='TODO: If True, starts a daemon process instead of running in your terminal. Not currently supported.',
    default=False, 
)

args = parser.parse_args()


def export():
    brownie.project.run(__file__)


# TODO: run forever arg
def main():
    brownie.network.connect(BROWNIE_NETWORK)

    from y import Network
    from y.constants import CHAINID
    
    from . import constants

    start_block = {
        Network.Mainnet: ,
    }.get(CHAINID, 0)
    
    @final
    class Args:
        wallet: Final[Set[ChecksumAddress]] = constants.TREASURY_WALLETS
        network: Final[str] = args.network
        interval: Final[str] = args.interval
        # TODO implement in eth-portfolio
        #start_block: Final[BlockNumber] = start_block.get
        label: Final[str] = "Yearn"
        grafana_port: Final[int] = 3003 # args.grafana_port
        renderer_port: Final[int] = 8080 # args.renderer_port
        victoria_port: Final[int] = 8430 # args.victoria_port
        daemon: Final[bool] = args.daemon

    os.environ["GRAFANA_PORT"] = str(Args.grafana_port)
    os.environ["RENDERER_PORT"] = str(Args.renderer_port)
    os.environ["VICTORIA_PORT"] = str(Args.victoria_port)

    asyncio.run(export_balances(Args))
