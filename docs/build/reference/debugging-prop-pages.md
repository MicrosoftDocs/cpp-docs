---
description: Learn more about C++ Debugging property pages.
title: "C++ Debugging Property Pages"
ms.date: "09/11/2026"
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
  - VC.Project.VCDebugSettings.WebBrowser.WebBrowserDebuggerHttpUrl
  - VC.Project.VCDebugSettings.WebBrowser.DebuggerType
  - VC.Project.IVCWebSvcDebugPageObject.HttpUrl
  - VC.Project.IVCWebSvcDebugPageObject.DebuggerType
  - VC.Project.IVCWebSvcDebugPageObject.SQLDebugging
---
# C++ Debugging property pages

These property pages are found under **Project** > **Properties** > **Configuration Properties** > **Debugging**. Choose the debugger type in the **Debugger to launch** list. For more information about debugging C++ code, see [Tutorial: Learn to debug C++ code using Visual Studio](/visualstudio/debugger/getting-started-with-the-debugger-cpp) and [Debugging Native Code](/visualstudio/debugger/debugging-native-code).

## Local Windows Debugger property page

### Command

The debug command to execute.

### Command Arguments

The command line arguments to pass to the application.

### Working Directory

The application's working directory. By default, the directory containing the project file.

### Attach

Specifies whether the debugger should attempt to attach to an existing process when debugging starts.

### Debugger Type

Specifies the debugger type to use. When this property is set to Auto, the debugger type is selected based on the contents of the .exe file.

:::moniker range="msvc-180"
**Choices**

- **Native Only**  
- **Managed Only (.NET Framework)**  
- **Mixed (.NET Framework)**
- **Managed Only (.NET Core)**
- **Mixed (.NET Core)**
- **Auto**  
- **GPU Only (C++ AMP)**
- **JavaScript (WebView2)** 
:::moniker-end

:::moniker range="<=msvc-170"
**Choices**

- **Native Only**
- **Managed Only**
- **Mixed**
- **Auto**
- **Script**
- **GPU Only (C++ AMP)**
:::moniker-end

### Environment

Specifies the environment for the program to be debugged, or variables to merge with existing environment.

### Debugging Accelerator Type

The debugging accelerator type to use for debugging the GPU code. (Available when the GPU debugger is active.)

### GPU Default Breakpoint Behavior

Sets how often the GPU debugger breaks.

**Choices**

- **Break once per warp**
- **Break for every thread (like CPU behavior)**

### Merge Environment

Merge specified environment variables with existing environment.

### SQL Debugging

Specifies whether to attach the SQL debugger.

### Amp Default Accelerator

Override C++ AMP's default accelerator selection. This property doesn't apply when you debug managed code.

## Remote Windows Debugger property page

For more information about remote debugging, see [Remote Debugging a Visual C++ Project in Visual Studio](/visualstudio/debugger/remote-debugging-cpp).

### Remote Command

The debug command to execute.

### Remote Command Arguments

The command line arguments to pass to the application.

### Working Directory

The application's working directory. By default, the directory containing the project file.

### Remote Server Name

Specifies a remote server name.

### Connection

Specifies the connection type.

**Choices**

- **Remote with Windows authentication** For more information, see [Windows authentication](/windows-server/security/windows-authentication/windows-authentication-overview).
- **Remote with no authentication**

### Debugger Type

Specifies the debugger type to use. When this property is set to Auto, the debugger type is selected based on  the contents of the .exe file.

:::moniker range="msvc-180"
**Choices**

- **Native Only**  
- **Managed Only (.NET Framework)**  
- **Mixed (.NET Framework)**
- **Managed Only (.NET Core)**
- **Mixed (.NET Core)**
- **Auto**  
- **GPU Only (C++ AMP)**
- **JavaScript (WebView2)** 
:::moniker-end

:::moniker range="<=msvc-170"
**Choices**

- **Native Only**
- **Managed Only**
- **Mixed**
- **Auto**
- **Script**
- **GPU Only (C++ AMP)**
:::moniker-end

### Environment

Specifies the environment for the program to be debugged, or variables to merge with existing environment.

### Debugging Accelerator Type

The debugging accelerator type to use for debugging the GPU code. (Available when the GPU debugger is active.)

### GPU Default Breakpoint Behavior

Sets how often the GPU debugger breaks.

**Choices**

- **Break once per warp**
- **Break for every thread (like CPU behavior)**

### Attach

Specifies whether the debugger should attempt to attach to an existing process when debugging starts.

### SQL Debugging

Specifies whether to attach the SQL debugger.

### Deployment Directory

When debugging on a remote machine, if you want the contents of the project output (except for PDB files) to be copied to the remote machine, specify the path here.

### Additional Files to Deploy

When debugging on a remote machine, files and directories specified here (besides the project output) are copied to the Deployment Directory if one was specified.

### Deploy Visual C++ Debug Runtime Libraries

Specifies whether to deploy the debug runtime libraries for the active platform (Win32, x64, or ARM).

:::moniker range=">=msvc-170"
### Deploy Visual C++ Runtime Libraries

Specifies whether to deploy the runtime library for the active platform (Win32, x64, or ARM).
:::moniker-end

### Amp Default Accelerator

Override C++ AMP's default accelerator selection. This property doesn't apply when debugging managed code.

## Web Browser Debugger property page

### HTTP URL

Specifies the URL for the project.

### Debugger Type

Specifies the debugger type to use. When this property is set to Auto, the debugger type is selected based on the contents of the .exe file.

:::moniker range="msvc-180"
**Choices**

- **Native Only**  
- **Managed Only**
- **Mixed**
- **Auto**
:::moniker-end

:::moniker range="<=msvc-170"
**Choices**

- **Native Only**  
- **Managed Only**
- **Mixed**
- **Auto**
- **Script**
:::moniker-end

## Web Service Debugger property page

### HTTP URL

Specifies the URL for the project.

### Debugger Type

Specifies the debugger type to use. When this property is set to Auto, the debugger type is selected based on the contents of the .exe file.

:::moniker range="msvc-180"
**Choices**

- **Native Only**
- **Managed Only**  
- **Mixed**  
- **Auto**  
:::moniker-end

:::moniker range="<=msvc-170"
**Choices**

- **Native Only**
- **Managed Only**  
- **Mixed**  
- **Auto**  
- **Script**
:::moniker-end

### SQL Debugging

Specifies whether to attach the SQL debugger.
