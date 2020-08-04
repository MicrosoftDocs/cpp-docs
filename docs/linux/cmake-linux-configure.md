---
title: "Configure CMake settings for Linux in Visual Studio"
description: "How to configure Linux CMake project in Visual Studio"
ms.date: "07/23/2020"
---
# Configure CMake settings for Linux in Visual Studio

::: moniker range="vs-2015"
Linux support is available in Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. It's found at the top of the table of contents on this page.
::: moniker-end

::: moniker range=">=vs-2017"
This topic describes how to configure a C++ Linux project, continuing the series that began with [Create a Linux CMake project in Visual Studio](cmake-linux-project.md). If you are using MSBuild, instead, see [Configure a Linux Project](configure-a-linux-project.md)

To configure the build, you open the CMake Settings Editor. This creates a **CMakeSettings.json** file at the root of your project. Configurations can be used to target different platforms (Windows, WSL, a remote system) with the same source code. They are also used to set your compilers, pass environment variables, and customize how CMake is invoked.

The *CMakeSettings.json* file in a CMake Linux project specifies some or all of the properties listed in [Customize CMake settings](../build/customize-cmake-settings.md), plus additional properties that control the build settings on the remote Linux machine.
::: moniker-end

::: moniker range="vs-2017"
To change the default CMake settings in Visual Studio 2017, choose **CMake** > **Change CMake Settings** > **CMakeLists.txt** from the main menu. Or, right-click *CMakeSettings.txt* in **Solution Explorer** and choose **Change CMake Settings**. Visual Studio then creates a new *CMakeSettings.json* file in your root project folder. You can open the file using the **CMake Settings** editor or modify the file directly. For more information, see [Customize CMake settings](../build/customize-cmake-settings.md).

Given the following code and CMakeLists.txt file:

```cpp
// hello.cpp

#include <iostream>

int main(int argc, char* argv[])
{
    std::cout << "Hello from Linux CMake" << std::endl;
}
```

*CMakeLists.txt*:

```txt
cmake_minimum_required(VERSION 3.8)
project (hello-cmake)
add_executable(hello-cmake hello.cpp)
```

You would see something like this default configuration for Linux-Debug in Visual Studio 2017 (and Visual Studio 2019 version 16.0):

```json
{
      "name": "Linux-Debug",
      "generator": "Unix Makefiles",
      "remoteMachineName": "${defaultRemoteMachineName}",
      "configurationType": "Debug",
      "remoteCMakeListsRoot": "/var/tmp/src/${workspaceHash}/${name}",
      "cmakeExecutable": "/usr/local/bin/cmake",
      "buildRoot": "${env.LOCALAPPDATA}\\CMakeBuilds\\${workspaceHash}\\build\\${name}",
      "installRoot": "${env.LOCALAPPDATA}\\CMakeBuilds\\${workspaceHash}\\install\\${name}",
      "remoteBuildRoot": "/var/tmp/build/${workspaceHash}/build/${name}",
      "remoteInstallRoot": "/var/tmp/build/${workspaceHash}/install/${name}",
      "remoteCopySources": true,
      "remoteCopySourcesOutputVerbosity": "Normal",
      "remoteCopySourcesConcurrentCopies": "10",
      "remoteCopySourcesMethod": "rsync",
      "remoteCopySourcesExclusionList": [".vs", ".git"],
      "rsyncCommandArgs" : "-t --delete --delete-excluded",
      "remoteCopyBuildOutput" : "false",
      "cmakeCommandArgs": "",
      "buildCommandArgs": "",
      "ctestCommandArgs": "",
      "inheritEnvironments": [ "linux-x64" ]
}
```
::: moniker-end

::: moniker range="vs-2019"
To change the default CMake settings in Visual Studio 2019, from the main toolbar, open the **Configuration** dropdown and choose **Manage Configurations**.

![CMake Manage Configurations](../build/media/vs2019-cmake-manage-configurations.png "CMake configurations drop-down")

This command brings up the **CMake Settings Editor**, which you can use to edit the *CMakeSettings.json* file in your root project folder. You can also open the file directly by clicking the **Edit JSON** button in the editor. For more information, see [Customize CMake Settings](../build/customize-cmake-settings.md).

The the default Linux-Debug configuration in Visual Studio 2019 version 16.1 and later is shown here:

```json
{
      "name": "Linux-Debug",
      "generator": "Unix Makefiles",
      "configurationType": "Debug",
      "cmakeExecutable": "/usr/bin/cmake",
      "remoteCopySourcesExclusionList": [ ".vs", ".git", "out" ],
      "cmakeCommandArgs": "",
      "buildCommandArgs": "",
      "ctestCommandArgs": "",
      "inheritEnvironments": [ "linux_x64" ],
      "remoteMachineName": "${defaultRemoteMachineName}",
      "remoteCMakeListsRoot": "$HOME/.vs/${projectDirName}/${workspaceHash}/src",
      "remoteBuildRoot": "$HOME/.vs/${projectDirName}/${workspaceHash}/out/build/${name}",
      "remoteInstallRoot": "$HOME/.vs/${projectDirName}/${workspaceHash}/out/install/${name}",
      "remoteCopySources": true,
      "rsyncCommandArgs": "-t --delete --delete-excluded",
      "remoteCopyBuildOutput": false,
      "remoteCopySourcesMethod": "rsync",
      "addressSanitizerRuntimeFlags": "detect_leaks=0",
      "variables": []
    }
  ]
}
```
::: moniker-end

::: moniker range=">=vs-2017"
For more information about these settings, see [CMakeSettings.json reference](../build/cmakesettings-reference.md).

## Optional Settings

You can use the following optional settings for more control:

```json
{
      "remotePrebuildCommand": "",
      "remotePreGenerateCommand": "",
      "remotePostbuildCommand": "",
}
```

These options allow you to run commands on the Linux system before and after building, and before CMake generation. The values can be any command that is valid on the remote system. The output is piped back to Visual Studio.

## Next step

[Debug a CMake Linux project](cmake-linux-debug.md)

## See also

[Working with Project Properties](../build/working-with-project-properties.md)<br/>
[Customize CMake settings](../build/customize-cmake-settings.md)
<br/>
[CMake predefined configuration reference](../build/cmake-predefined-configuration-reference.md)

::: moniker-end
