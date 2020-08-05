---
title: "Debug a CMake Linux project in Visual Studio"
description: "How to debug a Linux CMake project in Visual Studio"
ms.date: "07/23/2020"
---
# Debug a CMake Linux project in Visual Studio

::: moniker range="vs-2015"
Linux support is available in Visual Studio 2017 and later. To see the documentation for later versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. It's found at the top of the table of contents on this page.
::: moniker-end

::: moniker range=">=vs-2017"
This topic describes how to debug a C++ Linux project as described in [Create a Linux CMake project in Visual Studio](cmake-linux-project.md).

Once you have created or opened a Linux C++ CMake project, you can compile, execute, and debug the code on the remote target.

 For debugging MSBuild Linux projects, see [Deploy, run, and debug your Linux project](deploy-run-and-debug-your-linux-project.md)

## Choose a Linux target

When you open a CMake project folder, Visual Studio parses the *CMakeLists.txt* file and specifies a Windows target of **x86-Debug**. To target a remote Linux system, you'll change the project settings to **Linux-Debug** or **Linux-Release**.

::: moniker-end
::: moniker range="vs-2019"
### Windows Subsystem for Linux

To target Windows Subsystem for Linux (WSL), select **Manage Configurations** in the configuration dropdown in the main toolbar. Then press the **Add Configuration** button and choose **WSL-Debug** or **WSL-Release** if using GCC. Use the Clang variants if using the Clang/LLVM toolset.

**Visual Studio 2019 version 16.1** When targeting WSL, no copying of sources or headers is necessary. That's because the compiler on Linux has direct access to your source files in the Windows file system. (In Windows 10 version 1903 and later, Windows applications likewise can access the Linux header files directly. Visual Studio doesn't take advantage of this capability yet.)
::: moniker-end

::: moniker range=">=vs-2017"
### Add a remote connection

If you're targeting Windows Subsystem for Linux, you don't need to add a remote connection.

If you're targeting a remote system, Visual Studio chooses the first remote system in the list under **Tools** > **Options** > **Cross Platform** > **Connection Manager** by default for remote targets.

If no remote connections are found, you're prompted to create one. For more information, see [Connect to your remote Linux computer](connect-to-your-remote-linux-computer.md).

If you specify a remote Linux target, your source is copied to the remote system.

After you select a target, CMake runs automatically on the Linux system to generate the CMake cache for your project:

![Generate CMake cache on Linux](media/cmake-linux-1.png "Generate the CMake cache on Linux")

### Intellisense

Accurate C++ IntelliSense requires access to the C++ headers that are referenced by C++ source files. Visual Studio automatically copies the headers referenced by a CMake project from Linux to Windows to provide a full-fidelity IntelliSense experience. For more information, see [IntelliSense for remote headers](configure-a-linux-project.md#remote_intellisense).

### Locale

For more information, see [Linux target locale](configure-a-linux-project.md#locale).

## Debug the CMake project

To debug your code on the specified target system, set a breakpoint. Select the CMake target as the startup item in the toolbar menu next to the project setting. Then choose **&#x23f5; Start** on the toolbar, or press **F5**.

To customize your program's command-line arguments, press the **Switch Targets** button at the top of **Solution Explorer** and then choose **Targets View**. Then right-click on the target and select **Debug and Launch Settings**. This command opens or creates a *launch.vs.json* configuration file that contains information about your program. To specify the location for source files, add a **sourceFileMap** property to the file, as shown in this example:

```json
"MIMode": "gdb",
"externalConsole": true,
"sourceFileMap": {
"c/Users/USER/source/repos/CMAKEPROJECTNAME": "C:\\Users\\USER\\source\\repos\\CMAKEPROJECTNAME"
},
"remoteMachineName": "${debugInfo.remoteMachineName}",
```

To specify additional arguments, add them in the `args` JSON array. For more information, see [Open Folder projects for C++](../build/open-folder-projects-cpp.md) and [Configure CMake debugging sessions](../build/configure-cmake-debugging-sessions.md).

## Next steps

Learn about [Configure CMake debugging sessions](../build/configure-cmake-debugging-sessions.md)

## See also

[CMake Projects in Visual Studio](../build/cmake-projects-in-visual-studio.md)<br/>
[Connect to your remote Linux computer](connect-to-your-remote-linux-computer.md)<br/>
[Deploy, run, and debug your Linux project using MSBuild](deploy-run-and-debug-your-linux-project.md)

::: moniker-end