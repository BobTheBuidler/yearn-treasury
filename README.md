This WIP library runs the [dao-treasury](https://github.com/BobTheBuidler/dao-treasury) exporter for the Yearn Finance treasury.

## Installation

- **pip:**
  ```bash
   pip install yearn-treasury
  ```

- **From Source:**  
  ```bash
  git clone https://github.com/BobTheBuidler/yearn-treasury
  cd yearn-treasury
  poetry install
  ```

## Prerequisites

You must have a [brownie network](https://eth-brownie.readthedocs.io/en/stable/network-management.html) configured to use your RPC.
You will also need [Docker](https://www.docker.com/get-started/) installed on your system.

## Usage

Run the treasury export tool:

```bash
# For pip installations:
yearn-treasury run --network mainnet --interval 12h
```

For local development (from source installation), use:
```bash
poetry run yearn-treasury run --network mainnet --interval 12h
```

**CLI Options:**
- `--network`: The id of the brownie network the exporter will connect to (default: mainnet)
- `--interval`: The time interval between each data snapshot (default: 12h)
- `--daemon`: Run the export process in the background (default: False) (NOTE: currently unsupported)
- `--grafana-port`: Set the port for the Grafana dashboard where you can view data (default: 3004)
- `--renderer-port`: Set the port for the report rendering service (default: 8080)
- `--victoria-port`: Set the port for the Victoria metrics reporting endpoint (default: 8430)

After running the command, the export script will run continuously until you close your terminal.
To access the dashboard, open your browser and navigate to [http://localhost:3004](http://localhost:3004) for the [dao-treasury](https://github.com/BobTheBuidler/dao-treasury) dashboard.

Enjoy!

## Screenshots

#### [Transactions Dashboard](https://bobthebuidler.github.io/yearn-treasury/transactions.html)

![image](https://github.com/user-attachments/assets/4293b62d-827a-4bae-af4f-014c99511f99)
