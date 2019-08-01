---
title: "Configure CMake debugging sessions in Visual Studio"
ms.date: "03/21/2019"
helpviewer_keywords: ["CMake debugging"]
---
# Configure CMake debugging sessions

All executable CMake targets are shown in the **Startup Item** dropdown in the **General** toolbar. To start a debugging session, just select one and launch the debugger.

![CMake startup item dropdown](media/cmake-startup-item-dropdown.png "CMake startup item dropdown")

You can also start a debug session from the CMake menus.

## Customize debugger settings

To customize the debugger settings for any executable CMake target in your project, right-click on the specific CMakeLists.txt file and select **Debug and Launch Settings**. (Or select a target in **Targets View** in **Solution Explorer**.) When you select a CMake target in the submenu, a file called **launch.vs.json** is created. This file is pre-populated with information about the CMake target you have selected and allows you to specify additional parameters such as program arguments or debugger type. To reference any key in a **CMakeSettings.json** file, preface it with `cmake.` in **launch.vs.json**. The following example shows a simple **launch.vs.json** file that pulls in the value of the `remoteCopySources` key in the **CMakeSettings.json** file for the currently selected configuration:

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

As soon as you save the  **launch.vs.json** file, an entry is created in the **Startup Item** dropdown with the new name. By editing the  **launch.vs.json** file, you can create as many debug configurations as you like for any number of CMake targets.

## Support for CMakeSettings variables

 **Launch.vs.json** supports variables that are declared in **CMakeSettings.json** (see below) and that are applicable to the currently-selected configuration. It also has a key named `currentDir`, which sets the current directory of the launching app for a local project:

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

The key 'cwd' sets the current directory of the launching app for a remote project. The default value is '${debugInfo.defaultWorkingDirectory}' which evaluates to 

```cmd
/var/tmp/src/bfc6f7f4-4f0f-8b35-80d7-9198fa973fb9/Linux-Debug
```

## See also

[CMake Projects in Visual Studio](cmake-projects-in-visual-studio.md)<br/>
[Configure a Linux CMake project](../linux/cmake-linux-project.md)<br/>
[Connect to your remote Linux computer](../linux/connect-to-your-remote-linux-computer.md)<br/>
[Customize CMake build settings](customize-cmake-settings.md)<br/>
[Configure CMake debugging sessions](configure-cmake-debugging-sessions.md)<br/>
[Deploy, run, and debug your Linux project](../linux/deploy-run-and-debug-your-linux-project.md)<br/>
[CMake predefined configuration reference](cmake-predefined-configuration-reference.md)<br/>
