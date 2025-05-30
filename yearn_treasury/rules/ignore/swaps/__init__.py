from typing import Final

from dao_treasury import ignore


swaps: Final = ignore("Swaps")


from .aave import *
from .compound import *
from .uniswap import *
