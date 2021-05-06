---
title: "ConnectionManager reference"
description: "How to manage your remote SSH connections from a command-line tool."
ms.date: "10/7/2020"
f1_keywords: ["ConnectionManager"]
helpviewer_keywords: ["ConnectionManager program"]
---
# ConnectionManager reference

::: moniker range="<=msvc-150"

ConnectionManager.exe is available in Visual Studio 2019 version 16.5 and later.

::: moniker-end

::: moniker range="msvc-160"

ConnectionManager.exe is a command-line utility to manage remote development connections outside of Visual Studio. It's useful for tasks such as provisioning a new development machine. Or, use it to set up Visual Studio for continuous integration. You can use it in a Developer Command Prompt window. For more information about the Developer Command Prompt, see [Use the Microsoft C++ toolset from the command line](../build/building-on-the-command-line.md).

ConnectionManager.exe is available in Visual Studio 2019 version 16.5 and later. It's part of the **Linux development with C++** workload in the Visual Studio Installer. It's also installed automatically when you choose the **Connection Manager** component in the installer. It's installed in *%VCIDEInstallDir%\\Linux\\bin\\ConnectionManagerExe\\ConnectionManager.exe*.

The functionality of ConnectionManager.exe is also available in Visual Studio. To manage remote development connections in the IDE, on the menu bar, choose **Tools** > **Options** to open the Options dialog. In the Options dialog, select **Cross Platform** > **Connection Manager**.

## Syntax

> **`ConnectionManager.exe`** *command* \[*arguments*] \[*options*]

### Commands and arguments

- **`add`** *user\@host* \[**`--port`** *port*] \[**`--password`** *password*] \[**`--privatekey`** *privatekey_file*]

  Authenticates and adds a new connection. By default, it uses port 22 and password authentication. (You'll be prompted to enter a password.) Use both **-`-password`** and **`--privatekey`** to specify a password for a private key.

- **`remove`** \[*connection_id* \| *user\@host* \[**`--port`** *port*]]

  Removes a connection. If no arguments are specified, you're prompted to specify which connection to remove.
  
- **`modify`** \[*default* \| *connection_id* \| *user\@host* \[**`--port`** *port*]] \[**`--property`** *key=value*]

  Defines or modifies a property on a connection.\
  If *value* is empty, then the property *key* is deleted.\
  If authentication fails, no changes will be made.\
  If no connection is specified (what is meant by *default*, above), the user's default remote connection is used.

- **`remove-all`**

  Removes all stored connections.
  
- **`clean`**

  Deletes header cache for connections that no longer exist. 

- **`list`** \[**`--properties`**]

  Displays information, IDs, and properties of all stored connections. 

- **`help`**

  Displays a help screen.

- **`version`**

  Displays version information.
  
- **`update`** \[*default* \| *all* \| *connection_id* \| *user\@host* \[**`--port`** *port*]] \[**`--previous`**] [**`--fingerprint`**]

  Added in Visual Studio 16.10. Updates the host key fingerprint of the specified connection(s). 

### Options

- **`-q`**, **`--quiet`**

  Prevents output to `stdout` or `stderr`.

- **`--no-prompt`**

  Fail instead of prompt, when appropriate.

- **`--no-verify`**

  Add or modify a connection without authentication.

- **`--file`** *filename*

  Read connection information from the provided *filename*.

- **`--no-telemetry`**

  Disable sending usage data back to Microsoft. Usage data is collected and sent back to Microsoft unless the **`--no-telemetry`** flag is passed.  

- **`-n`**, **`--dry-run`**

  Does a dry run of the command.
 
- **`--p`**

  Same as **`--password`**.

- **`-i`**

  Same as **`--privatekey`**.
  
- **`--previous`**

  Indicates that the connection(s) will be read from the previous version of connection manager, updated, and written to the new version. 
  
- **`--fingerprint`**

  The host key fingerprint presented by the server. Use this option with **`list`** to view a connection's fingerprint.

## Examples

This command adds a connection for a user named "user" on localhost. The connection uses a key file for authentication, found in *%USERPROFILE%\.ssh\id_rsa*.

```cmd
ConnectionManager.exe add user@127.0.0.1 --privatekey "%USERPROFILE%\.ssh\id_rsa"
```

This command removes the connection that has ID 1975957870 from the list of connections.

```cmd
ConnectionManager.exe remove 1975957870
```

This command overrides the choice of shell for the connection with connection ID 21212121. Supported shells are: **`sh, csh, bash, tcsh, ksh, zsh, dash`**. If the shell found on the Linux system isn't supported, then we fall back to explicitly use **`sh`** for all commands.

```cmd
ConnectionManager.exe modify 21212121 --property shell=csh
```

## See also

[Connect to your target Linux system in Visual Studio](connect-to-your-remote-linux-computer.md)

::: moniker-end
