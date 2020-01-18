---
title: "ConnectionManager Reference"
ms.date: "01/17/2020"
f1_keywords: ["ConnectionManager"]
helpviewer_keywords: ["ConnectionManager program"]
---
# ConnectionManager Reference

ConnectionManager.exe is a command-line utility to manage remote development connections outside of Visual Studio. You may find it useful for tasks such as provisioning a new development machine, or setting up Visual Studio for continuous integration. You can use it in a Developer Command Prompt window. For more information about the Developer Command Prompt, see [Use the Microsoft C++ toolset from the command line](..\building-on-the-command-line.md).

ConnectionManager.exe is available in Visual Studio 2019 version 16.5 and later. It's installed automatically when you choose the **Connection Manager** component in the Visual Studio Installer. By default, it's installed in *%VCIDEInstallDir%\\Linux\\bin\\ConnectionManager.exe*.

The functionality of ConnectionManager.exe is also available in Visual Studio. To manage remote development connections in the IDE, on the menu bar, choose **Tools** > **Options** to open the Options dialog. In the Options dialog, select **Cross Platform** > **Connection Manager**.

## Syntax

> **ConnectionManager.exe** *command* \[*arguments*] \[*options*]

### Commands and arguments

- **add** *user@host* \[**--port** *port*] \[**--password** *password*] \[**--privatekey** *privatekey_file*]

  Authenticates and adds a new connection. By default, it uses port 22 and password authentication. (You are prompted to enter a password). Use both **--password** and **--privatekey** to specify a password for a private key.

- **remove** \[*connection_id* \| *user@host* \[**--port** *port*]]

  Removes a connection. If no arguments are specified, you are prompted to specify which connection to remove.

- **remove-all**

  Removes all stored connections.

- **list**

  Displays information and ids of all stored connections.

- **help**

  Displays a help screen.

- **version**

  Displays version information.

### Options

- **-q**, **--quiet**

  Do not output to stdout or stderr.

- **--no-prompt**

  Fail instead of prompt, when appropriate.

- **--no-verify**

  Add or modify a connection without authentication.

- **--file** *filename*

  Read connection information from the provided *filename*.

- **--no-telemetry**

  Disable sending usage data back to Microsoft. Usage data is collected and sent back to Microsoft unless the **--no-telemetry** flag is passed.  

- **-n**, **--dry-run**

  Perform a dry-run of the command.

- **-p**

  Same as **--password**.

- **-i**

  Same as **--privatekey**.

## Examples

This command adds a connection for a user named "user" on localhost. The connection uses a key file for authentication, found in *%USERPROFILE%\.ssh\id_rsa*.

```cmd
ConnectionManager.exe add user@127.0.0.1 --privatekey "%USERPROFILE%\.ssh\id_rsa"
```

This command removes the connection that has ID 1975957870 from the list of connections.

```cmd
ConnectionManager.exe remove 1975957870
```

## See also

[Connect to your target Linux system in Visual Studio](../../linux/connect-to-your-remote-linux-computer.md)
