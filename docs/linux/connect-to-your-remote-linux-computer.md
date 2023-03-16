---
title: "Connect to your target Linux system in Visual Studio"
description: "How to connect to a remote Linux machine or Windows Subsystem for Linux from inside a Visual Studio C++ project."
ms.date: 03/14/2022
---
# Connect to your target Linux system in Visual Studio

::: moniker range="msvc-140"

Linux support is available in Visual Studio 2017 and later.

::: moniker-end

::: moniker range="msvc-150"

You can configure a Linux project to target a remote machine or the Windows Subsystem for Linux (WSL). For both remote machines and for WSL, you need to set up a remote connection in Visual Studio 2017.

::: moniker-end

::: moniker range=">=msvc-160"

You can configure a Linux project to target a remote machine or the Windows Subsystem for Linux (WSL). For a remote machine, you need to set up a remote connection in Visual Studio. To connect to WSL, skip ahead to the [Connect to WSL](#connect-to-wsl) section.

::: moniker-end

::: moniker range=">=msvc-150"

When using a remote connection, Visual Studio builds C++ Linux projects on the remote machine. It doesn't matter if it's a physical machine, a VM in the cloud, or WSL.
To build the project, Visual Studio copies the source code to your remote Linux computer. Then, the code gets compiled based on Visual Studio settings.

::: moniker-end

::: moniker range=">=msvc-160"

> [!NOTE]
> Starting in Visual Studio 2019 version 16.5, Visual Studio supports secure, Federal Information Processing Standard (FIPS) 140-2 compliant cryptographic connections to Linux systems for remote development. To use a FIPS-compliant connection, follow the steps in [Set up FIPS-compliant secure remote Linux development](set-up-fips-compliant-secure-remote-linux-development.md) instead.

::: moniker-end

::: moniker range=">=msvc-150"

## Set up the SSH server on the remote system

If `ssh` isn't already set up and running on your Linux system, follow these steps to install it. The examples in this article use Ubuntu 18.04 LTS with OpenSSH server version 7.6. However, the instructions should be the same for any distro using a moderately recent version of OpenSSH.

1. On the Linux system, install and start the OpenSSH server:

   ```bash
   sudo apt install openssh-server
   sudo service ssh start
   ```

1. If you'd like the ssh server to start automatically when the system boots, enable it using systemctl:

   ```bash
   sudo systemctl enable ssh
   ```

## Set up the remote connection

1. In Visual Studio, choose **Tools > Options** on the menu bar to open the **Options** dialog. Then select **Cross Platform > Connection Manager** to open the Connection Manager dialog.

   If you haven't set up a connection in Visual Studio before, when you build your project for the first time, Visual Studio opens the Connection Manager dialog for you.

1. In the Connection Manager dialog, choose the **Add** button to add a new connection.

   ![Screenshot showing the options pane and CrossPlatform > C plus plus > Connection Manager selected. The Add button is highlighted.](media/settings_connectionmanager.png)

   In either scenario, the **Connect to Remote System** window is displayed.

   ![Screenshot showing the Connect to Remote System window which has fields for host name, port, user name, authentication type, and password.](media/connect.png)

1. Enter the following information:

   | Entry | Description |
   |--|--|
   | **Host Name** | Name or IP address of your target device |
   | **Port** | Port that the SSH service is running on, typically 22 |
   | **User name** | User to authenticate as |
   | **Authentication type** | Password and Private Key are both supported |
   | **Password** | Password for the entered user name |
   | **Private key file** | Private key file created for ssh connection |
   | **Passphrase** | Passphrase used with private key selected above |

   You can use either a password or a key file and passphrase for authentication. For many development scenarios, password authentication is sufficient, but key files are more secure. If you already have a key pair, it's possible to reuse it. Currently Visual Studio only supports RSA and DSA keys for remote connections.
   
   > [!NOTE]
   > If using `ssh-keygen` to create the private key, you must specify the switch `-m pem`, or the key will not be accepted by Visual Studio. If your private key begins with `-----BEGIN OPENSSH PRIVATE KEY-----`, you must convert it with `ssh-keygen -p -f <FILE> -m pem`. 

1. Choose the **Connect** button to attempt a connection to the remote computer.

   If the connection succeeds, Visual Studio configures IntelliSense to use the remote headers. For more information, see [IntelliSense for headers on remote systems](configure-a-linux-project.md#remote_intellisense).

   If the connection fails, the entry boxes that need to be changed are outlined in red.

   ![Screenshot of the Connect to Remote System window with the host name and port fields outlined in red to indicate that they are incorrect.](media/settings_connectionmanagererror.png)

   If you use key files for authentication, make sure the target machine's SSH server is running and configured properly.

   If you have trouble connecting to WSL on `localhost`, see [Fix WSL `localhost` connection problems](#fix-wsl-localhost-connection-problems).

::: moniker-end

::: moniker range=">=msvc-160"

## Host key verification

In Visual Studio version 16.10 or later, you'll be asked to verify the server's host key fingerprint whenever Visual Studio connects to a remote system for the first time. You may be familiar with this process if you've used the OpenSSH command-line client or PuTTY before. The fingerprint identifies the server. Visual Studio uses the fingerprint to ensure it's connecting to the intended and trusted server.

The first time Visual Studio establishes a new remote connection, you'll be asked to accept or deny the host key fingerprint presented by the server. Or, anytime there are changes to a cached fingerprint. You can also verify a fingerprint on demand: select a connection in the Connection Manager and choose **Verify**.

If you upgrade to Visual Studio 16.10 or later from an older version, it treats any existing remote connections as new connections. You'll be prompted to accept the host key fingerprint first. Then, Visual Studio establishes a connection and caches the accepted fingerprint.

You can also update remote connections from `ConnectionManager.exe` using the `update` argument.

## Supported SSH algorithms

Starting in Visual Studio version 16.9, support for older, insecure SSH algorithms used to encrypt data and exchange keys, has been removed. Only the following algorithms are supported. They're supported for both client-to-server and server-to-client SSH communication:

| Algorithm type | Supported algorithms |
|--|--|
| Encryption | `aes128-cbc`</br>`aes128-ctr`</br>`aes192-cbc`</br>`aes192-ctr`</br>`aes256-cbc`</br>`aes256-ctr` |
| HMAC | `hmac-sha2-256`</br>`hmac-sha2-512` |
| Key exchange | `diffie-hellman-group14-sha256`</br>`diffie-hellman-group16-sha512`</br>`diffie-hellman-group-exchange-sha256`</br>`ecdh-sha2-nistp256`</br>`ecdh-sha2-nistp384`</br>`ecdh-sha2-nistp521` |
| Host key | `ecdsa-sha2-nistp256`</br>`ecdsa-sha2-nistp384`</br>`ecdsa-sha2-nistp521`</br>`ssh-dss`</br>`ssh-rsa` |

### Configure the SSH server

First, a little background. You can't select the SSH algorithm to use from Visual Studio. Instead, the algorithm is determined during the initial handshake with the SSH server. Each side (client and server) provides a list of algorithms it supports, and then the first algorithm common to both is selected. The connection succeeds as long as there's at least one algorithm in common between Visual Studio and the server for encryption, HMAC, key exchange, and so on.

The Open SSH configuration file (*`sshd_config`*) doesn't configure which algorithm to use by default. The SSH server should use secure defaults when no algorithms are specified. Those defaults depend on the version and vendor of the SSH server.  If Visual Studio doesn't support those defaults, you'll likely see an error like: "Could not connect to the remote system. No common client to server HMAC algorithm was found." The error may also appear if the SSH server is configured to use algorithms that Visual Studio doesn't support.

The default SSH server on most modern Linux distributions should work with Visual Studio. However, you may be running an older SSH server that's configured to use older, insecure algorithms. The following example explains how to update to more secure versions.

In the following example, the SSH server uses the insecure `hmac-sha1` algorithm, which isn't supported by Visual Studio 16.9. If the SSH server uses OpenSSH, you can edit the `/etc/ssh/sshd_config` file as shown below to enable more secure algorithms. For other SSH servers, refer to the server's documentation for how to configure them.

First, verify that the set of algorithms your server is using  includes algorithms supported by Visual Studio. Run the following command on the remote machine to list the algorithms supported by the server:

```bash
ssh -Q cipher; ssh -Q mac; ssh -Q kex; ssh -Q key
```

The command produces output like:

```bash
3des-cbc
aes128-cbc
aes192-cbc
aes256-cbc
...
ecdsa-sha2-nistp521-cert-v01@openssh.com
sk-ecdsa-sha2-nistp256-cert-v01@openssh.com
```

The output lists all the encryption, HMAC, key exchange, and host key algorithms supported by your SSH server. If the list doesn't include algorithms supported by Visual Studio, then you'll need to upgrade your SSH server before proceeding.

You can enable algorithms supported by Visual Studio by editing `/etc/ssh/sshd_config` on the remote machine. The following examples show how to add various types of algorithms to that configuration file.

These examples can be added anywhere in `/etc/ssh/sshd_config`. Ensure that they're on their own lines.

After editing the file, restart the SSH server (`sudo service ssh restart` on Ubuntu) and attempt to connect again from Visual Studio.

#### Cipher  example

Add: `Ciphers <algorithms to enable>`  
For example: `Ciphers aes128-cbc,aes256-cbc`

#### HMAC example

Add: `MACs <algorithms to enable>`  
For example: `MACs hmac-sha2-256,hmac-sha2-512`

#### Key exchange example

Add: `KexAlgorithms <algorithms to enable>`  
For example: `KexAlgorithms ecdh-sha2-nistp256,ecdh-sha2-nistp384`

#### Host key example

Add: `HostKeyAlgorithms <algorithms to enable>`  
For example: `HostKeyAlgorithms ssh-dss,ssh-rsa`

## Logging for remote connections

   You can enable logging to help troubleshoot connection problems. On the menu bar, select **Tools > Options**. In the **Options** dialog, select **Cross Platform > Logging**:

   ![Screenshot of the Remote Logging screen with options to enable logging, log file location, and whether to log to the output window.](media/remote-logging-vs2019.png)

   Logs include connections, all commands sent to the remote machine (their text, exit code and execution time), and all output from Visual Studio to the shell. Logging works for any cross-platform CMake project or MSBuild-based Linux project in Visual Studio.

   You can configure the output to go to a file or to the **Cross Platform Logging** pane in the Output window. For MSBuild-based Linux projects, MSBuild commands sent to the remote machine aren't routed to the **Output Window** because they're emitted out-of-process. Instead, they're logged to a file, with a prefix of "msbuild_".

## Command-line utility for the Connection Manager  

**Visual Studio 2019 version 16.5 or later**: `ConnectionManager.exe` is a command-line utility to manage remote development connections outside of Visual Studio. It's useful for tasks such as provisioning a new development machine. Or, you can use it to set up Visual Studio for continuous integration. For examples and a complete reference to the ConnectionManager command, see [ConnectionManager reference](connectionmanager-reference.md).  

::: moniker-end

::: moniker range=">=msvc-150"

## TCP Port Forwarding

The `rsync` command is used by both MSBuild-based Linux projects and CMake projects to [copy headers from your remote system to Windows for use by IntelliSense](configure-a-linux-project.md#remote_intellisense). When you can't enable TCP port forwarding, disable the automatic download of remote headers. To disable it, use **Tools > Options > Cross Platform > Connection Manager > Remote Headers IntelliSense Manager**. If the remote system doesn't have TCP port forwarding enabled, you'll see this error when the download of remote headers for IntelliSense begins:

![Screenshot showing an error that the SSH channel couldn't be opened, and a path to log file for more details.](media/port-forwarding-headers-error.png)

`rsync` is also used by Visual Studio's CMake support to copy source files to the remote system. If you can't enable TCP port forwarding, you can use `sftp` as your remote copy sources method. `sftp` is often slower than `rsync`, but doesn't have a dependency on TCP port forwarding. You can manage your remote copy sources method with the `remoteCopySourcesMethod` property in the [CMake Settings Editor](../build/cmakesettings-reference.md#settings-for-cmake-linux). If TCP port forwarding is disabled on your remote system, you'll see an error in the CMake output window the first time it invokes `rsync`.

![Screenshot of the output window which shows an Rsync Error that the SSH channel couldn't be opened.](media/port-forwarding-copy-error.png)

`gdbserver` can be used for debugging on embedded devices. If you can't enable TCP port forwarding, then you must use `gdb` for all remote debugging scenarios. `gdb` is used by default when debugging projects on a remote system.

Visual Studio's Linux support has a dependency on TCP port forwarding. Both `rsync` and `gdbserver` are affected if TCP port forwarding is disabled on your remote system. If this dependency impacts you, vote for this [suggestion ticket](https://developercommunity2.visualstudio.com/t/shDonshshtsh-shrelysh-s/840265?space=62) on Developer Community.

## Connect to WSL

::: moniker-end

::: moniker range="msvc-150"

In Visual Studio 2017, you use the same steps to connect to WSL as you use for a remote Linux machine. Use `localhost` for the **Host Name**.

::: moniker-end

::: moniker range=">=msvc-160"

Starting in Visual Studio 2019 version 16.1, Visual Studio has native support for using C++ with the [Windows Subsystem for Linux (WSL)](/windows/wsl/about). That means you can build and debug on your local WSL installation directly. You no longer need to add a remote connection or configure SSH. You can find details on [how to install WSL](/windows/wsl/install-win10) here.

To configure your WSL installation to work with Visual Studio, you need the following tools installed: `gcc` or `clang`, `gdb`, `make`, `ninja-build` (only required for CMake projects using Visual Studio 2019 version 16.6 or later), `rsync`, and `zip`. You can install them on distros that use `apt` by using this command, which also installs the g++ compiler:

```bash
sudo apt install g++ gdb make ninja-build rsync zip
```

### Fix WSL `localhost` connection problems

When connecting to Windows Subsystem for Linux (WSL) on `localhost`, you may run into a conflict with the Windows `ssh` client on port 22. In WSL, change the port that `ssh`expects requests from to 23 in `/etc/ssh/sshd_config`:

```bash
Port 23
```

If you're connecting using a password, ensure that the following is set in `/etc/ssh/sshd_config`:

```bash
# To disable tunneled clear text passwords, change to no here!
PasswordAuthentication yes
```

After making these changes, restart the SSH server (`sudo service ssh restart` on Ubuntu).

Then retry your connection to `localhost` using port 23.

For more information, see [Download, install, and set up the Linux workload](download-install-and-setup-the-linux-development-workload.md).

To configure an MSBuild project for WSL, see [Configure a Linux project](configure-a-linux-project.md). To configure a CMake project for WSL, see [Configure a Linux CMake project](cmake-linux-project.md). To follow step-by-step instructions for creating a simple console application with WSL, check out this introductory blog post on [C++ with Visual Studio 2019 and the Windows Subsystem for Linux (WSL)](https://devblogs.microsoft.com/cppblog/c-with-visual-studio-2019-and-windows-subsystem-for-linux-wsl/).

::: moniker-end

## See Also

[Configure a Linux project](configure-a-linux-project.md)\
[Configure a Linux CMake project](cmake-linux-project.md)\
[Deploy, run, and debug your Linux project](deploy-run-and-debug-your-linux-project.md)\
[Configure CMake debugging sessions](../build/configure-cmake-debugging-sessions.md)
