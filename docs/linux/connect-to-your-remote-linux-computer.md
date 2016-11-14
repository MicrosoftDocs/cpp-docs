---
title: "Connect to Your Remote Linux Computer | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
    - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 5eeaa683-4e63-4c46-99ef-2d5f294040d4
author: "BrianPeek"
ms.author: "brpeek"
manager: "ghogen"
translation.priority.ht: 
    - "cs-cz"
    - "de-de"
    - "es-es"
    - "fr-fr"
    - "it-it"
    - "ja-jp"
    - "ko-kr"
    - "pl-pl"
    - "pt-br"
    - "ru-ru"
    - "tr-tr"
    - "zh-cn"
    - "zh-tw"
---

# Connect to Your Remote Linux Computer

When building, Linux code is copied to your remote Linux computer and then compiled on that system according to the settings selected in Visual Studio.  To setup this remote connection, do one of the following:

1. Build the project for the first time or manually create a new entry by selecting **Tools > Options** and then open the **Cross Platform > Connection Manager** node and click the **Add** button.

   ![Connection Manager](media/settings_connectionmanager.png)

   In either scenario, the **Connect to Remote System** window will be displayed.
   
   ![Connect to Remote System](media/connect.png)

1. Enter the following information:

   | Entry | Description
   | ----- | ---
   | **Host Name**           | the name or IP address of your target device
   | **Port**                | the port that the SSH service is running on, typically 22
   | **User name**           | the user to authenticate as
   | **Authentication type** | the Password or Private Key are both supported
   | **Password**            | the password for the entered user name
   | **Private key file**    | the private key created for ssh connection
   | **Passphrase**          | the passphrase used with private key selected above

1. Click the **Connect** button to attempt a connection to the remote computer.  If the connection fails, the entry boxes which need to be changed will be outlined in red.

   ![Connection Manager Error](media/settings_connectionmanagererror.png)