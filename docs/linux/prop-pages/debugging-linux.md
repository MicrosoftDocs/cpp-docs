---
title: Debugger Properties (Linux C++)
description: "Describes the Microsoft Visual Studio Linux C++ debugger properties"
ms.date: "07/08/2026"
ms.assetid: 0c1c0fcc-a49b-451c-a5cb-ce9711fac064
f1_keywords: ["VC.Project.RaspberryDebugger.LaunchActivity", "VC.Project.RaspberryDebugger.LaunchActivity", "VC.Project.RaspberryDebugger.DebuggerType", "VC.Project.AndroidDebugger.LaunchActivity", "VC.Project.LinuxDebugger.DebugChildProcesses", "VC.Project.RaspberryDebugger.EnablePrettyPrinting", "VC.Project.RaspberryDebugger.LinuxNatvisFile", "VC.Project.RaspberryDebugger.SourceMap", "VC.Project.RaspberryDebugger.MIMode", "VC.Project.RaspberryDebugger.SymbolLoadList", "VC.Project.RaspberryDebugger.LoadAllSymbols", "VC.Project.RaspberryDebugger.ShowDisplayString", "VC.Project.RaspberryDebugger.EnableDebugInfoD", "VC.Project.RaspberryDebugger.DebugInfoDTimeout"]
---
# C++ Debugging Properties (Linux C++)

::: moniker range="msvc-140"

Linux support is available in Visual Studio 2017 and later.

::: moniker-end

::: moniker range=">=msvc-150"

| Property | Description | Choices |
|--|--|--|
| Additional Debugger Commands | Additional `gdb` commands for the debugger to run before starting debugging. |
| Additional Sources File Path Map | Additional path equivalences for the debugger to use to map Windows source file names to Linux source file names. The format is "\<windows-path>=\<linux-path>;...". A source file name found under the Windows path is referenced as if it's found in the same relative position under the Linux path. Files found in the local project don't require additional mapping. |
| Additional Symbol Search Paths | Additional search path for debug symbols (solib-search-path). |
| Debug Child Processes | Specifies whether to enable debugging of child processes. |
| Debugger Port Number | The port number for debugger communication with the remote debugger. The port must not be in use locally. This value must be positive, and between 1 and 65535. If you don't supply a value, a free port number is used. |
| Debugging Mode | Specifies how the debugger interfaces with `gdb`. In *gdb mode*, the debugger drives `gdb` over the shell on the remote system. In *gdbserver mode*, `gdb` runs locally and connects to `gdbserver` running remotely. | **gdbserver**<br/>**gdb** |
| Debuginfod timeout (seconds) | Set the timeout, in seconds, for debuginfod server requests when you enable debuginfod. Use `0` to keep the default `gdb` timeout. This property only supports `gdb`. | Integer value in seconds. Default: 30 |
| Enable debuginfod | Let `gdb` query debuginfod servers for missing debug information and source files. This property only supports `gdb`. |
| Enable Python Pretty Printing | Enable pretty printing of expression values. Only supported in gdb debugging mode. |
| GDB Path | **Visual Studio 2019 version 16.9**: Specifies the path to the GDB executable to be used by Visual Studio. |
| Pre-Launch Command | A command that runs in the shell before the debugger starts. Use this command to affect the debugging environment. |
| Program | The full path on the remote system to the program to debug. If you leave this property empty or unchanged, it defaults to the current project output. |
| Program Arguments | The command-line arguments to pass to the program being debugged. |
| Remote debug machine | **Visual Studio 2019 version 16.1**: Specifies the machine to debug the program on. This machine can be different from the remote build machine that you specify on the [General](general-linux.md) page. To add or edit a target machine connection, use **Tools** > **Options** > **Cross Platform** > **Connection Manager**. |
| Remote Debugger Port Number | The port number on which the remote debugger server `gdbserver` is listening on the remote system. The port must not be in use on the remote system. This value must be positive, and between 1 and 65535. If you don't supply a value, a free port number starting from 4444 is used. |
| Remote Debugger Type | **Visual Studio 2022 version 17.3**: Select the debugger that Visual Studio uses to debug your Linux project. | `gdb`<br/>`lldb` |
| Show Natvis DisplayString | **Visual Studio 2019 version 16.0**: Show the `.natvis` `DisplayString` element by default in the **DataTips**, **Locals**, **Watch**, and similar debugger windows. Natvis is an XML-based format that customizes how native C++ types appear in the debugger. `DisplayString` defines a type's summary string. |
| Symbol List | **Visual Studio 2019 version 16.0**: Specify a semicolon-separated list of shared library (`solib`) names that the Symbol Loading Preference property uses to control symbol loading. The names can include the `*` and `?` wildcards. Full glob patterns aren't supported. |
| Symbol Loading Preference | **Visual Studio 2019 version 16.0**: Choose whether the debugger loads symbols for all shared libraries except the names in Symbol List, or only for the shared libraries named in Symbol List. | **Load all symbols except those in Symbol List**<br/>**Load only those symbols specified in Symbol List** |
| Visualization File | Default native visualization file (.natvis) containing visualization directives for SLT types. The debugger automatically loads other .natvis files that belong to the current solution. |
| Working Directory | The remote application's working directory. By default, the user home directory. |

::: moniker-end
