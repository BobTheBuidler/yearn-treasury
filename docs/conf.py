# Configuration file for the Sphinx documentation builder.
#
# For the full list of built-in configuration values, see the documentation:
# https://www.sphinx-doc.org/en/master/usage/configuration.html

# -- Project information -----------------------------------------------------
# https://www.sphinx-doc.org/en/master/usage/configuration.html#project-information

import os
import sys

project = "yearn-treasury"
copyright = "2025, BobTheBuidler"
author = "BobTheBuidler"

# -- General configuration ---------------------------------------------------
# https://www.sphinx-doc.org/en/master/usage/configuration.html#general-configuration

extensions = [
    "sphinx.ext.autodoc",
    "sphinx.ext.napoleon",
    "sphinx.ext.intersphinx",
    "sphinx.ext.viewcode",
    "a_sync.sphinx.ext",
    "myst_parser",
]

templates_path = ["_templates"]
exclude_patterns = ["_build", "Thumbs.db", ".DS_Store"]

# Looks for objects in documentation of external libraries
intersphinx_mapping = {
    "a_sync": ("https://bobthebuidler.github.io/ez-a-sync", None),
    "brownie": ("https://eth-brownie.readthedocs.io/en/stable", None),
    "checksum_dict": ("https://bobthebuidler.github.io/checksum_dict", None),
    "dictstruct": ("https://bobthebuidler.github.io/dictstruct", None),
    "msgspec": ("https://jcristharif.com/msgspec/", None),
    "pandas": ("https://pandas.pydata.org/docs/", None),
    "pony": ("https://docs.ponyorm.org/", None),
    "python": ("https://docs.python.org/3", None),
    "typing_extensions": ("https://typing-extensions.readthedocs.io/en/latest/", None),
    "web3": ("https://web3py.readthedocs.io/en/stable", None),
    "y": ("https://bobthebuidler.github.io/ypricemagic", None),
}

# -- Options for HTML output -------------------------------------------------
# https://www.sphinx-doc.org/en/master/usage/configuration.html#options-for-html-output

html_theme = "sphinx_rtd_theme"
html_static_path = ["_static"]

autodoc_default_options = {
    "members": True,
    "private-members": True,
    "special-members": "__init__,__call__,__getitem__,__iter__,__aiter__,__next__,__anext__",
    "inherited-members": True,
    "undoc-members": True,
    "member-order": "groupwise",
    # hide private methods that aren't relevant to us here
    # "exclude-members": ",".join([]),
}
autodoc_typehints = "description"
# Don't show class signature with the class' name.
autodoc_class_signature = "separated"

automodule_generate_module_stub = True

sys.path.insert(0, os.path.abspath("./yearn_treasury"))
