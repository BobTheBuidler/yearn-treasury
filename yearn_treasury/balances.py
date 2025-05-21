import asyncio
import os
from argparse import ArgumentParser
from typing import Final, final

import brownie
import brownie.network
from eth_portfolio_scripts._args import add_infra_port_args
from eth_portfolio_scripts.balances import export_balances
from eth_typing import ChecksumAddress


try:
    BROWNIE_NETWORK = os.environ["BROWNIE_NETWORK_ID"]
except KeyError:
    raise RuntimeError(
        "You must set env BROWNIE_NETWORK_ID with the id for the brownie network you wish to use"
    ) from None


parser = ArgumentParser(description="Treasury CLI")
subparsers = parser.add_subparsers(dest="command", required=True)

run_parser = subparsers.add_parser("run", help="Run the treasury export tool")
add_infra_port_args(run_parser)
run_parser.add_argument(
    "--network",
    type=str,
    help="The brownie network identifier for the rpc you wish to use. Default: mainnet",
    default="mainnet",
)

run_parser.add_argument(
    "--interval",
    type=str,
    help="The time interval between datapoints. Default: 12h",
    default="12h",
)
run_parser.add_argument(
    "--daemon",
    type=bool,
    help="If True, starts a daemon process instead of running in your terminal. Not currently supported.",
    default=False,
)
run_parser.add_argument(
    "--grafana-port",
    type=int,
    help="Set the port for the Grafana dashboard where you can view your data (default: 3003)",
    default=3003,
)
run_parser.add_argument(
    "--renderer-port",
    type=int,
    help="Set the port for the service that renders visual reports (default: 8080)",
    default=8080,
)
run_parser.add_argument(
    "--victoria-port",
    type=int,
    help="Set the port for the Victoria metrics reporting endpoint (default: 8430)",
    default=8430,
)
args = parser.parse_args()


def export():
    brownie.project.run(__file__)


# TODO: run forever arg
def main():
    brownie.network.connect(BROWNIE_NETWORK)

    import eth_portfolio

    from . import constants, shitcoins

    eth_portfolio.SHITCOINS[constants.CHAINID].update(shitcoins.SHITCOINS)  # type: ignore [index]

    @final
    class Args(constants.Args):
        network: Final[str] = args.network
        interval: Final[str] = args.interval
        grafana_port: Final[int] = args.grafana_port
        renderer_port: Final[int] = args.renderer_port
        victoria_port: Final[int] = args.victoria_port
        daemon: Final[bool] = args.daemon

    os.environ["GRAFANA_PORT"] = str(Args.grafana_port)
    os.environ["RENDERER_PORT"] = str(Args.renderer_port)
    os.environ["VICTORIA_PORT"] = str(Args.victoria_port)

    asyncio.run(export_balances(Args))
