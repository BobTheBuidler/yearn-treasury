.PHONY: build docs

run:
	poetry run main

build:
	mypyc yearn_treasury/budget yearn_treasury/rules/constants.py yearn_treasury/rules/cost_of_revenue/gas.py yearn_treasury/rules/expense yearn_treasury/rules/ignore/general.py yearn_treasury/rules/ignore/weth.py yearn_treasury/rules/ignore/ygov.py yearn_treasury/rules/other_income yearn_treasury/rules/revenue/bribes.py yearn_treasury/rules/revenue/keepcoins.py yearn_treasury/rules/revenue/seasolver.py yearn_treasury/_db.py yearn_treasury/_ens.py yearn_treasury/vaults.py --strict --pretty --disable-error-code=unused-ignore --disable-error-code=type-arg --disable-error-code=union-attr --disable-error-code=no-any-return --disable-error-code=misc

docs:
	rm -r ./docs/source -f
	rm -r ./docs/_templates -f
	rm -r ./docs/_build -f
	poetry run sphinx-apidoc -o ./docs/source ./yearn_treasury

mypy:
	poetry run mypy .
