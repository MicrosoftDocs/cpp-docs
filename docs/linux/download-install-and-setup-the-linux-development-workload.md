---
title: "Install the C++ Linux Workload in Visual Studio"
description: "Learn how to download, install, and set up the Linux workload for C++ in Visual Studio."
ms.date: 03/25/2025
ms.topic: how-to
ms.custom: intro-installation
---
# Download, install, and set up the Linux workload

::: moniker range="msvc-140"

Linux projects are supported in Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector for this article to Visual Studio 2017, Visual Studio 2019, or Visual Studio 2022. It's found at the top of the table of contents on this page.

::: moniker-end

::: moniker range=">=msvc-150"

You can use the Visual Studio IDE on Windows to create, edit, and debug C++ projects that execute on a remote Linux system, virtual machine, or the [Windows Subsystem for Linux](/windows/wsl/about).

You can work on your existing code base that uses CMake without having to convert it to a Visual Studio project. If your code base is cross-platform, you can target both Windows and Linux from within Visual Studio. For example, you can edit, build, and debug your code on Windows using Visual Studio. Then, quickly retarget the project for Linux to build and debug in a Linux environment. Linux header files are automatically copied to your local machine. Visual Studio uses them to provide full IntelliSense support (Statement Completion, Go to Definition, and so on).

For any of these scenarios, the **Linux and embedded development with C++** workload is required.

::: moniker-end

::: moniker range=">=msvc-150"

## Visual Studio setup

1. Open the Visual Studio Installer from your Start menu. If you can't find it, type *Visual Studio Installer* in the Windows search box and look for the installer under the **Apps** results.

    :::image type="content" source="media/visual-studio-installer-search.png" alt-text="Screenshot of the Windows search box that contains the text visual studio installer.":::

1. When the installer opens, choose **Modify**, and then click on the **Workloads** tab. Scroll down to **Other toolsets** and select the **Linux and embedded development with C++** workload.

   :::image type="complex" source="./media/linux-workload.png" alt-text="Screenshot highlighting the Visual C++ for Linux and embedded development workload item in Visual Studio Installer.":::
   The Linux and embedded development workload is selected. The Installation details pane is highlighted, which lists what's included in the workload. Which includes: Visual Studio C++ core features, Windows Universal C runtime, Visual C++ for Linux development. An optional component is also selected: Visual C++ tools for CMake and Linux.
   :::image-end:::

1. If you're targeting IoT or embedded platforms, go to the **Installation details** pane on the right. Under **Linux and embedded development with C++**, expand **Optional Components**, and choose the components you need. CMake support for Linux is selected by default.

1. Click **Modify** to continue with the installation.

## Options for creating a Linux environment

If you don't already have a Linux machine, you can create a Linux virtual machine on Azure. For more information, see [Quickstart: Create a Linux virtual machine in the Azure portal](/azure/virtual-machines/linux/quick-create-portal).

On Windows 10 and later, you can install and target your favorite Linux distro on the Windows Subsystem for Linux (WSL). For more information, see [How to install Linux on Windows with WSL](/windows/wsl/install). If you're unable to access the Windows Store, you can [manually download the WSL distro packages](/windows/wsl/install-manual). WSL is a convenient console environment, but it's not recommended for graphical applications.

::: moniker-end

::: moniker range=">=msvc-160"

Linux projects in Visual Studio require the following dependencies to be installed on your remote Linux system or WSL:

- **A compiler** - Visual Studio 2019 and later have full support for GCC and [Clang](../build/clang-support-cmake.md).
- **gdb** - Visual Studio automatically launches gdb on the Linux system, and uses the front end of the Visual Studio debugger to provide a full-fidelity debugging experience on Linux.
- **rsync** and **zip** - the inclusion of rsync and zip allows Visual Studio to extract header files from your Linux system to the Windows filesystem for use by IntelliSense.
- **make**
- **openssh-server** (remote Linux systems only) - Visual Studio connects to remote Linux systems over a secure SSH connection.
- **CMake** (CMake projects only) - You can install Microsoft's [statically linked CMake binaries for Linux](https://github.com/microsoft/CMake/releases).
- **ninja-build** (CMake projects only) - [Ninja](https://ninja-build.org/) is the default generator for Linux and WSL configurations in Visual Studio 2019 version 16.6 or later.

The following commands assume you're using g++ instead of clang.

::: moniker-end

::: moniker range="msvc-150"

Linux projects in Visual Studio require the following dependencies to be installed on your remote Linux system or WSL:

- **gcc** - Visual Studio 2017 has full support for GCC.
- **gdb** - Visual Studio automatically launches gdb on the Linux system and uses the front end of the Visual Studio debugger to provide a full-fidelity debugging experience on Linux.
- **rsync** and **zip** - the inclusion of rsync and zip allows Visual Studio to extract header files from your Linux system to the Windows filesystem to use for IntelliSense.
- **make**
- **openssh-server** - Visual Studio connects to remote Linux systems over a secure SSH connection.
- **CMake** (CMake projects only) - You can install Microsoft's [statically linked CMake binaries for Linux](https://github.com/microsoft/CMake/releases).

::: moniker-end

::: moniker range=">=msvc-160"

## Linux setup: Ubuntu on WSL

When you're targeting WSL, there's no need to add a remote connection or configure SSH to build and debug. **zip** and **rsync** are required for automatic syncing of Linux headers with Visual Studio for Intellisense support. **ninja-build** is only required for CMake projects. If the required applications aren't already present, you can install them using this command:

```bash
sudo apt-get install g++ gdb make ninja-build rsync zip
```

::: moniker-end

::: moniker range=">=msvc-150"

## Ubuntu on remote Linux systems

The target Linux system must have **openssh-server**, **g++**, **gdb**, and **make** installed. **ninja-build** is required for CMake projects only. The **ssh** daemon must be running. **zip** and **rsync** are required for automatic syncing of remote headers with your local machine for Intellisense support. If these applications aren't already present, you can install them as follows:

1. At a shell prompt on your Linux computer, run:

   ```bash
   sudo apt-get install openssh-server g++ gdb make ninja-build rsync zip
   ```

   You might be prompted for your root password to run the `sudo` command. If so, enter it and continue. Once complete, the required services and tools are installed.

1. Ensure the ssh service is running on your Linux computer:

   ```bash
   sudo service ssh start
   ```

   This command starts the service and runs it in the background, ready to accept connections.

::: moniker-end

::: moniker range=">=msvc-160"

## Fedora on WSL

Fedora uses the **dnf** package installer. To download **g++**, **gdb**, **make**, **rsync**, **ninja-build**, and **zip**, run:

   ```bash
   sudo dnf install gcc-g++ gdb rsync ninja-build make zip
   ```

**zip** and **rsync** are required for automatic syncing of Linux headers with Visual Studio for Intellisense support. **ninja-build** is only required for CMake projects.

::: moniker-end

::: moniker range=">=msvc-150"

## Fedora on remote Linux systems

The target machine running Fedora uses the **dnf** package installer. To download **openssh-server**, **g++**, **gdb**, **make**, **ninja-build**, **rsync**, and **zip**, and restart the ssh daemon, follow these instructions. **ninja-build** is only required for CMake projects.

1. At a shell prompt on your Linux computer, run:

   ```bash
   sudo dnf install openssh-server gcc-g++ gdb ninja-build make rsync zip
   ```

   You might be prompted for your root password to run the sudo command. If so, enter it and continue. Once complete, the required services and tools are installed.

1. Ensure the ssh service is running on your Linux computer:

   ```bash
   sudo systemctl start sshd
   ```

   This command starts the service and runs it in the background, ready to accept connections.

## Related content

- [Create a Linux MSBuild C++ project in Visual Studio](create-a-new-linux-project.md)
- [Create a CMake Linux project in Visual Studio](cmake-linux-project.md)

::: moniker-end
