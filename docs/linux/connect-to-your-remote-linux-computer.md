---
title: "Connect to your target Linux system in Visual Studio"
description: "How to connect to a remote Linux machine or Windows Subsystem for Linux from inside a Visual Studio C++ project."
ms.date: "11/09/2019"
ms.assetid: 5eeaa683-4e63-4c46-99ef-2d5f294040d4
---
# Connect to your target Linux system in Visual Studio

::: moniker range="vs-2015"

Linux support is available in Visual Studio 2017 and later.

::: moniker-end

::: moniker range=">=vs-2017"

You can configure a Linux project to target a remote machine or the Windows Subsystem for Linux (WSL). For remote machines, and for WSL on Visual Studio 2017, you need to set up a remote connection.

## Connect to a remote Linux computer

When building a C++ Linux project for a remote Linux system (VM or physical machine), Linux source code is copied to your remote Linux computer. Then, it's compiled based on Visual Studio settings.

To set up this remote connection:

1. Build the project for the first time. Or, you can create a new entry manually. Select **Tools > Options**, open the **Cross Platform > Connection Manager** node, and then choose the **Add** button.

   ![Connection Manager](media/settings_connectionmanager.png)

   In either scenario, the **Connect to Remote System** window is displayed.

   ![Connect to Remote System](media/connect.png)

1. Enter the following information:

   | Entry | Description
   | ----- | ---
   | **Host Name**           | Name or IP address of your target device
   | **Port**                | Port that the SSH service is running on, typically 22
   | **User name**           | User to authenticate as
   | **Authentication type** | Password and Private Key are both supported
   | **Password**            | Password for the entered user name
   | **Private key file**    | Private key file created for ssh connection
   | **Passphrase**          | Passphrase used with private key selected above

   You can use either a password or a key file and passphrase for authentication. For many development scenarios, password authentication is sufficient. If you prefer to use a public/private key file, you can create a new one or [reuse an existing one](https://security.stackexchange.com/questions/10203/reusing-private-public-keys). Currently only RSA and DSA keys are supported.

   You can create a private RSA key file by following these steps:

   1. On the Windows machine, create the ssh key pair with `ssh-keygen -t rsa`. The command creates a public key and a private key. By default, it places the keys under `C:\Users\%USERNAME%\.ssh`, using the names `id_rsa.pub` and `id_rsa`.

   1. From Windows, copy the public key to the Linux machine: `scp -p C:\Users\%USERNAME%\.ssh\id_rsa.pub user@hostname`.

   1. On the Linux system, add the key to the list of authorized keys (and ensure the file has the correct permissions): `cat ~/id_rsa.pub >> ~/.ssh/authorized_keys; chmod 600 ~/.ssh/authorized_keys`

1. Choose the **Connect** button to attempt a connection to the remote computer.

   If the connection succeeds, Visual Studio will begin configuring IntelliSense to use the remote headers. For more information, see [IntelliSense for headers on remote systems](configure-a-linux-project.md#remote_intellisense).

   If the connection fails, the entry boxes that need to be changed are outlined in red.

   ![Connection Manager Error](media/settings_connectionmanagererror.png)

   If you use key files for authentication, make sure the target machine's SSH server is running and configured properly.

   ::: moniker-end

   ::: moniker range="vs-2019"

   Go to **Tools > Options > Cross Platform > Logging** to enable logging to help troubleshoot connection problems:

   ![Remote Logging](media/remote-logging-vs2019.png)

   Logs include connections, all commands sent to the remote machine (their text, exit code and execution time), and all output from Visual Studio to the shell. Logging works for any cross-platform CMake project or MSBuild-based Linux project in Visual Studio.

   You can configure the output to go to a file or to the **Cross Platform Logging** pane in the Output Window. For MSBuild-based Linux projects, MSBuild commands sent to the remote machine aren't routed to the **Output Window** because they're emitted out-of-process. Instead, they're logged to a file, with a prefix of "msbuild_".

## TCP Port Forwarding

Visual Studio's Linux support has a dependency on TCP port forwarding. **Rsync** and **gdbserver** will be affected if TCP port forwarding is disabled on your remote system. If you're impacted by this dependency, you can upvote this [suggestion ticket](https://developercommunity.visualstudio.com/idea/840265/dont-rely-on-ssh-tcp-port-forwarding-for-c-remote.html) on Developer Community.

rsync is used by both MSBuild-based Linux projects and CMake projects to [copy headers from your remote system to Windows for use by IntelliSense](configure-a-linux-project.md#remote_intellisense). When you can't enable TCP port forwarding, disable the automatic download of remote headers. To disable it, use **Tools > Options > Cross Platform > Connection Manager > Remote Headers IntelliSense Manager**. If the remote system doesn't have TCP port forwarding enabled, you'll see this error when the download of remote headers for IntelliSense begins:

![Headers Error](media/port-forwarding-headers-error.png)

rsync is also used by Visual Studio's CMake support to copy source files to the remote system. If you can't enable TCP port forwarding, you can use sftp as your remote copy sources method. sftp is often slower than rsync, but doesn't have a dependency on TCP port forwarding. You can manage your remote copy sources method with the **remoteCopySourcesMethod** property in the [CMake Settings Editor](../build/cmakesettings-reference.md#additional-settings-for-cmake-linux-projects). If TCP port forwarding is disabled on your remote system, you'll see an error in the CMake output window the first time it invokes rsync.

![Rsync Error](media/port-forwarding-copy-error.png)

gdbserver can be used for debugging on embedded devices. If you can't enable TCP port forwarding, then you must use gdb for all remote debugging scenarios. gdb is used by default when debugging projects on a remote system.

::: moniker-end

## Connect to WSL

::: moniker range="vs-2017"

In Visual Studio 2017, you use the same steps to connect to WSL as you use for a remote Linux machine. Use **localhost** for the **Host Name**.

::: moniker-end

::: moniker range="vs-2019"

Visual Studio 2019 version 16.1 added native support for using C++ with the [Windows Subsystem for Linux (WSL)](/windows/wsl/about). That means you can build and debug on your local WSL installation directly. You no longer need to add a remote connection or configure SSH. You can find details on [how to install WSL](/windows/wsl/install-win10) here.

To configure your WSL installation to work with Visual Studio, you need the following tools installed: gcc or clang, gdb, make, rsync, and zip. You can install them on distros that use apt by using this command, which also installs the g++ compiler:

```bash
sudo apt install g++ gdb make rsync zip
```

For more information, see [Download, install, and set up the Linux workload](download-install-and-setup-the-linux-development-workload.md).

To configure an MSBuild project for WSL, see [Configure a Linux project](configure-a-linux-project.md). To configure a CMake project for WSL, see [Configure a Linux CMake project](cmake-linux-project.md). To follow step-by-step instructions for creating a simple console application with WSL, check out this introductory blog post on [C++ with Visual Studio 2019 and the Windows Subsystem for Linux (WSL)](https://devblogs.microsoft.com/cppblog/c-with-visual-studio-2019-and-windows-subsystem-for-linux-wsl/).

::: moniker-end

## See Also

[Configure a Linux project](configure-a-linux-project.md)\
[Configure a Linux CMake project](cmake-linux-project.md)\
[Deploy, run, and debug your Linux project](deploy-run-and-debug-your-linux-project.md)\
[Configure CMake debugging sessions](../build/configure-cmake-debugging-sessions.md)
