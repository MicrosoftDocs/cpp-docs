---
title: Debugger Properties (Linux C++)
description: "Describes the Microsoft Visual Studio Linux C++ debugger properties"
ms.date: "06/07/2019"
ms.assetid: 0c1c0fcc-a49b-451c-a5cb-ce9711fac064
---
# C++ Debugging Properties (Linux C++)

::: moniker range="msvc-140"

Linux support is available in Visual Studio 2017 and later.

::: moniker-end

::: moniker range=">=msvc-150"

| Property | Description | Choices |
|--|--|--|
| Remote debug machine | **Visual Studio 2019 version 16.1**: Specifies the machine to debug the program on. Can be different than the remote build machine that's specified on the [General](general-linux.md) page. You can add or edit a target machine connection by using **Tools** > **Options** > **Cross Platform** > **Connection Manager**. |
| Pre-Launch Command | A command that's run on the shell before the debugger starts, that can be used to affect the debugging environment. |
| Program | The full path on the remote system to the program to debug. If left empty or unchanged, it defaults to the current project output. |
| Program Arguments | The command-line arguments to pass to the program being debugged. |
| Working Directory | The remote application's working directory. By default, the user home directory. |
| Additional Debugger Commands | Additional `gdb` commands for the debugger to run before starting debugging. |
| Debugger Port Number | The port number for debugger communication with the remote debugger. The port must not be in use locally. This value must be positive, and between 1 and 65535. If not supplied, a free port number is used. |
| Remote Debugger Port Number | The port number on which the remote debugger server `gdbserver` is listening on the remote system. The port must not be in use on the remote system. This value must be positive, and between 1 and 65535. If not supplied, a free port number starting from 4444 is used. |
| Debugging Mode | Specifies how the debugger interfaces with `gdb`. In *gdb mode*, the debugger drives `gdb` over the shell on the remote system. In *gdbserver mode*, `gdb` runs locally and connects to `gdbserver` running remotely. | **gdbserver**<br/>**gdb** |
| Additional Symbol Search Paths | Additional search path for debug symbols (solib-search-path). |
| Debug Child Processes | Specifies whether to enable debugging of child processes. |
| Enable Python Pretty Printing | Enable pretty printing of expression values. Only supported in gdb debugging mode. |
| Visualization File | Default native visualization file (.natvis) containing visualization directives for SLT types. Other .natvis files that belong to the current solution are loaded automatically. |
| Additional Sources File Path Map | Additional path equivalences for the debugger to use to map Windows source file names to Linux source file names. The format is "\<windows-path>=\<linux-path>;...". A source file name found under the Windows path is referenced as if it's found in the same relative position under the Linux path. Files found in the local project don't require additional mapping. |
| GDB Path | **Visual Studio 2019 version 16.9**: Specifies the path to the GDB executable to be used by Visual Studio. |

::: moniker-end
