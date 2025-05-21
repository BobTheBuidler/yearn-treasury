run:
	poetry run balances

build:
	mypyc yearn_treasury/budget

docs:
	rm -r ./docs/source -f
	rm -r ./docs/_templates -f
	rm -r ./docs/_build -f
	sphinx-apidoc -o ./docs/source ./yearn_treasury

mypy:
	poetry run mypy .
