---
title: "Configure a Linux CMake project in Visual Studio"
description: "How to configure, edit and compile a Linux CMake project in Visual Studio"
ms.date: "06/07/2019"
ms.assetid: f8707b32-f90d-494d-ae0b-1d44425fdc25
---

# Configure a Linux CMake project

When you open a folder that contains a CMake project, Visual Studio uses the metadata that CMake produces to configure IntelliSense and builds automatically. Local configuration and debugging settings are stored in JSON files that can optionally be shared with others who are using Visual Studio. 

Visual Studio does not modify the CMakeLists.txt files or the original CMake cache, so that others working on the same project can continue to use whatever tools they are already using.

For general information about CMake support in Visual Studio, see [CMake Tools for Visual Studio](../build/cmake-projects-in-visual-studio.md). Read that first before continuing here.

## Before you begin

First, make sure you have the **Linux development with C++** workload installed, including the CMake component. See [Install the C++ Linux workload in Visual Studio](download-install-and-setup-the-linux-development-workload.md). 

On the Linux machine, make sure that the following are installed: 

- gcc
- gdb
- rsync
- zip 

::: moniker range="vs-2019"

Linux support for CMake projects requires a recent version of CMake to be installed on the target machine. Often, the version offered by a distribution’s default package manager is not recent enough to support all the features that are required by Visual Studio. Visual Studio 2019 detects whether a recent version of CMake is installed on the Linux system. If none is found, Visual Studio shows an info-bar at the top of the editor pane that offers to install it for you.

::: moniker-end

::: moniker range="vs-2017"

The CMake support in Visual Studio requires the server mode support that was introduced in CMake 3.8. For a Microsoft-provided CMake variant, download the latest prebuilt binaries at [https://github.com/Microsoft/CMake/releases](https://github.com/Microsoft/CMake/releases).

The binaries will be installed to `~/.vs/cmake`. After deploying the binaries, your project will automatically regenerate. Note that if the CMake specified by the `cmakeExecutable` field in `CMakeSettings.json` is invalid (doesn't exist or is an unsupported version) and the prebuilt binaries are present Visual Studio will ignore `cmakeExecutable` and use the prebuilt binaries.

:::moniker-end

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

::: moniker range="vs-2019"

To target Windows Subsystem for Linux, choose **WSL-Debug**.

::: moniker-end

By default, Visual Studio chooses the first remote system in the list under **Tools** > **Options** > **Cross Platform** > **Connection Manager**. If no remote connections are found, you are prompted to create one. For more information, see [Connect to your remote Linux computer](connect-to-your-remote-linux-computer.md).

After you specify a Linux target, your source is copied to your Linux machine. Then, CMake is run on the Linux machine to generate the CMake cache for your project.

![Generate CMake cache on Linux](media/cmake-linux-1.png "Generate the CMake cache on Linux")

To provide IntelliSense support for remote headers, Visual Studio automatically copies them from the Linux machine (or WSL installation) to a directory on your local Windows machine. For more information, see [IntelliSense for remote headers](configure-a-linux-project.md#remote_intellisense).

## Debug the project

To debug your code on the remote system, set a breakpoint, select the CMake target as the startup item in the toolbar menu next to the project setting, and choose **&#x23f5; Start** on the toolbar, or press F5.

To customize your program’s command line arguments, right-click on the executable in **Solution Explorer** and select **Debug and Launch Settings**. This opens or creates a launch.vs.json configuration file that contains information about your program. To specify additional arguments, add them in the `args` JSON array. For more information, see [Open Folder projects for C++](../build/open-folder-projects-cpp.md) and [Configure CMake debugging sessions](../build/configure-cmake-debugging-sessions.md).

## Configure CMake settings for Linux

A CMakeSettings.json file in a CMake Linux project can specify all the properties listed in [Customize CMake settings](../build/customize-cmake-settings.md), plus additional properties that control the build settings on the remote Linux machine. 

::: moniker range="vs-2019"

To change the default CMake settings in Visual Studio 2019, from the main toolbar, open the **Configuration** drop down and choose **Manage Configurations**. 

![CMake Manage Configurations](../build/media/vs2019-cmake-manage-configurations.png "CMake configurations drop-down")

This brings up the **CMake Settings Editor** which you can use to edit the `CMakeSettings.json` file in your root project folder. You can also open the file directly by clicking the **Edit JSON** button in the editor. For more information, see [Customize CMake Settings](../build/customize-cmake-settings.md).

::: moniker-end

::: moniker range="vs-2017"

To change the default CMake settings in Visual Studio 2017, choose **CMake | Change CMake Settings | CMakeLists.txt** from the main menu, or right-click CMakeSettings.txt in **Solution Explorer** and choose **Change CMake Settings**. Visual Studio then creates a new `CMakeSettings.json` file in your root project folder. You can open the file using the **CMake Settings** editor or modify the file directly. For more information, see [Customize CMake settings](../build/customize-cmake-settings.md).

::: moniker-end

The following example shows the default configuration for Linux-Debug based on the previous code example:

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
The following table summarizes the settings:

|Setting|Description|
|-----------|-----------------|
|`name`|This value can be whatever you like.|
|`remoteMachineName`|Specifies which remote system to target, in case you have more than one. IntelliSense is enabled for this field to help you select the right system.|
|`remoteCMakeListsRoot`|Specifies where your project sources will be copied to on the remote system.|
|`remoteBuildRoot`|Specifies where the build output will be generated on your remote system. That output is also copied locally to the location specified by `buildRoot`.|
|`remoteInstallRoot` and `installRoot`| Similar to `remoteBuildRoot` and `buildRoot`, except they apply when doing a CMake install.|
|`remoteCopySources`|Specifies whether or not your local sources are copied to the remote machine. You might set this to false if you have many files and you're already syncing the sources yourself.|
|`remoteCopyOutputVerbosity`| Specifies the verbosity of the copy step in case you need to diagnose errors.|
|`remoteCopySourcesConcurrentCopies`| Specifies how many processes are spawned to do the copy.|
|`remoteCopySourcesMethod`| Can be either `rsync` or `sftp`.|
|`remoteCopySourcesExclusionList`| Specifies files that you do not want to be copied to the remote machine.|
|`rsyncCommandArgs`|Controls the rsync method of copying.|
|`remoteCopyBuildOutput`| Controls whether or not the remote build output is copied to your local build folder.|

You can use these optional settings for more control:

```json
{
      "remotePrebuildCommand": "",
      "remotePreGenerateCommand": "",
      "remotePostbuildCommand": "",
}
```

These options allow you to run commands on the remote system before and after building, and before CMake generation. The values can be any command that is valid on the remote system. The output is piped back to Visual Studio.

::: moniker range="vs-2019"

In Visual Studio 2019 you can edit all these settings in the **CMake Settings Editor**.

::: moniker-end

## See also

[Working with Project Properties](../build/working-with-project-properties.md)<br/>
[CMake Projects in Visual Studio](../build/cmake-projects-in-visual-studio.md)<br/>
[Connect to your remote Linux computer](connect-to-your-remote-linux-computer.md)<br/>
[Customize CMake settings](../build/customize-cmake-settings.md)<br/>
[Configure CMake debugging sessions](../build/configure-cmake-debugging-sessions.md)<br/>
[Deploy, run, and debug your Linux project](deploy-run-and-debug-your-linux-project.md)<br/>
[CMake predefined configuration reference](../build/cmake-predefined-configuration-reference.md)<br/>
