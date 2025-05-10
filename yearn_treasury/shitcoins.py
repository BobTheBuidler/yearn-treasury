from y import Network, convert
from y.constants import CHAINID


_SHITCOINS = {
    Network.Mainnet: (
        "0xC36442b4a4522E871399CD717aBDD847Ab11FE88",  # UNI-V3 NFT, not shitcoin but not pricable
        "0x0329b631464C43f4e8132df7B4ac29a2D89FFdC7",
        "0xa191021599f60E2fDE1bc8c8d1a07e9BD663c4a9",
        "0xD1E5b0FF1287aA9f9A268759062E4Ab08b9Dacbe",  # .crypto domain NFT
        "0x0B39Bb088f03b0baeA1AAC64AaEAb85E714c76e2",
        "0x6cC759B8cE30e719511B6a897CfE449A19f64a92",
    ),
}


SHITCOINS = {convert.to_address(shitcoin) for shitcoin in _SHITCOINS.get(CHAINID, ())}
