---
title: "Configure a Linux CMake project in Visual Studio"
description: "How to configure a Linux CMake project in Visual Studio"
ms.date: "07/20/2018"
ms.assetid: f8707b32-f90d-494d-ae0b-1d44425fdc25
---

# Configure a Linux CMake project

**Visual Studio 2017 version 15.4 and later**<br/>
When you install the Linux C++ workload for Visual Studio, CMake support for Linux is selected by default. You can now work on your existing code base that uses CMake without having to convert it to a Visual Studio project. If your code base is cross-platform, you can target both Windows and Linux from within Visual Studio.

This topic assumes you have basic familiarity with CMake support in Visual Studio. For more information, see [CMake Tools for Visual C++](../ide/cmake-tools-for-visual-cpp.md). For more information about CMake itself, see [Build, Test and Package Your Software With CMake](https://cmake.org/).

> [!NOTE]
> The CMake support in Visual Studio requires the server mode support that was introduced in CMake 3.8. For a Microsoft-provided CMake variant download the latest prebuilt binaries at [https://github.com/Microsoft/CMake/releases](https://github.com/Microsoft/CMake/releases). In Visual Studio 2019 the prebuilt binaries can be automatically deployed (see [Download prebuilt CMake binaries](#download-prebuilt-cmake-binaries)).

## Open a folder

To get started, choose **File** > **Open** > **Folder** from the main menu or else type `devenv.exe <foldername>` on the command line. The folder you open should have a CMakeLists.txt file in it, along with your source code.
The following example shows a simple CMakeLists.txt file and .cpp file:

```cpp
// hello.cpp

#include <iostream>

int main(int argc, char* argv[])
{
    std::cout << "Hello from Linux CMake" << std::endl;
}
```

CMakeLists.txt:

```cmd
project (hello-cmake)
add_executable(hello-cmake hello.cpp)
```

## Choose a Linux target

As soon as you open the folder, Visual Studio parses the CMakeLists.txt file and specifies a Windows target of **x86-Debug**. To target Linux, change the project settings to **Linux-Debug** or **Linux-Release**.

By default, Visual Studio chooses the first remote system in the list under **Tools** > **Options** > **Cross Platform** > **Connection Manager**. If no remote connections are found, you are prompted to create one.

After you specify a Linux target, your source is copied to your Linux machine. Then, CMake is run on the Linux machine to generate the CMake cache for your project.

![Generate CMake cache on Linux](media/cmake-linux-1.png "Generate the CMake cache on Linux")

**Visual Studio 2017 version 15.7 and later:**<br/>
To provide IntelliSense support for remote headers, Visual Studio automatically copies them to a directory on your local Windows machine. For more information, see [IntelliSense for remote headers](configure-a-linux-project.md#remote_intellisense).

## Debug the project

To debug your code on the remote system, set a breakpoint, select the CMake target as the startup item in the toolbar menu next to the project setting, and choose **&#x23f5; Start** on the toolbar, or press F5.

To customize your program’s command line arguments, right-click on the executable in **Solution Explorer** and select **Debug and Launch Settings**. This opens or creates a launch.vs.json configuration file that contains information about your program. To specify additional arguments, add them in the `args` JSON array. For more information, see [Open Folder projects in Visual C++](../ide/non-msbuild-projects.md).

## Configure CMake settings for Linux

To change the default CMake settings, choose **CMake | Change CMake Settings | CMakeLists.txt** from the main menu, or right-click CMakeSettings.txt in **Solution Explorer** and choose **Change CMake Settings**. Visual Studio then creates a new file in your folder called `CMakeSettings.json` that is populated with the default configurations that are listed in the project settings menu item. The following example shows the default configuration for Linux-Debug based on the previous code example:

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

The `name` value can be whatever you like. The `remoteMachineName` value specifies which remote system to target, in case you have more than one. IntelliSense is enabled for this field to help you select the right system. The field `remoteCMakeListsRoot` specifies where your project sources will be copied to on the remote system. The field `remoteBuildRoot` is where the build output will be generated on your remote system. That output is also copied locally to the location specified by `buildRoot`. The `remoteInstallRoot` and `installRoot` fields are similar to `remoteBuildRoot` and `buildRoot`, except they apply when doing a cmake install. The `remoteCopySources` entry controls whether or not your local sources are copied to the remote machine. You might set this to false if you have a lot of files and you're already syncing the sources yourself. The `remoteCopyOutputVerbosity` value controls the verbosity of the copy step in case you need to diagnose errors. The `remoteCopySourcesConcurrentCopies` entry controls how many processes are spawned to do the copy. The `remoteCopySourcesMethod` value can be one of rsync or sftp. The `remoteCopySourcesExclusionList` field allows you to control what gets copied to the remote machine. The `rsyncCommandArgs` value lets you control the rsync method of copying. The `remoteCopyBuildOutput` field controls whether or not the remote build output is copied to your local build folder.

There are also some optional settings you can use for more control:

```json
{
      "remotePreBuildCommand": "",
      "remotePreGenerateCommand": "",
      "remotePostBuildCommand": "",
}
```

These options allow you to run commands on the remote box before and after building, and before CMake generation. They can be any valid command on the remote box. Output is piped back to Visual Studio.

## Download prebuilt CMake binaries

Your Linux distro may have an older version of CMake. The CMake support in Visual Studio requires the server mode support that was introduced in CMake 3.8. For a Microsoft-provided CMake variant download the latest prebuilt binaries at [https://github.com/Microsoft/CMake/releases](https://github.com/Microsoft/CMake/releases).

**Visual Studio 2019**<br/>
If a valid CMake is not found on the remote machine an infobar will appear and provide an option to automatically deploy the prebuilt CMake binaries. The binaries will be installed to `~/.vs/cmake`. After deploying the binaries, your project will automatically regenerate. Note that if the CMake specified by the `cmakeExecutable` field in `CMakeSettings.json` is invalid (doesn't exist or is an unsupported version) and the prebuilt binaries are present Visual Studio will ignore `cmakeExecutable` and use the prebuilt binaries.

## See also

- [Working with Project Properties](../ide/working-with-project-properties.md)
- [CMake Tools for Visual C++](../ide/cmake-tools-for-visual-cpp.md)
