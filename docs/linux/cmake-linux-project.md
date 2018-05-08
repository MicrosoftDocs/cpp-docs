---
title: "Configure a Linux CMake project in Visual Studio | Microsoft Docs"
ms.custom: ""
ms.date: "10/25/2107"
ms.technology: ["cpp-linux"]
ms.tgt_pltfrm: "Linux"
ms.topic: "conceptual"
ms.assetid: f8707b32-f90d-494d-ae0b-1d44425fdc25
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus", "linux"]
---

# Configure a Linux CMake project
  
**Visual Studio 2017 version 15.4**
When you install the Linux C++ workload, CMake support for Linux is selected by default. You can now work on your existing code base that uses CMake without having to convert it to a Visual Studio project. If your code base is cross-platform, you can target both Windows and Linux from within Visual Studio. 

This topic assumes you have basic familiarity with CMake support in Visual Studio. For more information, see [CMake Tools for Visual C++](../ide/cmake-tools-for-visual-cpp.md). For more information about CMake itself, see [Build, Test and Package Your Software With CMake](https://cmake.org/).

> [!NOTE] 
> The CMake support in Visual Studio requires the server mode support that was introduced in CMake 3.8. If your package manager provides an older version of CMake, you can work around it by building CMake 3.8 from source.



## Open a folder
To get started, choose **File | Open | Folder** from the main menu or else type `devenv.exe <foldername>` on the command line. The folder you open should have a CMakeLists.txt file in it, along with your source code.
The following example shows a simple CMakeLists.txt file and .cpp file:

```cpp
// Hello.cpp

#include <iostream>;
 
int main(int argc, char* argv[])
{
    std::cout << "Hello" << std::endl;
}
```

CMakeLists.txt: 
```cmd
project (hello-cmake)
add_executable(hello-cmake hello.cpp)
```

## Choose a Linux target
As soon as you open the folder, Visual Studio parses the CMakeLists.txt file and specifies a Windows target of x86-Debug. To target Linux, change the project settings to Linux-Debug or Linux-Release.

By default, Visual Studio chooses the first remote system in the list (under **Tools | Options | Cross Platform | Connection Manager**). If no remote connections are found, you are prompted to create one.

After you specify a Linux target, your source is copied to your Linux machine. Then, CMake is run on the Linux machine to generate the CMake cache for your project.  

![Generate CMake cache on Linux](media/cmake-linux-1.png "Generate the CMake cache on Linux")  

## Debug the project  
To debug your code on the remote system, set a breakpoint, select the CMake target as the startup item in the toolbar menu next to the project setting, and click run (or press F5).

## Configure CMake Settings for Linux
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
      "remoteBuildRoot": "/var/tmp/build/${workspaceHash}/build/${name}",
      "remoteCopySources": true,
      "remoteCopySourcesOutputVerbosity": "Normal",
      "remoteCopySourcesConcurrentCopies": "10",
      "cmakeCommandArgs": "",
      "buildCommandArgs": "",
      "ctestCommandArgs": "",
      "inheritEnvironments": [ "linux-x64" ]
}
```
The `name` value can be whatever you like. The `remoteMachineName` value specifies which remote system to target, in case you have more than one. IntelliSense is enabled for this field to help you select the right system. The field `remoteCMakeListsRoot` specifies where your project sources will be copied to on the remote system. The field `remoteBuildRoot` is where the build output will be generated on your remote system. That output is also copied locally to the location specified by `buildRoot`.

## Building a supported CMake release from source
The minimum version of CMake required on your Linux machine is 3.8, and it must also support server mode. To verify this run this command:

```cmd
cmake --version
```

To verify that server mode is enabled, run:

```cmd
cmake -E capabilities
```

In the output, look for “serverMode”:true. Note that even when you compile CMake from source as described below you should check the capabilities when done. Your Linux system may have limitations that prevent server mode from being enabled.

To get started building from source in the shell for your Linux system make sure your package manager is up to date, and that you have git and cmake available. First, clone the CMake sources from our repo where we use for Visual Studio's CMake support:

```cmd
sudo apt-get update
sudo apt-get install -y git cmake
git clone https://github.com/Microsoft/CMake.git
cd CMake
```

Next, run the following commands:

```cmd
mkdir out
cd out
cmake ../
make
sudo make install
```

The above commands build and install the current release of CMake to /usr/local/bin. Run this command to verify the version is >= 3.8 and that server mode is enabled:

```cmd
/usr/local/bin/cmake –version
cmake -E capabilities
```

## See Also
[Working with Project Properties](../ide/working-with-project-properties.md)  
[CMake Tools for Visual C++](../ide/cmake-tools-for-visual-cpp.md)
