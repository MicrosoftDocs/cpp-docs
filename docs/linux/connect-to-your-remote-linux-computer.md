---
title: "Connect to your target Linux system in Visual Studio"
description: "How to connect to a remote Linux machine or WSL from inside a Visual Studio C++ project."
ms.date: "09/04/2019"
ms.assetid: 5eeaa683-4e63-4c46-99ef-2d5f294040d4
---

# Connect to your target Linux system in Visual Studio

::: moniker range="vs-2015"

Linux support is available in Visual Studio 2017 and later.

::: moniker-end

::: moniker range=">=vs-2017"

You can configure a Linux project to target a remote machine or the Windows Subsystem for Linux (WSL). For remote machines, and for WSL on Visual Studio 2017, you need to set up a remote connection. 

## Connect to a remote Linux computer

When building a C++ Linux project for a remote Linux system (VM or physical machine), Linux source code is copied to your remote Linux computer and then compiled based on Visual Studio settings.

To set up this remote connection:

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

   You can use either a password or key file and passphrase for authentication. For many development scenarios, password authentication is sufficient. If you prefer to use a public/private key file, you can create a new one or [reuse an existing one](https://security.stackexchange.com/questions/10203/reusing-private-public-keys). Currently only RSA and DSA keys are supported. 
   
   You can create a private RSA key file by following these steps:

    1. On the Windows machine, create the ssh key pair with `ssh-keygen -t rsa`. This will create a public key and a private key. By default the keys are placed under `C:\Users\%USERNAME%\.ssh` with names `id_rsa.pub` and `id_rsa`.

    1. From Windows, copy the public key to the Linux machine: `scp -p C:\Users\%USERNAME%\.ssh\id_rsa.pub user@hostname`.

    1. On the Linux system, add the key to the list of authorized keys (and ensure the file has the correct permissions): `cat ~/id_rsa.pub >> ~/.ssh/authorized_keys; chmod 600 ~/.ssh/authorized_keys`

1. Click the **Connect** button to attempt a connection to the remote computer. 

   If the connection succeeds, Visual Studio will begin configuring IntelliSense to use the remote headers. For more information, see [IntelliSense for headers on remote systems](configure-a-linux-project.md#remote_intellisense).

   If the connection fails, the entry boxes that need to be changed are outlined in red.

   ![Connection Manager Error](media/settings_connectionmanagererror.png)

   If you are using key files for authentication, ensure the target machine's SSH server is running and configured properly.

   ::: moniker-end

   ::: moniker range="vs-2019"

   Go to **Tools > Options > Cross Platform > Logging** to enable logging to help troubleshoot connection problems:

   ![Remote Logging](media/remote-logging-vs2019.png)

   Logs include connections, all commands sent to the remote machine (their text, exit code and execution time), and all output from Visual Studio to the shell. Logging works for any cross-platform CMake project or MSBuild-based Linux project in Visual Studio.

   You can configure the output to go to a file or to the **Cross Platform Logging** pane in the Output Window. For MSBuild-based Linux projects, commands issued to the remote machine by MSBuild are not routed to the **Output Window** because they are emitted out-of-process. Instead, they are logged to a file with the "msbuild_" prefix.
   
## TCP Port Forwarding

Visual Studio's Linux support has a dependency on TCP port forwarding. **Rsync** and **gdbserver** will be affected if TCP port forwarding is disabled on your remote system. 

Rsync is used by both MSBuild-based Linux projects and CMake projects to [copy headers from your remote system to Windows to be used for IntelliSense](configure-a-linux-project.md#remote_intellisense). If you're not able to enable TCP port forwarding then you can disable the automatic download of remote headers via Tools > Options > Cross Platform > Connection Manager > Remote Headers IntelliSense Manager. If the remote system you are trying to connect to does not have TCP port forwarding enabled, then you will see the following error when the download of remote headers for IntelliSense begins.

![Headers Error](media/port_forwarding_headers_error.png)

Rsync is also used by Visual Studio's CMake support to copy source files to the remote system. If you're not able to enable TCP port forwarding then you can use sftp as your remote copy sources method . Sftp is generally slower than rsync but does not have a dependency on TCP port forwarding. You can manage your remote copy sources method with the remoteCopySourcesMethod property in the [CMake Settings Editor](build/cmakesettings-reference.md#additional-settings-for-cmake-linux-projects). If TCP port forwarding is disabled on your remote system then you will see an error in the CMake output window the first time rsync is invoked.

![Rsync Error](media/port_forwarding_copy_error.png)

Gdbserver can be used for debugging on embedded devices. If you're not able to enable TCP port forwarding then you will need to use the gdb for all remote debugging scenarios. Gdb is used by default when debugging projects on a remote system. 

   ::: moniker-end

## Connect to WSL

::: moniker range="vs-2017"

In Visual Studio 2017, you connect to WSL by using the same steps as connecting to a remote Linux machine as described earlier in this article. Use **localhost** for the **Host Name**.

::: moniker-end

::: moniker range="vs-2019"

Visual Studio 2019 version 16.1 added native support for using C++ with the [Windows Subsystem for Linux (WSL)](https://docs.microsoft.com/windows/wsl/about).  This means that you no longer need to add a remote connection or configure SSH in order to build and debug on your local WSL installation. You can find details on [how to install WSL](https://docs.microsoft.com/windows/wsl/install-win10) here.

To configure your WSL installation to work with Visual Studio you need the following tools installed: gcc or clang, gdb, make, rsync, and zip. You can install them on distros that use apt by using this command, which also installs the g++ compiler: 

```bash
sudo apt install g++ gdb make rsync zip
```
For more information, see [Download, install, and set up the Linux workload](download-install-and-setup-the-linux-development-workload.md).

To configure your project for WSL, see [Configure a Linux project](configure-a-linux-project.md) or [Configure a Linux CMake project](cmake-linux-project.md) depending on which kind of project you have. To follow step-by-step instructions for creating a simple console application with WSL, check out this introductory blog post on [C++ with Visual Studio 2019 and the Windows Subsystem for Linux (WSL)](https://devblogs.microsoft.com/cppblog/c-with-visual-studio-2019-and-windows-subsystem-for-linux-wsl/).

::: moniker-end

## See Also

[Configure a Linux project](configure-a-linux-project.md)<br />
[Configure a Linux CMake project](cmake-linux-project.md)<br />
[Deploy, run and debug your Linux project](deploy-run-and-debug-your-linux-project.md)<br />
[Configure CMake debugging sessions](../build/configure-cmake-debugging-sessions.md)
