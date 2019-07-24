---
title: "Remote Windows Debugger Property Page"
ms.date: "7/24/2019"
ms.topic: "article"
ms.assetid: b5767671-bf4b-46b6-a106-b4d6b103588c
f1_keywords:
  - VC.Project.IVCRemoteDebugPageObject.RemoteCommand
  - VC.Project.IVCRemoteDebugPageObject.CommandArguments
  - VC.Project.IVCRemoteDebugPageObject.WorkingDirectory
  - VC.Project.IVCRemoteDebugPageObject.RemoteMachine
  - VC.Project.IVCRemoteDebugPageObject.Remote
  - VC.Project.IVCRemoteDebugPageObject.DebuggerType
  - VC.Project.IVCRemoteDebugPageObject.Environment
  - VC.Project.IVCRemoteDebugPageObject.GPUDebuggerTargetType
  - VC.Project.IVCRemoteDebugPageObject.GPUBreakOnAllThreads
  - VC.Project.IVCRemoteDebugPageObject.Attach
  - VC.Project.IVCRemoteDebugPageObject.SQLDebugging
  - VC.Project.IVCRemoteDebugPageObject.DeploymentDirectory
  - VC.Project.IVCRemoteDebugPageObject.AdditionalFiles
  - VC.Project.IVCRemoteDebugPageObject.Remote
  - VC.Project.IVCRemoteDebugPageObject.AmpDefaultAccelerator
---

# Remote Windows Debugger Property Page

This property page is found under **Project** > **Properties** > **Configuration Properties** > **Debugging**. Choose **Remote Windows Debugger** in the drop-down control. For more information about remote debugging, see [Remote Debugging a Visual C++ Project in Visual Studio](/visualstudio/debugger/remote-debugging-cpp).

## Remote Command

The debug command to execute.

## Remote Command Arguments

The command line arguments to pass to the application.

## Working Directory

The application's working directory. By default, the directory containing the project file.

## Remote Server Name

Specifies a remote server name.

## Connection

Specifies the connection type.

**Choices**

- **Remote with Windows authentication** - Remote with Windows authentication
- **Remote with no authentication** - Remote with no authentication

## Debugger Type

Specifies the debugger type to use. When set to Auto, the debugger type will be selected based on contents of the exe file.

**Choices**

- **Native Only** - Native Only
- **Managed Only** - Managed Only
- **Mixed** - Mixed
- **Auto** - Auto
- **Script** - Script
- **GPU Only (C++ AMP)** - GPU Only (C++ AMP)

## Environment

Specifies the environment for the debugee, or variables to merge with existing environment.

## Debugging Accelerator Type

The debugging accelerator type to use for debugging the GPU code.  (Available when the GPU debugger is active.)

## GPU Default Breakpoint Behavior

Sets how often the GPU debugger breaks.

**Choices**

- **Break once per warp** - Break once per warp
- **Break for every thread (like CPU behavior)** - Break for every thread (like CPU behavior)

## Attach

Specifies whether the debugger should attempt to attach to an existing process when debugging starts.

## SQL Debugging

Attach the SQL debugger.

## Deployment Directory

When debugging on a remote machine, if you want the contents of the project output (except for PDB files) to be copied to the remote machine, specify the path here

## Additional Files to Deploy

When debugging on a remote machine, files and directories specified here (besides the project output) are copied to the Deployment Directory if one was specified.

## Deploy Visual C++ Debug Runtime Libraries

Specifies whether to deploy the debug runtime libraries for the active platform (Win32, x64, or ARM).

## Amp Default Accelerator

Override C++ AMP's default accelerator selection. Property does not apply when debugging managed code.

