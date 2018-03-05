---
title: "Connect to your remote Linux computer | Microsoft Docs"
ms.custom: ""
ms.date: "11/06/2017"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-linux"]
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 5eeaa683-4e63-4c46-99ef-2d5f294040d4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus", "linux"]
---

# Connect to Your remote Linux computer

When building, Linux code is copied to your remote Linux computer and then compiled on that system according to the settings chosen in Visual Studio.  To setup this remote connection:

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
   | **Private key file**    | Private key created for ssh connection
   | **Passphrase**          | Passphrase used with private key selected above

1. Click the **Connect** button to attempt a connection to the remote computer.  If the connection fails, the entry boxes which need to be changed will be outlined in red.

   ![Connection Manager Error](media/settings_connectionmanagererror.png)