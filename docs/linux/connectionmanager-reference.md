---
title: "ConnectionManager reference"
description: "How to manage your remote SSH connections from the command-line tool ConnectionManager.exe."
ms.date: 03/14/2022
f1_keywords: ["ConnectionManager"]
helpviewer_keywords: ["ConnectionManager program"]
---
# ConnectionManager reference

::: moniker range="<=msvc-150"

ConnectionManager.exe is available in Visual Studio 2019 version 16.5 and later.

::: moniker-end

::: moniker range=">=msvc-160"

ConnectionManager.exe is a command-line utility to manage remote development connections outside of Visual Studio. It's useful for tasks such as provisioning a new development machine. Or, use it to set up Visual Studio for continuous integration. You can use it in a Developer Command Prompt window. For more information about the Developer Command Prompt, see [Use the Microsoft C++ toolset from the command line](../build/building-on-the-command-line.md).

ConnectionManager.exe is available in Visual Studio 2019 version 16.5 and later. It's part of the **Linux development with C++** workload in the Visual Studio Installer. It's also installed automatically when you choose the **Connection Manager** component in the installer. It's installed in *%VCIDEInstallDir%\\Linux\\bin\\ConnectionManagerExe\\ConnectionManager.exe*.

The functionality of ConnectionManager.exe is also available in Visual Studio. To manage remote development connections in the IDE, on the menu bar, choose **Tools** > **Options** to open the Options dialog. In the Options dialog, select **Cross Platform** > **Connection Manager**.

## Syntax

> **`ConnectionManager.exe`** *command* \[*arguments*] \[*options*]

### Commands and arguments

- **`add`** *user\@host* \[**`--port`** *port*] \[**`--password`** *password*] \[**`--privatekey`** *privatekey_file*]

  Authenticates and adds a new connection. By default, it uses port 22 and password authentication. (You'll be prompted to enter a password.) Use both **-`-password`** and **`--privatekey`** to specify a password for a private key.

- **`clean`**

  Deletes header cache for connections that no longer exist.

- **`help`**

  Displays a help screen.

- **`list`** \[**`--properties`**]

  Displays information, IDs, and properties of all stored connections.<br>For examples, see [Commonly used properties](#commonly-used-properties).

- **`modify`** \[*default* \| *connection_id* \| *user\@host* \[**`--port`** *port*]] \[**`--property`** *key=value*]

  Defines or modifies a property on a connection.\
  If *value* is empty, then the property *key* is deleted.\
  If authentication fails, no changes will be made.\
  If no connection is specified (what is meant by *default*, above), the user's default remote connection is used.

- **`remove`** \[*connection_id* \| *user\@host* \[**`--port`** *port*]]

  Removes a connection. If no arguments are specified, you're prompted to specify which connection to remove.

- **`remove-all`**

  Removes all stored connections.
    
- **`update`** \[*default* \| *all* \| *connection_id* \| *user\@host* \[**`--port`** *port*]] \[**`--previous`**] [**`--fingerprint`**]

  Added in Visual Studio 16.10. Updates the host key fingerprint of the specified connection(s).

- **`version`**

  Displays version information.

### Options

- **`--file`** *filename*

  Read connection information from the provided *filename*.

- **`--fingerprint`**

  The host key fingerprint presented by the server. Use this option with **`list`** to view a connection's fingerprint.

- **`-i`**

  Same as **`--privatekey`**.

- **`-n`**, **`--dry-run`**

  Does a dry run of the command.

- **`--no-prompt`**

  Fail instead of prompt, when appropriate.

- **`--no-telemetry`**

  Disable sending usage data back to Microsoft. Usage data is collected and sent back to Microsoft unless the **`--no-telemetry`** flag is passed.  

- **`--no-verify`**

  Add or modify a connection without authentication.

- **`--p`**

  Same as **`--password`**.
  
- **`--previous`**

  Indicates that the connection(s) will be read from the previous version of connection manager, updated, and written to the new version.
  
- **`-q`**, **`--quiet`**

  Prevents output to `stdout` or `stderr`.

## Examples

This command adds a connection for a user named "user" on localhost. The connection uses a key file for authentication, found in *%USERPROFILE%\.ssh\id_rsa*.

```cmd
ConnectionManager.exe add user@127.0.0.1 --privatekey "%USERPROFILE%\.ssh\id_rsa"
```

This command removes the connection that has ID 1975957870 from the list of connections.

```cmd
ConnectionManager.exe remove 1975957870
```

### Commonly used properties

| Property | Description |
|--|--|
| authentication type | The type of authentication used for the connection such as: `"password"`, `"privatekey"`.<br/>To create a connection with the authentication type set to `"privatekey"`: `ConnectionManager.exe add user@127.0.0.1 --privatekey "%USERPROFILE%\.ssh\id_rsa"`|
| `default` | A boolean indicating whether this is the default connection. The default connection is used when there's more than one connection available and the one to use isn't specified.<br/>To set the specified connection to be the default connection: `ConnectionManager.exe modify -21212121 --property default=true` |
| `host` | The name or IP address of the remote computer.<br/>To change the host for the specified connection to another machine, in this case, local host: `ConnectionManager.exe modify -21212121 --property host=127.0.0.1` |
| `isWsl` | Returns true if the remote session is running Windows Subsystem for Linux. |
| `password` | The password for the connection. Change the password for the specified connection with: `ConnectionManager.exe modify -21212121 --property password="xyz"`|
| `platform` | The platform of the remote computer such as `"ARM"`, `"ARM64"`, `"PPC"`, `"PPC64"`, `"x64"`, `"x86"`.|
| `port` | The port used for the connection.<br/>Change the port for the specified connection: `ConnectionManager.exe modify -21212121 --property port=22`|
| `shell` | The preferred shell to use on the remote system. Supported shells are `sh, csh, bash, tcsh, ksh, zsh, dash`<br/>To set the preferred shell to be zsh for the remote machine on the specified connection: `ConnectionManager.exe modify -21212121 --property shell=zsh`<br/>If the shell found on the Linux system isn't supported, then **`sh`** is used for all commands. |
| `systemID` | The remote system type, such as `"OSX"`, `"Ubuntu"`. |
| `timeout` | The connection timeout in milliseconds. Change the timeout for the specified connection with: `ConnectionManager.exe modify -21212121 --property timeout=100`
| `username` | The name of the user logged into the remote computer.<br/>To add a connection for a user named `"user"` on localhost: `ConnectionManager.exe add user@127.0.0.1`|

## See also

[Connect to your target Linux system in Visual Studio](connect-to-your-remote-linux-computer.md)

::: moniker-end
