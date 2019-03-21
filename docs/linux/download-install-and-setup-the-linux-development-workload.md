---
title: "Install the C++ Linux workload in Visual Studio"
description: "Describes how to download, install, and setup the Linux workload for C++ in Visual Studio."
ms.date: "03/05/2019"
ms.assetid: e11b40b2-f3a4-4f06-b788-73334d58dfd9
---

# Download, install, and set up the Linux workload

You can use the Visual Studio 2017 IDE in Windows to create, edit and debug C++ projects that execute on a Linux physical computer, virtual machine, or the [Windows Subsystem for Linux](/windows/wsl/about). 

You can work on your existing code base that uses CMake or any other build system without having to convert it to a Visual Studio project. If your code base is cross-platform, you can target both Windows and Linux from within Visual Studio. For example, you can edit, debug and profile your code on Windows using Visual Studio, then quickly retarget the project for Linux to do further testing. The Linux header files are automatically copied to your local machine where Visual Studio uses them to provide full IntelliSense support (Statement Completion, Go to Definition, and so on).
 
For any of these scenarios, the **Linux development with C++** workload is required. 

## Visual Studio setup

1. Type "Visual Studio Installer" in the Windows search box:
   ![Windows search box](media/visual-studio-installer-search.png)
2. Look for the installer under the **Apps** results and double-click it. When the installer opens, choose **Modify**, and then click on the **Workloads** tab. Scroll down to **Other toolsets** and select the **Linux development with C++** workload.

   ![Visual C++ for Linux Development workload](media/linuxworkload.png)

1. If you use CMake or you are targeting IoT or embedded platforms, go to the **Installation details** pane on the right, under **Linux development with C++**, expand **Optional Components** and choose the components you need.

    **Visual Studio 2017 version 15.4 and later**<br/>: When you install the Linux C++ workload for Visual Studio, CMake support for Linux is selected by default.

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

   `sudo dnf install openssh-server gcc-g++ gdb gdb-gdbserver zip`

   You may be prompted for your root password due to the sudo command.  If so, enter it and continue. Once complete, the required services and tools are installed.

1. Ensure the ssh service is running on your Linux computer by running:

   `sudo systemctl start sshd`

   This starts the service and runs it in the background, ready to accept connections.

## Ensure you have CMake 3.8 on the remote Linux machine

Your Linux distro may have an older version of CMake. The CMake support in Visual Studio requires the server mode support that was introduced in CMake 3.8. For a Microsoft-provided CMake variant, download the latest prebuilt binaries to your Linux machine at [https://github.com/Microsoft/CMake/releases](https://github.com/Microsoft/CMake/releases).
