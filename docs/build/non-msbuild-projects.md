---
title: "Open Folder projects in Visual C++"
ms.date: "06/01/2018"
helpviewer_keywords: ["Open Folder Projects in Visual C++"]
ms.assetid: abd1985e-3717-4338-9e80-869db5435175
---
# Open Folder projects in Visual C++

In Visual Studio 2017 and later, the "Open Folder" feature enables you to open a folder of source files and immediately start coding with support for IntelliSense, browsing, refactoring, debugging, and so on. No .sln or .vcxproj files are loaded; if needed, you can specify custom tasks as well as build and launch parameters through simple .json files.
Powered by Open Folder, Visual C++ can now support not only loose collections of files, but also virtually any build system, including CMake, Ninja, QMake (for Qt projects), gyp, SCons, Gradle, Buck, make and more.

To use Open Folder, from the main menu select *File | Open | Folder* or press *Ctrl + Shift + Alt + O*.
Solution Explorer immediately displays all the files in the folder. You can click on any file to begin editing it. In the background, Visual Studio starts indexing the files to enable IntelliSense, navigation, and refactoring features. As you edit, create, move, or delete files, Visual Studio tracks the changes automatically and continuously updates its IntelliSense index.

## CMake projects

CMake is integrated in the Visual Studio IDE as CMake Tools for Visual C++, a component of the C++ desktop workload. For more information, see [CMake Tools for Visual C++](cmake-tools-for-visual-cpp.md).

## QMake projects that target the Qt framework

You can use CMake Tools for Visual C++ to target Qt to build Qt projects, or you can use the [Qt Visual Studio Extension](https://download.qt.io/development_releases/vsaddin/) for either Visual Studio 2015 or Visual Studio 2017.

## gyp, Cons, SCons, Buck, etc

You can use any build system in Visual C++ and still enjoy the advantages of the Visual C++ IDE and debugger. When you open the root folder of your project, Visual C++ uses heuristics to index the source files for IntelliSense and browsing. You can provide hints about the structure of your code by editing the CppProperties.json file. In a similar way, you can configure your build program by editing the launch.vs.json file.

## Configuring Open Folder projects

You can customize an Open Folder project through three JSON files:

| | |
|-|-|
|CppProperties.json|Specify custom configuration information for browsing. Create this file, if needed, in your root project folder.|
|launch.vs.json|Specify command line arguments. Accessed via the **Solution Explorer** context menu item **Debug and Launch Settings**.|
|tasks.vs.json|Specify custom build commands and compiler switches. Accessed via the **Solution Explorer** context menu item **Configure Tasks**.|

### Configure IntelliSense with CppProperties.json

IntelliSense and browsing behavior partly depends on the active build configuration, which defines #include paths, compiler switches, and other parameters. By default, Visual Studio provides Debug and Release configurations. For some projects, you may need to create a custom configuration in order for IntelliSense and browsing features to fully comprehend your code. To define a new configuration, create a file called CppProperties.json in the root folder. Here is an example:

```json
{
  "configurations": [
    {
      "name": "Windows x64",
      "includePath": [ "include" ],
      "defines": [ "_DEBUG" ],
      "compilerSwitches": "/std:c++17",
      "intelliSenseMode": "msvc-x64",
      "forcedInclude": [ "pch.h" ],
      "undefines": []
    }
  ]
}
```

A configuration may have any of the following properties:

|||
|-|-|
|`name`|the configuration name that appears in the C++ configuration dropdown|
|`includePath`|the list of folders that should be specified in the include path (maps to /I for most compilers)|
|`defines`|the list of macros that should be defined (maps to /D for most compilers)|
|`compilerSwitches`|one or more additional switches that can influence IntelliSense behavior|
|`forcedInclude`|header to be automatically included in every compilation unit (maps to /FI for MSVC or -include for clang)|
|`undefines`|the list of macros to be undefined (maps to /U for MSVC)|
|`intelliSenseMode`|the IntelliSense engine to be used. You can specify the architecture specific variants for MSVC, gcc or Clang:<br/><br/>- msvc-x86 (default)<br/>- msvc-x64<br/>- msvc-arm<br/>- windows-clang-x86<br/>- windows-clang-x64<br/>- windows-clang-arm<br/>- Linux-x64<br/>- Linux-x86<br/>- Linux-arm<br/>- gccarm|

#### Environment variables

CppProperties.json supports system environment variable expansion for include paths and other property values. The syntax is `${env.FOODIR}` to expand an environment variable `%FOODIR%`. The following system-defined variables are also supported:

|Variable Name|Description|
|-----------|-----------------|
|vsdev|The default Visual Studio environment|
|msvc_x86|Compile for x86 using x86 tools|
|msvc_arm|Compile for ARM using x86 tools|
|msvc_arm64|Compile for ARM64 using x86 tools|
|msvc_x86_x64|Compile for AMD64 using x86 tools|
|msvc_x64_x64|Compile for AMD64 using 64-bit tools|
|msvc_arm_x64|Compile for ARM using 64-bit tools|
|msvc_arm64_x64|Compile for ARM64 using 64-bit tools|

When the Linux workload is installed, the following environments are available for remotely targeting Linux and WSL:

|Variable Name|Description|
|-----------|-----------------|
|linux_x86|Target x86 Linux remotely|
|linux_x64|Target x64 Linux remotely|
|linux_arm|Target ARM Linux remotely|

You can define custom environment variables in CppProperties.json either globally or per-configuration. The following example shows how default and custom environment variables can be declared and used. The global **environments** property declares a variable named **INCLUDE** that can be used by any configuration:

```json
{
  // The "environments" property is an array of key value pairs of the form
  // { "EnvVar1": "Value1", "EnvVar2": "Value2" }
  "environments": [
    {
      "INCLUDE": "${workspaceRoot}\\src\\includes"
    }
  ],

  "configurations": [
    {
      "inheritEnvironments": [
        // Inherit the MSVC 32-bit environment and toolchain.
        "msvc_x86"
      ],
      "name": "x86",
      "includePath": [
        // Use the include path defined above.
        "${env.INCLUDE}"
      ],
      "defines": [ "WIN32", "_DEBUG", "UNICODE", "_UNICODE" ],
      "intelliSenseMode": "msvc-x86"
    },
    {
      "inheritEnvironments": [
        // Inherit the MSVC 64-bit environment and toolchain.
        "msvc_x64"
      ],
      "name": "x64",
      "includePath": [
        // Use the include path defined above.
        "${env.INCLUDE}"
      ],
      "defines": [ "WIN32", "_DEBUG", "UNICODE", "_UNICODE" ],
      "intelliSenseMode": "msvc-x64"
    }
  ]
}
```

You can also define an **environments** property inside a configuration, so that it applies only to that configuration, and overrides any global variables of the same name. In the following example, the x64 configuration defines a local **INCLUDE** variable that overrides the global value:

```json
{
  "environments": [
    {
      "INCLUDE": "${workspaceRoot}\\src\\includes"
    }
  ],

  "configurations": [
    {
      "inheritEnvironments": [
        "msvc_x86"
      ],
      "name": "x86",
      "includePath": [
        // Use the include path defined in the global environments property.
        "${env.INCLUDE}"
      ],
      "defines": [ "WIN32", "_DEBUG", "UNICODE", "_UNICODE" ],
      "intelliSenseMode": "msvc-x86"
    },
    {
      "environments": [
        {
          // Append 64-bit specific include path to env.INCLUDE.
          "INCLUDE": "${env.INCLUDE};${workspaceRoot}\\src\\includes64"
        }
      ],

      "inheritEnvironments": [
        "msvc_x64"
      ],
      "name": "x64",
      "includePath": [
        // Use the include path defined in the local environments property.
        "${env.INCLUDE}"
      ],
      "defines": [ "WIN32", "_DEBUG", "UNICODE", "_UNICODE" ],
      "intelliSenseMode": "msvc-x64"
    }
  ]
}
```

All custom and default environment variables are also available in tasks.vs.json and launch.vs.json.

#### Macros

You have access to the following built-in macros inside CppProperties.json:

|||
|-|-|
|`${workspaceRoot}`| the full path to the workspace folder|
|`${projectRoot}`| the full path to the folder where CppProperties.json is placed|
|`${vsInstallDir}`| the full path to the folder where the running instance of VS 2017 is installed|

For example, if your project has an include folder and also includes windows.h and other common headers from the Windows SDK, you may want to update your CppProperties.json configuration file with these includes:

```json
{
  "configurations": [
    {
      "name": "Windows",
      "includePath": [
        // local include folder
        "${workspaceRoot}\\include",
        // Windows SDK and CRT headers
        "${env.WindowsSdkDir}include\\${env.WindowsSDKVersion}\\ucrt",
        "${env.NETFXSDKDir}\\include\\um",
        "${env.WindowsSdkDir}include\\${env.WindowsSDKVersion}\\um",
        "${env.WindowsSdkDir}include\\${env.WindowsSDKVersion}\\shared",
        "${env.VCToolsInstallDir}include"
      ]
    }
  ]
}
```

> [!Note]
> `%WindowsSdkDir%` and `%VCToolsInstallDir%` are not set as global environment variables so make sure you start devenv.exe from a "Developer Command Prompt for VS 2017" that defines these variables.

To troubleshoot IntelliSense errors caused by missing include paths, open the **Error List** and filter its output to "IntelliSense only" and error code E1696 "cannot open source file ...".

You can create any number of configurations in CppProperties.json. Each will appear in the configuration dropdown:

```json
{
  "configurations": [
    {
      "name": "Windows",
      ...
    },
    {
      "name": "with EXTERNAL_CODECS",
      ...
    }
  ]
}
```

### Define tasks with tasks.vs.json

You can automate build scripts or any other external operations on the files you have in your current workspace by running them as tasks directly in the IDE. You can configure a new task by right-clicking on a file or folder and selecting **Configure Tasks**.

![Open Folder Configure Tasks](media/open-folder-config-tasks.png)

This creates (or opens) the `tasks.vs.json` file in the .vs folder which Visual Studio creates in your root project folder. You can define any arbitrary task in this file and then invoke it from the **Solution Explorer** context menu. The following example shows a tasks.vs.json file that defines a single task. `taskName` defines the name that appears in the context menu. `appliesTo` defines which files the command can be performed on. The `command` property refers to the COMSPEC environment variable, which identifies the path for the console (cmd.exe on Windows). You can also reference environment variables that are declared in CppProperties.json or CMakeSettings.json. The `args` property specifies the command line to be invoked. The `${file}` macro retrieves the selected file in **Solution Explorer**. The following example will display the filename of the currently selected .cpp file.

```json
{
  "version": "0.2.1",
  "tasks": [
    {
      "taskName": "Echo filename",
      "appliesTo": "*.cpp",
      "type": "command",
      "command": "${env.COMSPEC}",
      "args": ["echo ${file}"]
    }
  ]
}
```

After saving tasks.vs.json, you can right-click any .cpp file in the folder, choose **Echo filename** from the context menu, and see the file name displayed in the Output window.

#### appliesTo

You can create tasks for any file or folder by specifying its name in the `appliesTo` field, for example `"appliesTo" : "hello.cpp"`. The following file masks can be used as values:

|||
|-|-|
|`"*"`| task is available to all files and folders in the workspace|
|`"*/"`| task is available to all folders in the workspace|
|`"*.cpp"`| task is available to all files with the extension .cpp in the workspace|
|`"/*.cpp"`| task is available to all files with the extension .cpp in the root of the workspace|
|`"src/*/"`| task is available to all subfolders of the "src" folder|
|`"makefile"`| task is available to all makefile files in the workspace|
|`"/makefile"`| task is available only to the makefile in the root of the workspace|

#### output

Use the `output` property to specify the executable that will launch when you press **F5**. For example:

```json
      "output": "${workspaceRoot}\\bin\\hellomake.exe"
```

#### Macros for tasks.vs.json

|||
|-|-|
|`${env.<VARIABLE>}`| specifies any environment variable (for example,  ${env.PATH}, ${env.COMSPEC} and so on) that is set for the developer command prompt. For more information, see [Developer Command Prompt for Visual Studio](/dotnet/framework/tools/developer-command-prompt-for-vs).|
|`${workspaceRoot}`| the full path to the workspace folder (for example,  "C:\sources\hello")|
|`${file}`| the full path of the file or folder selected to run this task against (for example,  "C:\sources\hello\src\hello.cpp")|
|`${relativeFile}`| the relative path to the file or folder (for example,   "src\hello.cpp")|
|`${fileBasename}`| the name of the file without path or extension (for example,  "hello")|
|`${fileDirname}`| the full path to the file, excluding the filename (for example,  "C:\sources\hello\src")|
|`${fileExtname}`| the extension of the selected file (for example,  ".cpp")|

#### Custom macros

To define a custom macro in tasks.vs.json, add a name:value pair prior to the task blocks. The following example defines a macro named `outDir` which is consumed in the `args` property:

```json
{
"version": "0.2.1",
  "outDir": "${workspaceRoot}\\bin",
  "tasks": [
    {
      "taskName": "List outputs",
      "*",
      "type": "command",
      "command": "${env.COMSPEC}",
      "args": [
        "dir ${outDir}"
      ]
    }
  ]
```

### Configure debugging parameters with launch.vs.json

To customize your program’s command line arguments, right-click on the executable in **Solution Explorer** and select **Debug and Launch Settings**. This will open an existing `launch.vs.json` file, or if none exists, it will create a new file prepopulated with the information about the program you have selected.

To specify additional arguments, just add them in the `args` JSON array as shown in the following example:

```json
{
  "version": "0.2.1",
  "defaults": {},
  "configurations": [
    {
      "type": "default",
      "project": "CPP\\7zip\\Bundles\\Alone\\O\\7za.exe",
      "name": "7za.exe list content of helloworld.zip",
      "args": [ "l", "d:\\sources\\helloworld.zip" ]
    }
  ]
}
```

When you save this file, the new configuration appears in the Debug Target dropdown and you can select it to start the debugger. You can create as many debug configurations as you like, for any number of executables. If you press **F5** now, the debugger will launch and hit any breakpoint you may have already set. All the familiar debugger windows and their functionality are now available.

## See Also

[IDE and Tools for Visual C++ Development](ide-and-tools-for-visual-cpp-development.md)
