---
title: "Local Windows Debugger Property Page"
ms.date: "7/24/2019"
ms.topic: "article"
ms.assetid: 78115a6b-3799-4515-814e-8566b5bdc55d
f1_keywords:
  - VC.Project.IVCLocalDebugPageObject.Command
  - VC.Project.IVCLocalDebugPageObject.CommandArguments
  - VC.Project.IVCLocalDebugPageObject.WorkingDirectory
  - VC.Project.IVCLocalDebugPageObject.Attach
  - VC.Project.IVCLocalDebugPageObject.DebuggerType
  - VC.Project.IVCLocalDebugPageObject.Environment
  - VC.Project.IVCLocalDebugPageObject.GPUDebuggerTargetType
  - VC.Project.IVCLocalDebugPageObject.GPUBreakOnAllThreads
  - VC.Project.IVCLocalDebugPageObject.EnvironmentMerge
  - VC.Project.IVCLocalDebugPageObject.SQLDebugging
  - VC.Project.IVCLocalDebugPageObject.AmpDefaultAccelerator
---

# Local Windows Debugger Property Page

This property page is found under **Project** > **Properties** > **Configuration Properties** > **Debugging**. Choose **Local Windows Debugger** in the drop-down control. For more information about debugging C++ code, see [Tutorial: Learn to debug C++ code using Visual Studio](/visualstudio/debugger/getting-started-with-the-debugger-cpp) and [Debugging Native Code](/visualstudio/debugger/debugging-native-code).

## Command

The debug command to execute.

## Command Arguments

The command line arguments to pass to the application.

## Working Directory

The application's working directory. By default, the directory containing the project file.

## Attach

Specifies whether the debugger should attempt to attach to an existing process when debugging starts.

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

## Merge Environment

Merge specified environment variables with existing environment.

## SQL Debugging

Attach the SQL debugger.

## Amp Default Accelerator

Override C++ AMP's default accelerator selection. Property does not apply when debugging managed code.

