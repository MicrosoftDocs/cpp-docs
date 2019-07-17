---
title: "Connect to your target Linux system in Visual Studio"
description: "How to connect to a remote Linux machine or WSL from inside a Visual Studio C++ project."
ms.date: "06/19/2019"
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

   ::: moniker-end

## Connect to WSL

::: moniker range="vs-2017"

In Visual Studio 2017, you connect to WSL by using the same steps as connecting to a remote Linux machine as described earlier in this article. Use **localhost** for the **Host Name**.

::: moniker-end

::: moniker range="vs-2019"

In Visual Studio 2019 version 16.1, it is not necessary to add a remote connection or configure SSH when targeting WSL. All that is required on the Linux system is gcc, gdb, make, rsync, and zip. Visual Studio requires rsync and zip only to extract header files on first use from your WSL instance to the Windows filesystem to use for IntelliSense. In Visual Studio 2019 version 16.1, WSL support is based on Windows version 1809. You can be running a later version of Windows, but Visual Studio does not yet take advantage of new WSL capabilities.

If your distro supports apt, you can install the required packages with this command:

```bash
sudo apt install g++ gdb make rsync zip
```

To configure your project for WSL, see [Configure a Linux project](configure-a-linux-project.md) or [Configure a Linux CMake project](cmake-linux-project.md) depending on which kind of project you have.

::: moniker-end

## See Also

[Configure a Linux project](configure-a-linux-project.md)<br />
[Configure a Linux CMake project](cmake-linux-project.md)<br />
[Deploy, run and debug your Linux project](deploy-run-and-debug-your-linux-project.md)<br />




