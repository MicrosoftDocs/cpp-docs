---
title: "General properties (Linux C++ Project)"
description: "Describes the Linux project properties you can set in Visual Studio on the General properties page."
ms.date: "10/14/2020"
ms.assetid: 56c800a9-3df9-4196-87b2-81adb00e4767
---
# General properties (Linux C++)

::: moniker range="msvc-140"

Linux support is available in Visual Studio 2017 and later.

::: moniker-end

::: moniker range=">=msvc-150"

| Property | Description |
|--|--|
| Output Directory | Specifies a relative path to the output file directory. It can include environment variables. |
| Intermediate Directory | Specifies a relative path to the intermediate file directory. It can include environment variables. |
| Target Name | Specifies the file name that this project generates. |
| Target Extension | Specifies the file extension (for example, `.a`) that this project generates. |
| Extensions to Delete on Clean | Semi-colon-delimited wildcard specification for which files in the intermediate directory to delete on clean or rebuild. |
| Build Log File | Specifies the build log file to write to when build logging is enabled. |
| Platform Toolset | Specifies the toolset used for building the current configuration. If not set, the default toolset is used. |
| WSL *.exe full path | **Visual Studio 2019 version 16.1** Full path to the Windows Subsystem for Linux (WSL) executable used to build and debug. |
| Remote Build Machine | Displays the target machine or device to use for remote build, deploy, and debug. You can add or edit a target machine connection by using **Tools** > **Options** > **Cross Platform** > **Connection Manager**.<br /> **Visual Studio 2019 version 16.1** You can specify a different machine for debugging on the [Debugging](debugging-linux.md) page. |
| Remote Build Root Directory | Specifies a path to a directory on the remote machine or device. |
| Remote Build Project Directory | Specifies a path to a directory on the remote machine or device for the project. |
| Remote Deploy Directory | **Visual Studio 2019 version 16.1** Specifies the directory path on the remote machine or device to deploy the project. |
| Enable Incremental Build | **Visual Studio 2019 version 16.7** Specifies whether to do incremental builds using the [Ninja](https://ninja-build.org/) build system. Builds will usually be faster for most projects with this setting enabled. |
| Remote Copy Include Directories | **Visual Studio 2019 version 16.5**  A list of directories to copy recursively from the Linux target. This property affects the remote header copy for IntelliSense, but not the build. It can be used when **IntelliSense Uses Compiler Defaults** is set to false. Use **Additional Include Directories** under the C/C++ General tab to specify additional include directories to use for both IntelliSense and build. |
| Remote Copy Exclude Directories | **Visual Studio 2019 version 16.5** A list of directories *not* to copy from the Linux target. Usually, this property is used to remove subdirectories of the include directories. |
| IntelliSense Uses Compiler Defaults | **Visual Studio 2019 version 16.5** Whether to query the compiler referenced by this project for its default list of include locations. These locations are automatically added to the list of remote directories to copy. Only set this property to false if the compiler doesn't support gcc-like parameters. Both gcc and clang compilers support queries for the include directories (for example, `g++ -x c++ -E -v -std=c++11`). |
| Configuration Type | Specifies the type of output this configuration generates, such as: **Dynamic Library (.so)**, **Static library (.a)**, **Application (.out)**, and **Makefile** |
| Use of STL | Specifies which C++ Standard Library to use for this configuration, such as: **Shared GNU Standard C++ Library**, or **Static GNU Standard C++ Library (-static)** |

::: moniker-end
