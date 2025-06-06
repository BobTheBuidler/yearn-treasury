# Contributing to Yearn Treasury

Yearn Treasury is implemented on top of [DAO Treasury](https://github.com/BobTheBuidler/dao-treasury), which was designed to make it easy for less technical users to contribute new dashboards and visuals. This guide explains how to contribute dashboard updates using Grafana’s user interface. Whether you are creating a new dashboard or editing an existing one, this guide will walk you through the steps in simple language.

---

## Table of Contents

1. [Overview](#overview)
2. [Creating a New Dashboard](#creating-a-new-dashboard)
3. [Editing an Existing Dashboard](#editing-an-existing-dashboard)
4. [Submitting Your Changes](#submitting-your-changes)
5. [Additional Notes](#additional-notes)

---

## Overview

This project defines dashboards using JSON definitions located in the [dao-treasury](https://github.com/BobTheBuidler/dao-treasury/tree/master/dao_treasury/.grafana/provisioning) repo. Community contributors can update existing dashboard visuals or create new ones by using Grafana's intuitive UI.

---

## Creating a New Dashboard

1. **Access the Grafana UI**  
   - Open Grafana in your web browser.
   - You can login to your local deployment as an administrator with username: `admin` and password: `admin`
  
2. **Build Your Dashboard**  
   - Click on the **"+"** icon in the sidebar and choose **Dashboard**.
   - Add new panels by clicking **"Add new panel"**.
   - Configure each panel using the existing data sources available to you.

3. **Customize Visuals**  
   - Use the panel editor to choose the type of visualization (graph, table, etc.) and make any necessary styling or data configuration changes.

4. **Save Your Dashboard**  
   - Click the disk icon or choose **Save** from the dashboard menu.
   - Provide a name and any additional details as prompted.

5. **Export the Dashboard JSON**  
   - Open the dashboard settings (click the gear icon).
   - Navigate to the **JSON model** tab.
   - Click **"Export"** to download the JSON file that represents your dashboard.

6. **Prepare Your Dashboard for Inclusion in the Repo**  
   - Save the exported JSON file with a descriptive name.
   - Place the file into the appropriate subfolder within [dao-treasury/.grafana/provisioning](https://github.com/BobTheBuidler/dao-treasury/tree/master/dao_treasury/.grafana/provisioning).

---

## Editing an Existing Dashboard

1. **Access the Existing Dashboard**  
   - Open Grafana in your web browser.
   - Login to your local deployment as an administrator with username: `admin` and password: `admin`.
   - Navigate to the existing dashboard you wish to modify.
   - Open the dashboard and click **Edit** to modify panels, queries, or visual styles.

2. **Make Your Changes**  
   - Adjust your panels or data queries as needed, using the same tools available when creating a new dashboard.

3. **Export the Updated JSON**  
   - After editing, open the dashboard settings and go to the **JSON model** tab.
   - Export the updated JSON file.

4. **Update the Repo**  
   - Overwrite the existing JSON file in the appropriate folder with your updated version.

---

## Submitting Your Changes

1. **Fork or Clone the Repository**  
   - Ensure you have your fork or a local working copy of the repository.

2. **Create a New Branch**  
   - For new dashboards, consider naming your branch something like `new-dashboard-<short-name>`.
   - For edits, use a branch name like `update-dashboard-<short-name>`.

3. **Commit Your Changes**  
   - Add the new or updated JSON file(s) to your commit.
   - Include a commit message that clearly explains your changes (e.g., "Added new sales dashboard" or "Updated layout for Treasury dashboard").

4. **Open a Pull Request (PR)**  
   - Push your branch to your fork, then open a PR against the main repository.
   - Provide a clear description of what you did and why.
   - Follow any additional PR guidelines as mentioned in dao-treasury's [README](https://github.com/BobTheBuidler/dao-treasury/blob/master/README.md).

---

## Additional Notes

- **Review Process:**  
  Your PR will be reviewed by the maintainers. They may provide feedback or ask for changes before merging.

- **Testing Changes:**  
  If possible, preview your dashboard changes in Grafana before exporting and submitting them. This can help catch any visual or configuration issues early.

- **Help and Questions:**  
  If you are not too technical or need clarification at any step, please don’t hesitate to ask for help via the project’s communication channels.

---

Thank you for contributing to the project and helping improve our Grafana dashboards!
