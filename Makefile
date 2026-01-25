.PHONY: build docs

run:
	poetry run main

build:
	mypyc yearn_treasury/budget yearn_treasury/rules/constants.py yearn_treasury/rules/cost_of_revenue/gas.py yearn_treasury/rules/expense yearn_treasury/rules/ignore/swaps/conversion_factory.py yearn_treasury/rules/ignore/swaps/curve.py yearn_treasury/rules/ignore/swaps/gearbox.py yearn_treasury/rules/ignore/swaps/iearn.py yearn_treasury/rules/ignore/swaps/otc.py yearn_treasury/rules/ignore/swaps/pooltogether.py yearn_treasury/rules/ignore/swaps/synthetix.py yearn_treasury/rules/ignore/swaps/unwrapper.py yearn_treasury/rules/ignore/swaps/vaults.py yearn_treasury/rules/ignore/swaps/woofy.py yearn_treasury/rules/ignore/swaps/yla.py yearn_treasury/rules/ignore/general.py yearn_treasury/rules/ignore/unit.py yearn_treasury/rules/ignore/weth.py yearn_treasury/rules/ignore/ygov.py yearn_treasury/rules/other_expense yearn_treasury/rules/other_income yearn_treasury/rules/revenue/bribes.py yearn_treasury/rules/revenue/farming.py yearn_treasury/rules/revenue/keepcoins.py yearn_treasury/rules/revenue/seasolver.py yearn_treasury/rules/revenue/yteams.py yearn_treasury/_db.py yearn_treasury/_ens.py yearn_treasury/_logging.py yearn_treasury/vaults.py

docs:
	rm -r ./docs/source -f
	rm -r ./docs/_templates -f
	rm -r ./docs/_build -f
	poetry run sphinx-apidoc -o ./docs/source ./yearn_treasury

mypy:
	poetry run mypy

# Update the TaskStart hook submodule and commit the change
hooks:
	mkdir -p .clinerules/hooks/submodules
	# TaskStart hook update
	if [ ! -d .clinerules/hooks/submodules/TaskStart ]; then 		git submodule add https://github.com/BobTheBuidler/TaskStart.git .clinerules/hooks/submodules/TaskStart || true; 		git add .gitmodules .clinerules/hooks/submodules/TaskStart; 	fi
	git submodule update --init --recursive
	git -c protocol.file.allow=always submodule update --remote .clinerules/hooks/submodules/TaskStart
	cp .clinerules/hooks/submodules/TaskStart/TaskStart .clinerules/hooks/TaskStart
	git add .clinerules/hooks/submodules/TaskStart
	git add .clinerules/hooks/TaskStart
	if ! git diff --cached --quiet; then 		git commit -m "Update TaskStart hook submodule and file"; 	fi
	# PostToolUse hook update
	if [ ! -d .clinerules/hooks/submodules/PostToolUse ]; then 		git submodule add https://github.com/BobTheBuidler/PostToolUse.git .clinerules/hooks/submodules/PostToolUse || true; 		git add .gitmodules .clinerules/hooks/submodules/PostToolUse; 	fi
	git submodule update --init --recursive
	git -c protocol.file.allow=always submodule update --remote .clinerules/hooks/submodules/PostToolUse
	cp .clinerules/hooks/submodules/PostToolUse/PostToolUse .clinerules/hooks/PostToolUse
	chmod +x .clinerules/hooks/PostToolUse
	git add .clinerules/hooks/submodules/PostToolUse
	git add .clinerules/hooks/PostToolUse
	if ! git diff --cached --quiet; then 		git commit -m "Update PostToolUse hook submodule and file"; 	fi
