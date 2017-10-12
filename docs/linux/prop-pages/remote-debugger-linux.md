---
title: "Remote GDB Debugger | Microsoft Docs"
ms.custom: ""
ms.date: "9/26/2017"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "vs-ide-general"
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 0c1c0fcc-a49b-451c-a5cb-ce9711fac064
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
f1_keywords:
  - VC.Project.RaspberryDebugger.DebuggerType
  - VC.Project.RaspberryDebugger.LaunchActivity
  - VC.Project.IVCLocalDebugPageObject.CommandArguments
  - VC.Project.IVCLocalDebugPageObject.CommandArguments
  - VC.Project.IVCLocalDebugPageObject.WorkingDirectory
  - VC.Project.RaspberryDebugger.LaunchActivity
  - VC.Project.RaspberryDebugger.LaunchActivity
  - VC.Project.RaspberryDebugger.LaunchActivity
  - VC.Project.RaspberryDebugger.DebuggerType
  - VC.Project.RaspberryDebugger.LaunchActivity
  - VC.Project.LinuxDebugger.DebugChildProcesses
---

# Remote GDB Debugger

Property | Description | Choices
--- | ---| ---
Debugger Type | Specifies which code type to debug. | **Native Only**<br>
Pre-Launch Command | A command that is run on the shell before the debugging starts and before the debugger is running, and can be used to affect the debugging environment.
Program | The full path to the program to debug on the remote system. This is a path on the remote system. If left empty or unchanged it defaults to the current project output.
Program Arguments | The command line arguments to pass to the program being debugged.
Working Directory | The remote application's working directory. By default, the user home directory.
Additional Debugger Commands | Additional gdb commands for the debugger to run before starting debugging.
Debugger Port Number | The port number for debugger communication with the remote debugger. The port must not be in use locally. This value must be positive in between 1 and 65535. If not supplied a free port number will be used.
Remote Debugger Port Number | The port number on which the remote debugger server (gdbserver) is listening on on the remote system. The port must not be in use on the remote system. This value must be positive in between 1 and 65535. If not supplied a free port number starting from 4444 will be used.
Debugging Mode | Specifies how the debugger interfaces with gdb. In the gdb mode the debugger drives gdb over the shell on the remote system. In the gdbserver mode, gdb is running locally and connects to gdbserver running remotely. | **gdbserver**<br>**gdb**<br>
Additional Symbol Search Paths | Additional search path for debug symbols (solib-search-path).
Debug Child Processes | Specifies whether to enable debugging of child processes.
