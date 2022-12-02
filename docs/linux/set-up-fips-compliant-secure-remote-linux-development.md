---
title: "Set up FIPS-compliant secure remote Linux development"
description: "How to set up a FIPS-compliant cryptographic connection between Visual Studio and a Linux machine for remote development."
ms.date: 07/06/2022
---
# Set up FIPS-compliant secure remote Linux development

::: moniker range="<=msvc-150"

Linux support is available in Visual Studio 2017 and later. FIPS-compliant secure remote Linux development is available in Visual Studio 2019 version 16.5 and later.

::: moniker-end

::: moniker range=">=msvc-160"

Federal Information Processing Standard (FIPS) Publication 140-2 is a U.S. government standard for cryptographic modules. Implementations of the standard are validated by NIST. Windows has [validated support for FIPS-compliant cryptographic modules](/windows/security/threat-protection/fips-140-validation). In Visual Studio 2019 version 16.5 and later, you can use a secure, FIPS-compliant cryptographic connection to your Linux system for remote development.

Here's how to set up a secure, FIPS-compliant connection between Visual Studio and your remote Linux system. This guide is applicable when you build CMake or MSBuild Linux projects in Visual Studio. This article is the FIPS-compliant version of the connection instructions in [Connect to your remote Linux computer](connect-to-your-remote-linux-computer.md).

## Prepare a FIPS-compliant connection

Some preparation is required to use a FIPS-compliant, cryptographically secure ssh connection between Visual Studio and your remote Linux system. For FIPS-140-2 compliance, Visual Studio only supports RSA keys.

The examples in this article use Ubuntu 18.04 LTS with OpenSSH server version 7.6. However, the instructions should be the same for any distro using a moderately recent version of OpenSSH.

### To set up the SSH server on the remote system

1. On the Linux system, install and start the OpenSSH server:

   ```bash
   sudo apt install openssh-server
   sudo service ssh start
   ```

1. If you'd like the `ssh` server to start automatically when the system boots, enable it using `systemctl`:

   ```bash
   sudo systemctl enable ssh
   ```

1. Open *`/etc/ssh/sshd_config`* as root. Edit (or add, if they don't exist) the following lines:

   ```config
   Ciphers aes256-cbc,aes192-cbc,aes128-cbc,3des-cbc
   HostKeyAlgorithms ssh-rsa
   KexAlgorithms diffie-hellman-group-exchange-sha256,diffie-hellman-group-exchange-sha1,diffie-hellman-group14-sha1
   MACs hmac-sha2-256,hmac-sha1
   ```

   > [!NOTE]
   > `ssh-rsa` is the only FIPS compliant host key algorithm VS supports. The `aes*-ctr` algorithms are also FIPS compliant, but the implementation in Visual Studio isn't approved. The `ecdh-*` key exchange algorithms are FIPS compliant, but Visual Studio doesn't support them.

   You're not limited to these options. You can configure `ssh` to use other ciphers, host key algorithms, and so on. Some other relevant security options you may want to consider are `PermitRootLogin`, `PasswordAuthentication`, and `PermitEmptyPasswords`. For more information, see the `man` page for `sshd_config` or the article [SSH Server Configuration](https://www.ssh.com/ssh/sshd_config).

1. After saving and closing `sshd_config`, restart the ssh server to apply the new configuration:

   ```bash
   sudo service ssh restart
   ```

Next, you'll create an RSA key pair on your Windows computer. Then you'll copy the public key to the remote Linux system for use by `ssh`.

### To create and use an RSA key file

1. On the Windows machine, generate a public/private RSA key pair by using this command:

   ```cmd
   ssh-keygen -t rsa -b 4096 -m PEM
   ```

   The command creates a public key and a private key. By default, the keys are saved to *`%USERPROFILE%\.ssh\id_rsa`* and *`%USERPROFILE%\\.ssh\\id_rsa.pub`*. (In PowerShell, use `$env:USERPROFILE` instead of the cmd macro `%USERPROFILE%`) If you change the key name, use the changed name in the steps that follow. We recommend you use a passphrase for increased security.

1. From Windows, copy the public key to the Linux machine:

   ```cmd
   scp %USERPROFILE%\.ssh\id_rsa.pub user@hostname:
   ```

1. On the Linux system, add the key to the list of authorized keys, and ensure the file has the correct permissions:

   ```bash
   cat ~/id_rsa.pub >> ~/.ssh/authorized_keys
   chmod 600 ~/.ssh/authorized_keys
   ```

1. Now, you can test to see if the new key works in `ssh`. Use it to sign in from Windows:

    ```cmd
    ssh -i %USERPROFILE%\.ssh\id_rsa user@hostname
    ```

You've successfully set up `ssh`, created and deployed encryption keys, and tested your connection. Now you're ready to set up the Visual Studio connection.

## Connect to the remote system in Visual Studio

1. In Visual Studio, choose **Tools > Options** on the menu bar to open the **Options** dialog. Then select **Cross Platform > Connection Manager** to open the Connection Manager dialog.

   If you haven't set up a connection in Visual Studio before, when you build your project for the first time, Visual Studio opens the Connection Manager dialog for you.

1. In the Connection Manager dialog, choose the **Add** button to add a new connection.

   ![Screenshot showing the options pane in the Connection Manager dialog. Cross Platform > C plus plus > Connection Manager is highlighted.](media/settings_connectionmanager.png)

   The **Connect to Remote System** window is displayed.

   ![Screenshot showing the Connect to Remote System window, which has text boxes for the host name, port, user name, auth type, and password.](media/connect.png)

1. In the **Connect to Remote System** dialog, enter the connection details of your remote machine.

   | Entry | Description |
   |--|--|
   | **Host Name**           | Name or IP address of your target device |
   | **Port**                | Port that the SSH service is running on, typically 22 |
   | **User name**           | User to authenticate as |
   | **Authentication type** | Choose **Private Key** for a FIPS-compliant connection |
   | **Private key file**    | Private key file created for ssh connection |
   | **Passphrase**          | Passphrase used with private key selected above |

   Change the authentication type to **Private Key**. Enter the path to your private key in the **Private key file** field. You can use the **Browse** button to navigate to your private key file instead. Then, enter the passphrase used to encrypt your private key file in the **Passphrase** field.

1. Choose the **Connect** button to attempt a connection to the remote computer.

   If the connection succeeds, Visual Studio configures IntelliSense to use the remote headers. For more information, see [IntelliSense for headers on remote systems](configure-a-linux-project.md#remote_intellisense).

   If the connection fails, the entry boxes that need to be changed are outlined in red.

   ![Screenshot of the Connect to Remote System window which has host name and port text boxes outlined in red to indicate they need to be changed.](media/settings_connectionmanagererror.png)

   For more information on troubleshooting your connection, see [Connect to your remote Linux computer](connect-to-your-remote-linux-computer.md).

## Command-line utility for the Connection Manager  

**Visual Studio 2019 version 16.5 or later**: `ConnectionManager.exe` is a command-line utility to manage remote development connections outside of Visual Studio. It's useful for tasks such as provisioning a new development machine. Or, you can use it to set up Visual Studio for continuous integration. For examples and a complete reference to the ConnectionManager command, see [ConnectionManager reference](connectionmanager-reference.md).  

## Optional: Enable or disable FIPS mode

It's possible to enable FIPS mode globally in Windows.

1. To enable FIPS mode, press **Windows+R** to open the **Run** dialog, and then run `gpedit.msc`.

1. Expand **Local Computer Policy > Computer Configuration > Windows Settings > Security Settings > Local Policies** and select **Security Options**.

1. Under **Policy**, select **System cryptography: Use FIPS-compliant algorithms for encryption, hashing, and signing**, and then press **Enter** to open its dialog box.

1. In the **Local Security Setting** tab, select **Enabled** or **Disabled**, and then choose **OK** to save your changes.

> [!WARNING]
> Enabling FIPS mode may cause some applications to break or behave unexpectedly. For more information, see the blog post [Why We're Not Recommending "FIPS mode" Anymore](https://techcommunity.microsoft.com/t5/microsoft-security-baselines/why-we-8217-re-not-recommending-8220-fips-mode-8221-anymore/ba-p/701037).

## Additional resources

[Microsoft documentation on FIPS 140 validation](/windows/security/threat-protection/fips-140-validation)

[FIPS 140-2: Security Requirements for Cryptographic Modules](https://csrc.nist.gov/publications/detail/fips/140/2/final) (from NIST)

[Cryptographic Algorithm Validation Program: Validation Notes](https://csrc.nist.gov/projects/cryptographic-algorithm-validation-program/Validation-Notes) (from NIST)

Microsoft blog post on [Why We're Not Recommending "FIPS mode" Anymore](https://techcommunity.microsoft.com/t5/microsoft-security-baselines/why-we-8217-re-not-recommending-8220-fips-mode-8221-anymore/ba-p/701037)

[SSH Server Configuration](https://www.ssh.com/ssh/sshd_config)

## See Also

[Configure a Linux project](configure-a-linux-project.md)\
[Configure a Linux CMake project](cmake-linux-project.md)\
[Connect to your remote Linux computer](connect-to-your-remote-linux-computer.md)\
[Deploy, run, and debug your Linux project](deploy-run-and-debug-your-linux-project.md)\
[Configure CMake debugging sessions](../build/configure-cmake-debugging-sessions.md)

::: moniker-end
