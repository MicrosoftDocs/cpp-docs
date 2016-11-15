---
title: "Download, Install and Setup the Linux Workload | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
    - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: e11b40b2-f3a4-4f06-b788-73334d58dfd9
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

# Download, Install and Setup the Linux Workload

## Visual Studio Setup
1. Start the Visual Studio installer and select the **Linux development with C++** workload.

   ![Visual C++ for Linux Development extension](media/linuxworkload.png)

2. Click **Install** to continue with the installation.

## Linux Setup
The target Linux computer must have *openssh-server*, *g++*, *gdb*, and *gdbserver* installed.  These can be installed as follows:
 
1. At a shell prompt on your Linux computer, run:

   `sudo apt-get install openssh-server g++ gdb gdbserver`

   You may be prompted for your root password due to the sudo command.  If so, enter it and continue.  Once complete, these services and tools will be installed.

1. Ensure the ssh service is running on your computer by running

   `sudo service ssh start`
   
   This will start the service and run it in the background, ready to accept connections.
