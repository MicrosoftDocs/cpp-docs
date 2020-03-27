---
title: "Install the C++ Linux workload in Visual Studio"
description: "Describes how to download, install, and setup the Linux workload for C++ in Visual Studio."
ms.date: "06/11/2019"
ms.assetid: e11b40b2-f3a4-4f06-b788-73334d58dfd9
---
# Download, install, and set up the Linux workload

::: moniker range="vs-2015"

Linux projects are supported in Visual Studio 2017 and later.

::: moniker-end

::: moniker range=">=vs-2017"

You can use the Visual Studio IDE on Windows to create, edit and debug C++ projects that execute on a remote Linux system, virtual machine, or the [Windows Subsystem for Linux](/windows/wsl/about).

You can work on your existing code base that uses CMake without having to convert it to a Visual Studio project. If your code base is cross-platform, you can target both Windows and Linux from within Visual Studio. For example, you can edit, build, and debug your code on Windows using Visual Studio, then quickly retarget the project for Linux to build and debug in a Linux environment. Linux header files are automatically copied to your local machine, where Visual Studio uses them to provide full IntelliSense support (Statement Completion, Go to Definition, and so on).

For any of these scenarios, the **Linux development with C++** workload is required.

::: moniker-end

::: moniker range=">=vs-2017"

## Visual Studio setup

1. Type "Visual Studio Installer" in the Windows search box:

   ![Windows search box](media/visual-studio-installer-search.png)

2. Look for the installer under the **Apps** results and double-click it. When the installer opens, choose **Modify**, and then click on the **Workloads** tab. Scroll down to **Other toolsets** and select the **Linux development with C++** workload.

   ![Visual C++ for Linux Development workload](media/linuxworkload.png)

1. If you are targeting IoT or embedded platforms, go to the **Installation details** pane on the right. Under **Linux development with C++**, expand **Optional Components**, and choose the components you need. CMake support for Linux is selected by default.

1. Click **Modify** to continue with the installation.

## Options for creating a Linux environment

If you don't already have a Linux machine, you can create a Linux Virtual Machine on Azure. For more information, see [Quickstart: Create a Linux virtual machine in the Azure portal](/azure/virtual-machines/linux/quick-create-portal).

On Windows 10, you can install and target your favorite Linux distro on the Windows Subsystem for Linux (WSL). For more information, see [Windows Subsystem for Linux Installation Guide for Windows 10](/windows/wsl/install-win10). If you're unable to access the Windows Store, you can [manually download the WSL distro packages](/windows/wsl/install-manual). WSL is a convenient console environment, but is not recommended for graphical applications.

::: moniker-end

::: moniker range="vs-2019"

Linux projects in Visual Studio require the following dependencies to be installed on your remote Linux system or WSL:

- **A compiler** - Visual Studio 2019 has out-of-the-box support for GCC and [Clang](/cpp/build/clang-support-cmake?view=vs-2019).
- **gdb** - Visual Studio automatically launches gdb on the Linux system, and uses the front-end of the Visual Studio debugger to provide a full-fidelity debugging experience on Linux.
- **rsync** and **zip** - the inclusion of rsync and zip allows Visual Studio to extract header files from your Linux system to the Windows filesystem for use by IntelliSense.
- **make**
- **openssh-server** (remote Linux systems only) - Visual Studio connects to remote Linux systems over a secure SSH connection.
- **CMake** (CMake projects only) - You can install Microsoft's [statically linked CMake binaries for Linux](https://github.com/microsoft/CMake/releases).
- **ninja-build** (CMake projects only)- [Ninja](https://ninja-build.org/) is the default generator for Linux and WSL configurations in Visual Studio 2019 version 16.6 or later.

The following commands assume you are using g++ instead of clang.

::: moniker-end

::: moniker range="vs-2017"

Linux projects in Visual Studio require the following dependencies to be installed on your remote Linux system or WSL:

- **gcc** - Visual Studio 2017 has out-of-the-box support for GCC.
- **gdb** - Visual Studio automatically launches gdb on the Linux system and uses the front-end of the Visual Studio debugger to provide a full-fidelity debugging experience on Linux.
- **rsync** and **zip** - the inclusion of rsync and zip allows Visual Studio to extract header files from your Linux system to the Windows filesystem to use for IntelliSense.
- **make**
- **openssh-server** - Visual Studio connects to remote Linux systems over a secure SSH connection.
- **CMake** (CMake projects only) - You can install Microsoft's [statically linked CMake binaries for Linux](https://github.com/microsoft/CMake/releases).

::: moniker-end

::: moniker range="vs-2019"

## Linux setup: Ubuntu on WSL

When you are targeting WSL, there is no need to add a remote connection or configure SSH in order to build and debug. **zip** and **rsync** are required for automatic syncing of Linux headers with Visual Studio for Intellisense support. If the required applications are not already present, you can install them as follows. **ninja-build** is only required for CMake projects.

```bash
sudo apt-get install g++ gdb make ninja-build rsync zip
```

::: moniker-end

::: moniker range=">=vs-2017"

## Ubuntu on remote Linux systems

The target Linux system must have **openssh-server**, **g++**, **gdb**, **ninja-build** (CMake projects only), and **make** installed, and the ssh daemon must be running. **zip** and **rsync** are required for automatic syncing of remote headers with your local machine for Intellisense support. If these applications are not already present, you can install them as follows:

1. At a shell prompt on your Linux computer, run:

   ```bash
   sudo apt-get install openssh-server g++ gdb make ninja-build rsync zip
   ```

   You may be prompted for your root password due to the sudo command.  If so, enter it and continue. Once complete, the required services and tools are installed.

1. Ensure the ssh service is running on your Linux computer by running:

   ```bash
   sudo service ssh start
   ```

   This starts the service and runs it in the background, ready to accept connections.

::: moniker-end

::: moniker range="vs-2019"

## Fedora on WSL

Fedora uses the **dnf** package installer. To download **g++**, **gdb**, **make**, **rsync**, **ninja-build**, and **zip**, run:

   ```bash
   sudo dnf install gcc-g++ gdb rsync ninja-build make zip
   ```

**zip** and **rsync** are required for automatic syncing of Linux headers with Visual Studio for Intellisense support. **ninja-build** is only required for CMake projects.

::: moniker-end

::: moniker range=">=vs-2017"

## Fedora on remote Linux systems

The target machine running Fedora uses the **dnf** package installer. To download **openssh-server**, **g++**, **gdb**, **make**, **ninja-build**, **rsync**, and **zip**, and restart the ssh daemon, follow these instructions. **ninja-build** is only required for CMake projects.

1. At a shell prompt on your Linux computer, run:

   ```bash
   sudo dnf install openssh-server gcc-g++ gdb ninja-build make rsync zip
   ```

   You may be prompted for your root password due to the sudo command.  If so, enter it and continue. Once complete, the required services and tools are installed.

1. Ensure the ssh service is running on your Linux computer by running:

   ```bash
   sudo systemctl start sshd
   ```

   This starts the service and runs it in the background, ready to accept connections.

::: moniker-end

::: moniker range="vs-2015"

Support for Linux C++ development is available in Visual Studio 2017 and later.

::: moniker-end

## Next Steps

You are now ready to create or open a Linux project and configure it to run on the target system. For more information, see:

- [Create a new Linux project](create-a-new-linux-project.md)
- [Configure a Linux CMake project](cmake-linux-project.md)
