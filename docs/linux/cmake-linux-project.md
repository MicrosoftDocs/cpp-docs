---
title: "Create a CMake Linux project in Visual Studio"
description: "How to create a Linux CMake project in Visual Studio"
ms.date: "08/06/2020"
ms.assetid: f8707b32-f90d-494d-ae0b-1d44425fdc25
---
# Create a CMake Linux project in Visual Studio

::: moniker range="msvc-140"
Linux support is available in Visual Studio 2017 and later. To see the documentation for these versions, set the **Version** drop-down located above the table of contents to **Visual Studio 2017** or **Visual Studio 2019**.
::: moniker-end

::: moniker range=">=msvc-150"

We recommend you use CMake for projects that are cross-platform or will be made open-source. You can use CMake projects to build and debug the same source code on Windows, the Windows Subsystem for Linux (WSL), and remote systems.

## Before you begin

First, make sure you have the Visual Studio Linux workload installed, including the CMake component. That's the **Linux development with C++** workload in the Visual Studio installer. See [Install the C++ Linux workload in Visual Studio](download-install-and-setup-the-linux-development-workload.md) if you aren't sure you have that installed.

Also, make sure the following are installed on the remote machine:

- gcc
- gdb
- rsync
- zip
- ninja-build (Visual Studio 2019 or above)
::: moniker-end

::: moniker range="msvc-150"
The CMake support in Visual Studio requires server mode support introduced in CMake 3.8. For a Microsoft-provided CMake variant, download the latest prebuilt binaries at [https://github.com/Microsoft/CMake/releases](https://github.com/Microsoft/CMake/releases).

The binaries are installed in `~/.vs/cmake`. After deploying the binaries, your project automatically regenerates. If the CMake specified by the `cmakeExecutable` field in *CMakeSettings.json* is invalid (it doesn't exist or is an unsupported version), and the prebuilt binaries are present, Visual Studio ignores `cmakeExecutable` and uses the prebuilt binaries.

Visual Studio 2017 can't create a CMake project from scratch, but you can open a folder that contains an existing CMake project, as described in the next section.
::: moniker-end

::: moniker range=">=msvc-160"
You can use Visual Studio 2019 to build and debug on a remote Linux system or WSL, and CMake will be invoked on that system. Cmake version 3.14 or later should be installed on the target machine.

Make sure that the target machine has a recent version of CMake. Often, the version offered by a distribution's default package manager isn't recent enough to support all the features required by Visual Studio. Visual Studio 2019 detects whether a recent version of CMake is installed on the Linux system. If none is found, Visual Studio shows an info-bar at the top of the editor pane. It offers to install CMake for you from [https://github.com/Microsoft/CMake/releases](https://github.com/Microsoft/CMake/releases).

With Visual Studio 2019, you can create a CMake project from scratch, or open an existing CMake project. To create a new CMake project, follow the instructions below. Or skip ahead to [Open a CMake project folder](#open-a-cmake-project-folder) if you already have a CMake project.

## Create a new Linux CMake project

To create a new Linux CMake project in Visual Studio 2019:

1. Select **File > New Project** in Visual Studio, or press **Ctrl + Shift + N**.
1. Set the **Language** to **C++** and search for "CMake". Then choose **Next**. Enter a **Name** and **Location**, and choose **Create**.

Alternatively, you can open your own CMake project in Visual Studio 2019. The following section explains how.

Visual Studio creates a minimal *CMakeLists.txt* file with only the name of the executable and the minimum CMake version required. You can manually edit this file however you like; Visual Studio will never overwrite your changes.

To help you make sense of, edit, and author your CMake scripts in Visual Studio 2019, refer to the following resources:

- [In-editor documentation for CMake in Visual Studio](https://devblogs.microsoft.com/cppblog/in-editor-documentation-for-cmake-in-visual-studio/)
- [Code navigation for CMake scripts](https://devblogs.microsoft.com/cppblog/code-navigation-for-cmake-scripts/)
- [Easily Add, Remove, and Rename Files and Targets in CMake Projects](https://devblogs.microsoft.com/cppblog/easily-add-remove-and-rename-files-and-targets-in-cmake-projects/)
::: moniker-end

::: moniker range=">=msvc-150"

## Open a CMake project folder

When you open a folder that contains an existing CMake project, Visual Studio uses variables in the CMake cache to automatically configure IntelliSense and builds. Local configuration and debugging settings get stored in JSON files. You can optionally share these files with others who are using Visual Studio.

Visual Studio doesn't modify the *CMakeLists.txt* files. This allows others working on the same project to continue to use their existing tools. Visual Studio does regenerate the cache when you save edits to *CMakeLists.txt*, or in some cases, to *CMakeSettings.json*. If you're using an **Existing Cache** configuration, then Visual Studio doesn't modify the cache.

For general information about CMake support in Visual Studio, see [CMake projects in Visual Studio](../build/cmake-projects-in-visual-studio.md). Read that before continuing here.

To get started, choose **File** > **Open** > **Folder** from the main menu or else type `devenv.exe <foldername>` in a [developer command prompt](../build/building-on-the-command-line.md) window. The folder you open should have a *CMakeLists.txt* file in it, along with your source code.

The following example shows a simple *CMakeLists.txt* file and .cpp file:

```cpp
// hello.cpp

#include <iostream>

int main(int argc, char* argv[])
{
    std::cout << "Hello from Linux CMake \n";
}
```

*CMakeLists.txt*:

```txt
cmake_minimum_required(VERSION 3.8)
project (hello-cmake)
add_executable(hello-cmake hello.cpp)
```

## Next steps

[Configure a Linux CMake project](cmake-linux-configure.md)

## See also

[CMake Projects in Visual Studio](../build/cmake-projects-in-visual-studio.md)<br/>
::: moniker-end
