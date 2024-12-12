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

When using a remote connection, Visual Studio builds C++ Linux projects on the remote machine. It doesn't matter if it's a physical machine, a virtual machine in the cloud, or WSL.
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

   :::image type="complex" source="media/connect-to-your-remote-linux-computer/settings-connection-manager-updated.png" alt-text="Screenshot of the Visual Studio options pane.":::
   In the options pane, CrossPlatform > C++ > Connection Manager is selected and the Add button is highlighted.
   :::image-end:::

   To edit an existing connection, choose **Edit**. In either scenario, the **Connect to Remote System** window is displayed.
   
   :::image type="complex" source="media/connect-to-your-remote-linux-computer/connect-updated.png" alt-text="Screenshot of the Visual Studio Connect to Remote System window.":::
   In the Connect to Remote System window, there are fields for host name, port, user name, authentication type, and password. Port is set to 22. Authentication type is set to 'Password'.
   :::image-end:::
   
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
   
   You can't click the **Connect** button until all the required fields are completed and the port is set to an integer between 1 and 65535.
   
   You can use either a password or a key file and passphrase for authentication. Key files are more secure than username/password. If you already have a key pair, it's possible to reuse it.
   
   Version of Visual Studio before 17.10 support Elliptic Curve (EC), Rivert-Shamir-Adleman (RSA), and Digital signature algorithm (DSA) keys for remote connections. Because of security concerns, DSA keys are no longer supported in VS 17.10 and later. RSA keys were also not supported in VS 17.10 and VS 17.11 but are supported again in VS 17.12 and later. To create a key pair compatible with the connection manager you can use the command:
   
   `ssh-keygen -m pem -t ecdsa -f <key-name>`
   
   > [!NOTE]
   > If using `ssh-keygen` to create the private key, you must specify the switch `-m pem`, or the key will not be accepted by Visual Studio. If your private key begins with `-----BEGIN OPENSSH PRIVATE KEY-----`, you must convert it with `ssh-keygen -p -f <FILE> -m pem`.
   
1. Choose the **Connect** button to attempt a connection to the remote computer.

   If the connection succeeds, Visual Studio configures IntelliSense to use the remote headers. For more information, see [IntelliSense for headers on remote systems](configure-a-linux-project.md#remote_intellisense).
   
   If the connection fails, an info bar with error information appears and the fields that you may need to change are outlined in red.
   
   :::image type="content" source="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAboAAAHtCAYAAABvfLvKAAAAAXNSR0IArs4c6QAAAARnQU1BAACxjwv8YQUAAAAJcEhZcwAADsMAAA7DAcdvqGQAAEHNSURBVHhe7d0PnB1XXffxqSB/REFRQBAbNonCQgIUsD6oQNiE9A8pC8JW/kiF0hCohqR/UkJagT6UEFpbEyqBsFCwlcfagDRNlDQkIQ+gIj5QICmBks0SRRAqyB9RZNtXnv2end/N2ZOZuTP33rl/zn7er9fsnTkzc+bMuXPnN+fM3L2nTE1NHU8AAIjUT6WvAABEiUAHAIgagQ4AEDUCHQAgagQ6AEDUCHQAgKgR6AAAUSPQAQCiRqADAESNQAcAiBqBDgAQNQIdACBqBDoAQNQIdACAqBHoAABRI9ABAPrGrl27krvvvjudmu2ee+5JbrrppnSqPAIdAKBvPP7xj0/WrFlzUrBTkLv00kuTX/qlX0pTyiPQAQD6xvz585OrrrpqVrCzIHfGGWckZ511lkur4pSpqanj6TgAAH3h6NGjyRVXXJFce+21ydvf/vaWg5wQ6AAAfemuu+5KxsbGkvXr1ycveclL0tTq6LoEAPQddVdu3bo1Wb16dbJz587cB1TKINABAPqKf0/uggsuOOmeXVUEOgBA38h68CTrAZUquEcHAOgb73znO11gy3rwRA+ovOMd70g2b96cppRDoAMARI2uSwBA1Ah0AICoEegAAFEj0AEAokagAwBEjUAHAIgagQ4AEDUCHQAgagQ6AEDUCHQAgKgR6AAAUSPQAQCiRqADAESNQAcAiBqBDgAQNQIdACBqBDoAQNQIdACAqBHoAABRO2Vqaup4Ot4VP/7xj5O/+Zu/Sf78z/88+epXv5r85Cc/cekPf/jDk6c+9anJq171quS0005zaRgMGzZsSP7qr/4qnTrhV3/1V5MLLrggefGLX5zc9773TVNRxbe+9a3kAx/4QPLRj340+Zd/+ReX9qAHPSh5whOekFx55ZXJr//6r7s0APm62qLTh/X0009PrrjiiuQXf/EX3ev111+fXH311cnv/M7vJP/4j/+YfPazn02Xxl133ZW86EUvcq9VrV+/3p0gu2XevHnuvbRB7+nQ0FDypje9KTnvvPOSe+65J11y8L3rXe9K3vzmN6dT9fmnf/qnZMmSJckHP/hB92p1+4IXvCA5cuRIcuzYsXTJ+uzcuTP5gz/4g3QKGExda9HppPuWt7wleelLX5pcfvnlyQMe8IB0zmxq8eXNm2s+9rGPJa95zWvcBULVK/cFCxYkb3jDG1yLqm5q0R0+fDj5yEc+kqacYPvQrbJ0gwLN8PBwsnHjxjSl8773ve8lz3nOc5LHPOYxyU033ZT5mejGZ6XovQUGRVdadB//+MddkNPJTq9FH06CXFx0sj7rrLOS2267LU1BGf/wD/+QfPe7300uuuii3M8EnxWgnK4Euk2bNrmTXSxX9KjmyU9+cnLnnXemUyhD9+bk53/+590rgNbVHuj+/u//3t1P0AMJrdKHXvdEnv70p7suOQ1nn3128hd/8ReZ937UXaZldG9LD7y88pWvdF1Ntp66AkNaVvO1rrane1xPfOITXZq2q23l+c53vpO8/e1vT37jN37DLa/1tL6drLJ88YtfdOWybah8L3nJS1w53vve97o0dfmJLhI0rUHly2P7oEHe9ra3NabVBeWrWqft+M///M/koQ99aDo124c//GG3XSuD6uDTn/50OvcE/z3V+2frWF2rG0+0X6tXr26839q/rPfbVKkHm6/3Tg/f2LS6Mn1aT++h5amy6L3WsViWdVV/8pOfdK9Ffv/3fz8544wz0qlsWkaDsWPcjlkro+pXtE9K135qf21fNfiq7Ksd16L6tXVUBt17tPrWujoObHt6P3S/EmjVfd74xjfWelddJzIFuquuuipNqUYnuN/7vd9L/v3f/z157Wtf6z5EIyMjyQMf+ED34dCJ4Hd/93eTn/qpEzH76NGjya5du5JTTz01ueSSS5JzzjknWbVqVeMDo/uFj3/84xsfOlGw0k1/petEuXjxYrfO2NhY8u1vfzt53/ve5552e8pTnpKuMeNLX/qSy18n8z/8wz9MXv7ylydPe9rTkr/+679O/vIv/9J13T3kIQ9Jl56hezuvf/3rk0c/+tHJ2rVr3T799m//tjvJqMyLFi1yJ4H58+e78upE/MIXvtCVX0/bhfmZ+9znPq7cWk4nd9XLhRde6KZ1MnnUox7llmulTovs27fP5ZV3MaMHUlRvZ555Zpoyc4LUiXf79u3JK17xiuTVr361K8M///M/J9dcc43b98c+9rHp0ifeU6138803u4uAc88919WX7mH93d/9nau30dFRV6960En5/eAHP3D7pIdl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" alt-text="Screenshot of the Visual Studio Connect to Remote System window. The host name and port fields are outlined in red to indicate incorrect entries.":::
   
   If you use key files for authentication, make sure the target machine's SSH server is running and configured properly.
   
   If you have trouble connecting to WSL on `localhost`, see [Fix WSL `localhost` connection problems](#fix-wsl-localhost-connection-problems).
   
::: moniker-end

::: moniker range=">=msvc-160"

## Host key verification

In Visual Studio version 16.10 or later, you're asked to verify the server's host key fingerprint whenever Visual Studio connects to a remote system for the first time. You may be familiar with this process if you've used the OpenSSH command-line client or PuTTY before. The fingerprint identifies the server. Visual Studio uses the fingerprint to ensure it's connecting to the intended and trusted server.

The first time Visual Studio establishes a new remote connection, you're asked to accept or deny the host key fingerprint presented by the server. Or, anytime there are changes to a cached fingerprint. You can also verify a fingerprint on demand: select a connection in the Connection Manager and choose **Verify**.

If you upgrade to Visual Studio 16.10 or later from an older version, it treats any existing remote connections as new connections. You're prompted to accept the host key fingerprint first. Then, Visual Studio establishes a connection and caches the accepted fingerprint.

You can also update remote connections from `ConnectionManager.exe` using the `update` argument.

## Supported SSH algorithms

Starting in Visual Studio version 16.9, support for older, insecure SSH algorithms used to encrypt data and exchange keys is removed. Only the following algorithms are supported. They're supported for both client-to-server and server-to-client SSH communication:

| Algorithm type | Supported algorithms |
|--|--|
| Encryption | `aes128-cbc`</br>`aes128-ctr`</br>`aes192-cbc`</br>`aes192-ctr`</br>`aes256-cbc`</br>`aes256-ctr` |
| HMAC | `hmac-sha2-256`</br>`hmac-sha2-512` |
| Key exchange | `diffie-hellman-group14-sha256`</br>`diffie-hellman-group16-sha512`</br>`diffie-hellman-group-exchange-sha256`</br>`ecdh-sha2-nistp256`</br>`ecdh-sha2-nistp384`</br>`ecdh-sha2-nistp521` |
| Host key | `ecdsa-sha2-nistp256`</br>`ecdsa-sha2-nistp384`</br>`ecdsa-sha2-nistp521` |

### Configure the SSH server

First, a little background. You can't select the SSH algorithm to use from Visual Studio. Instead, the algorithm is determined during the initial handshake with the SSH server. Each side (client and server) provides a list of algorithms it supports, and then the first algorithm common to both is selected. The connection succeeds as long as there's at least one algorithm in common between Visual Studio and the server for encryption, HMAC, key exchange, and so on.

The Open SSH configuration file (*`sshd_config`*) doesn't configure which algorithm to use by default. The SSH server should use secure defaults when no algorithms are specified. Those defaults depend on the version and vendor of the SSH server. If Visual Studio doesn't support those defaults, you'll likely see an error like: "Could not connect to the remote system. No common client to server HMAC algorithm was found." The error may also appear if the SSH server is configured to use algorithms that Visual Studio doesn't support.

The default SSH server on most modern Linux distributions should work with Visual Studio. However, you may be running an older SSH server that's configured to use older, insecure algorithms. The following example explains how to update to more secure versions.

In the following example, the SSH server uses the insecure `hmac-sha1` algorithm, which Visual Studio 16.9 doesn't support. If the SSH server uses OpenSSH, you can edit the `/etc/ssh/sshd_config` file as shown below to enable more secure algorithms. For other SSH servers, refer to the server's documentation for how to configure them.

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

The output lists all the encryption, HMAC, key exchange, and host key algorithms supported by your SSH server. If the list doesn't include algorithms supported by Visual Studio, then upgrade your SSH server before proceeding.

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
For example: `HostKeyAlgorithms ecdsa-sha2-nistp256,ecdsa-sha2-nistp384`

## Logging for remote connections

   You can enable logging to help troubleshoot connection problems. On the menu bar, select **Tools > Options**. In the **Options** dialog, select **Cross Platform > Logging**:

   :::image type="complex" source="media/remote-logging-vs2019.png" alt-text="Screenshot of the Visual Studio options screen.":::
   The options are open to Cross Platform > Connection Manager > Logging. Enable logging is checked, log to a file is checked, the logfile directory is set the documents folder, and log to the 'Cross Platform Logging' pane in the output window is checked.
   :::image-end:::

   Logs include connections, all commands sent to the remote machine (their text, exit code and execution time), and all output from Visual Studio to the shell. Logging works for any cross-platform CMake project or MSBuild-based Linux project in Visual Studio.

   You can configure the output to go to a file or to the **Cross Platform Logging** pane in the Output window. For MSBuild-based Linux projects, MSBuild commands sent to the remote machine aren't routed to the **Output Window** because they're emitted out-of-process. Instead, they're logged to a file, with a prefix of "msbuild_".

## Command-line utility for the Connection Manager  

**Visual Studio 2019 version 16.5 or later**: `ConnectionManager.exe` is a command-line utility to manage remote development connections outside of Visual Studio. It's useful for tasks such as provisioning a new development machine. Or, you can use it to set up Visual Studio for continuous integration. For examples and a complete reference to the ConnectionManager command, see [ConnectionManager reference](connectionmanager-reference.md).  

::: moniker-end

::: moniker range=">=msvc-150"

## TCP Port Forwarding

The `rsync` command is used by both MSBuild-based Linux projects and CMake projects to [copy headers from your remote system to Windows for use by IntelliSense](configure-a-linux-project.md#remote_intellisense). When you can't enable TCP port forwarding, disable the automatic download of remote headers. To disable it, use **Tools > Options > Cross Platform > Connection Manager > Remote Headers IntelliSense Manager**. If the remote system doesn't have TCP port forwarding enabled, this error appears when the download of remote headers for IntelliSense begins:

:::image type="content" source="media/port-forwarding-headers-error.png" alt-text="Screenshot of a Visual Studio error message that the SSH channel couldn't be opened. The path to a log file is provided.":::

`rsync` is also used by Visual Studio's CMake support to copy source files to the remote system. If you can't enable TCP port forwarding, you can use `sftp` as your remote copy sources method. `sftp` is often slower than `rsync`, but doesn't have a dependency on TCP port forwarding. You can manage your remote copy sources method with the `remoteCopySourcesMethod` property in the [CMake Settings Editor](../build/cmakesettings-reference.md#settings-for-cmake-linux). If TCP port forwarding is disabled on your remote system, an error appears in the CMake output window the first time it invokes `rsync`.

:::image type="complex" source="media/port-forwarding-copy-error.png" alt-text="Screenshot of the Visual Studio output window displaying a Rsync Error message.":::
The output window includes these messages: Verify that TCP forwarding is enabled on the server, rsync: did not see server greeting, rsync error: error starting client-server protocol (code 5) at main.c(1675) [sender=3.1.3], An SSH channel couldn't be opened.
:::image-end:::

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

When connecting to Windows Subsystem for Linux (WSL) on `localhost`, you may run into a conflict with the Windows `ssh` client on port 22. In WSL, change the port that `ssh` expects requests from to 23 in `/etc/ssh/sshd_config`:

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
