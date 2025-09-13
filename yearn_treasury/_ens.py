"""
ENS resolver and event topic utilities for Yearn Treasury.

This module defines the ENS resolver contract and event topic set
used for dynamic vault discovery and event processing. It supports
vault mapping and analytics by enabling on-chain lookups and event
filtering for Yearn vaults.

Key Responsibilities:
    - Provide the ENS resolver contract for vault registry lookups.
    - Construct event topic sets for AddressChanged events.
    - Used by vault discovery, analytics, and reporting modules.
"""

# TODO: move this to dao-treasury

from typing import Final, List

from brownie import chain, web3
from eth_typing import HexStr
from web3._utils.abi import filter_by_name
from web3._utils.events import construct_event_topic_set
from y import Contract, Events


resolver: Final[Contract] = Contract("0x4976fb03C32e5B8cfe2b6cCB31c09Ba78EBaBa41")


def topics_for_name(name: str) -> List[HexStr]:
    return construct_event_topic_set(
        filter_by_name("AddressChanged", resolver.abi)[0],  # type: ignore [arg-type]
        web3.codec,
        {"node": web3.ens.namehash(name)},  # type: ignore [union-attr]
    )


topics: Final = topics_for_name("v2.registry.ychad.eth")


def resolve_all_previous():
    return [
        Contract(event["newAddress"].hex())  # type: ignore [attr-defined]
        for event in Events(  # type: ignore [attr-defined]
            addresses=resolver, topics=topics
        ).events(chain.height)
    ]


__all__ = ["resolver", "topics"]
