---
description: "Learn more about: Set the Path and Environment Variables for Command-Line Builds"
title: "Set the Path and Environment Variables for Command-Line Builds"
ms.custom: "conceptual"
ms.date: "07/24/2019"
helpviewer_keywords: ["environment variables [C++]", "VCVARS32.bat file", "cl.exe compiler [C++], environment variables", "LINK tool [C++], environment variables", "PATH reserved word", "INCLUDE reserved word", "LINK tool [C++], path", "LIB environment variable", "compiling source code [C++], from command line", "environment variables [C++], CL compiler"]
ms.assetid: 99389528-deb5-43b9-b99a-03c8773ebaf4
---
# Set the Path and Environment Variables for Command-Line Builds

The Microsoft C++ (MSVC) command-line build tools require several environment variables that are customized for your installation and build configuration. When a C++ workload is installed by the Visual Studio installer, it creates customized command files, or batch files, that set the required environment variables. The installer then uses these command files to create shortcuts for the Windows Start menu to open a developer command prompt window. These shortcuts set up the environment variables for a specific build configuration. When you want to use the command-line tools, you can run one of these shortcuts, or you can open a plain command prompt window and then run one of the custom command files to set the build configuration environment yourself. For more information, see [Use the MSVC toolset from the command line](building-on-the-command-line.md). To use the command files with a plain command prompt, see the section entitled [Developer command file locations](building-on-the-command-line.md#developer_command_file_locations).

The MSVC command-line tools use the PATH, TMP, INCLUDE, LIB, and LIBPATH environment variables, and also use other environment variables specific to your installed tools, platforms, and SDKs. Even a simple Visual Studio installation may set twenty or more environment variables. Because the values of these environment variables are specific to your installation and your choice of build configuration, and can be changed by product updates or upgrades, we strongly recommend that you use a developer command prompt shortcut or one of the customized command files to set them, instead of setting them in the Windows environment yourself.

To see which environment variables are set by a developer command prompt shortcut, you can use the SET command. Open a plain command prompt window and capture the output of the SET command for a baseline. Open a developer command prompt window and capture the output of the SET command for comparison. A diff tool such as the one built into the Visual Studio IDE can be useful to compare the environment variables and see what is set by the developer command prompt. For information about the specific environment variables used by the compiler and linker, see [CL Environment Variables](reference/cl-environment-variables.md).

> [!NOTE]
> Several command-line tools or tool options may require Administrator permission. If you have permission issues when you use them, we recommend that you open the developer command prompt window by using the **Run as Administrator** option. On Windows 10, right-click to open the shortcut menu for the command prompt window, then choose **More**, **Run as administrator**.

## See also

[Use the MSVC toolset from the command line](building-on-the-command-line.md)<br/>
[MSVC linker reference](reference/linking.md)<br/>
[MSVC Linker Options](reference/linker-options.md)<br/>
[MSVC Compiler Reference](reference/compiling-a-c-cpp-program.md)<br/>
[MSVC Compiler Options](reference/compiler-options.md)
