---
title: "Install the C++ Linux workload in Visual Studio | Microsoft Docs"
description: "Describes how to download, install, and setup the Linux workload for C++ in Visual Studio."
ms.custom: ""
ms.date: "10/12/2018"
ms.technology: ["cpp-linux"]
ms.tgt_pltfrm: "Linux"
ms.topic: "conceptual"
ms.assetid: e11b40b2-f3a4-4f06-b788-73334d58dfd9
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus", "linux"]
---

# Download, install, and setup the Linux workload

You can use the Visual Studio IDE in Windows to create, edit and debug C++ projects that execute on a Linux physical computer, virtual machine, or the [Windows Subsystem for Linux](/windows/wsl/about). For any of these scenarios, first install the **Linux development with C++** workload.

## Visual Studio setup

1. Type "Visual Studio Installer" in the Windows search menu; look for it under the **Apps** results and double-click it. When the installer opens, choose **Modify**, and then click on the **Workloads** tab. Scroll down to **Other toolsets** and select the **Linux development with C++** workload.

   ![Visual C++ for Linux Development workload](media/linuxworkload.png)

1. If you use CMake or you are targeting IoT or embedded platforms, go to the **Installation details** pane on the right, under **Linux development with C++**, expand **Optional Components** and choose the components you need. 

1. Click **Modify** to continue with the installation.


## Options for creating a Linux environment

If you don't already have a Linux machine, you can create a Linux Virtual Machine on Azure. For more information, see [Quickstart: Create a Linux virtual machine in the Azure portal](/azure/virtual-machines/linux/quick-create-portal).

Another option, on Windows 10, is to activate the Windows Subsystem for Linux. For more information, see [Windows 10 Installation Guide](/windows/wsl/install-win10).

## Linux setup: Ubuntu

The target Linux computer must have **openssh-server**, **g++**, **gdb**, and **gdbserver** installed, and the ssh daemon must be running. **zip** is required for automatic syncing of remote headers with your local machine for Intellisense support. If these applications are not already present, you can install them as follows:

1. At a shell prompt on your Linux computer, run:

   `sudo apt-get install openssh-server g++ gdb gdbserver zip`

   You may be prompted for your root password due to the sudo command.  If so, enter it and continue. Once complete, the required services and tools are installed.

1. Ensure the ssh service is running on your Linux computer by running:

   `sudo service ssh start`

   This starts the service and runs it in the background, ready to accept connections.

## Linux setup: Fedora

The target machine running Fedora uses the **dnf** package installer. To download **openssh-server**, **g++**, **gdb**, **gdbserver** and **zip**, and restart the ssh daemon, follow these instructions:

1. At a shell prompt on your Linux computer, run:

   `sudo dnf install openssh-server g++ gdb gdbserver zip`

   You may be prompted for your root password due to the sudo command.  If so, enter it and continue. Once complete, the required services and tools are installed.

1. Ensure the ssh service is running on your Linux computer by running:

   `sudo systemctl start sshd`

   This starts the service and runs it in the background, ready to accept connections.

