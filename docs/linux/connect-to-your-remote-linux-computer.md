---
title: "Connect to your remote Linux computer in Visual Studio"
description: "How to connect to a remote Linux machine from inside a Visual Studio C++ project."
ms.date: "06/07/2019"
ms.assetid: 5eeaa683-4e63-4c46-99ef-2d5f294040d4
---

# Connect to your remote Linux computer

::: moniker range="vs-2019"

When you target Windows Subsystem for Linux (WSL) Visual Studio interacts with your Linux distro directly through the file system; no remote connection is necessary.

::: moniker-end

When building a C++ Linux project for a remote Linux system (VM or physical machine), Linux code is copied to your remote Linux computer and then compiled based on Visual Studio settings. To set up this remote connection:

1. Build the project for the first time or manually create a new entry by selecting **Tools > Options** and then open the **Cross Platform > Connection Manager** node and click the **Add** button.

   ![Connection Manager](media/settings_connectionmanager.png)

   In either scenario, the **Connect to Remote System** window will be displayed.

   ![Connect to Remote System](media/connect.png)

1. Enter the following information:

   | Entry | Description
   | ----- | ---
   | **Host Name**           | Name or IP address of your target device
   | **Port**                | Port that the SSH service is running on, typically 22
   | **User name**           | User to authenticate as
   | **Authentication type** | Password or Private Key are both supported
   | **Password**            | Password for the entered user name
   | **Private key file**    | Private key file created for ssh connection
   | **Passphrase**          | Passphrase used with private key selected above

1. Click the **Connect** button to attempt a connection to the remote computer.  If the connection fails, the entry boxes which need to be changed will be outlined in red.

   ![Connection Manager Error](media/settings_connectionmanagererror.png)