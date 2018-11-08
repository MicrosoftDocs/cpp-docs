---
title: "Configure CMake debugging sessions in Visual Studio"
ms.date: "11/08/2018"
helpviewer_keywords: ["CMake debugging"]
---
# Configure CMake debugging sessions

All executable CMake targets are shown in the **Startup Item** dropdown in the **General** toolbar. To start a debugging session, just select one and launch the debugger.

![CMake startup item dropdown](media/cmake-startup-item-dropdown.png "CMake startup item dropdown")

You can also start a debug session from the CMake menus.

To customize the debugger settings for any executable CMake target in your project, right-click on the specific CMakeLists.txt file and select **Debug and Launch Settings**. When you select a CMake target in the submenu, a file called launch.vs.json is created. This file is pre-populated with information about the CMake target you have selected and allows you to specify additional parameters such as program arguments or debugger type. To reference any key in a CMakeSettings.json file, preface it with `cmake.` in launch.vs.json. The following example shows a simple launch.vs.json file that pulls in the value of the `remoteCopySources` key in the CMakeSettings.json file for the currently selected configuration:

```json
{
  "version": "0.2.1",
  "defaults": {},
  "configurations": [
    {
      "type": "default",
      "project": "CMakeLists.txt",
      "projectTarget": "CMakeHelloWorld.exe (Debug\\CMakeHelloWorld.exe)",
      "name": "CMakeHelloWorld.exe (Debug\\CMakeHelloWorld.exe)",
      "args": ["${cmake.remoteCopySources}"]
    }
  ]
}
```

As soon as you save the launch.vs.json file, an entry is created in the **Startup Item** dropdown with the new name. By editing the launch.vs.json file, you can create as many debug configurations as you like for any number of CMake targets.

**Visual Studio 2017 version 15.4**: Launch.vs.json supports variables that are declared in CMakeSettings.json (see below) and that are applicable to the currently-selected configuration. It also has a key named `currentDir`, which sets the current directory of the launching app:

```json
{
  "type": "default",
  "project": "CMakeLists.txt",
  "projectTarget": "CMakeHelloWorld1.exe (C:\\Users\\satyan\\CMakeBuilds\\Test\\Debug\\CMakeHelloWorld1.exe)",
  "name": "CMakeHelloWorld1.exe (C:\\Users\\satyan\\CMakeBuilds\\Test\\Debug\\CMakeHelloWorld1.exe)",
  "currentDir": "${env.USERPROFILE}\\CMakeBuilds\\${workspaceHash}"
}
```

When you run the app, the value of `currentDir` is something similar to

```cmd
C:\Users\satyan\7f14809a-2626-873e-952e-cdf038211175\
```
