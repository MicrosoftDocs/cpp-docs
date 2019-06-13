---
title: "Open Folder support for C++ build systems in Visual Studio"
ms.date: "03/21/2019"
helpviewer_keywords: ["Open Folder Projects in Visual Studio"]
ms.assetid: abd1985e-3717-4338-9e80-869db5435175
---
# Open Folder projects for C++

In Visual Studio 2017 and later, the "Open Folder" feature enables you to open a folder of source files and immediately start coding with support for IntelliSense, browsing, refactoring, debugging, and so on. No .sln or .vcxproj files are loaded; if needed, you can specify custom tasks as well as build and launch parameters through simple .json files. For general information about Open Folder, see [Develop code in Visual Studio without projects or solutions](/visualstudio/ide/develop-code-in-visual-studio-without-projects-or-solutions).

CMake is integrated in the Visual Studio IDE as a component of the C++ desktop workload. For more information, see [CMake projects in Visual Studio](cmake-projects-in-visual-studio.md). For any other build system, you can use the Open Folder feature. Open Folder effectively decouples the code editor, debugger and analyzers from the build system and the compiler toolset. You can use the C++ code editor with its rich IntelliSense features, the code analyzers, and the Visual Studio debugger with virtually any build system, including CMake, Ninja, QMake (for Qt projects), gyp, SCons, Gradle, Buck, make and more. It even works with a single file or a loose collection of files with no build system.

To use Open Folder, from the main menu select **File | Open | Folder** or press **Ctrl + Shift + Alt + O**.
Solution Explorer immediately displays all the files in the folder. You can click on any file to begin editing it. In the background, Visual Studio starts indexing the files to enable IntelliSense, navigation, and refactoring features. As you edit, create, move, or delete files, Visual Studio tracks the changes automatically and continuously updates its IntelliSense index. 

## QMake projects that target the Qt framework

You can use CMake to build Qt projects, or you can use the [Qt Visual Studio Extension](https://download.qt.io/development_releases/vsaddin/) for either Visual Studio 2015 or Visual Studio 2017.

## gyp, Cons, SCons, Buck, etc

You can use any build system in Visual Studio and still enjoy the advantages of the C++ IDE and debugger. When you open the root folder of your project, the C++ code editor uses heuristics to index the source files for IntelliSense and browsing. You can provide hints about the structure of your code by editing the CppProperties.json file. In a similar way, you can configure and invoke your build program by editing the launch.vs.json file.

## Configuring Open Folder projects

You can customize an Open Folder project through three JSON files:

| | |
|-|-|
|CppProperties.json|Specify custom configuration information for browsing. Create this file, if needed, in your root project folder. (Not used in CMake projects.)|
|tasks.vs.json|Specify custom build commands and compiler switches. Accessed via the **Solution Explorer** context menu item **Configure Tasks**.|
|launch.vs.json|Specify command line arguments for the debugger. Accessed via the **Solution Explorer** context menu item **Debug and Launch Settings**.|

### Configure IntelliSense and browsing hints with CppProperties.json

IntelliSense and browsing behavior partly depends on the active build configuration, which defines #include paths, compiler switches, and other parameters. By default, Visual Studio provides Debug and Release configurations. CMake projects use the CMakeSettings.json file and CMakeLists.txt files for this purpose. For other kinds of Open Folder projects, you may need to create a custom configuration in order for IntelliSense and browsing features to fully comprehend your code. To define a new configuration, create a file called CppProperties.json in the root folder. Here is an example:

```json
{
  "configurations": [
    {
      "name": "Windows x64",
      "includePath": [ "include" ],
      "defines": [ "_DEBUG" ],
      "compilerSwitches": "/std:c++17",
      "intelliSenseMode": "windows-msvc-x64",
      "forcedInclude": [ "pch.h" ],
      "undefines": []
    }
  ]
}
```
For more information, see [CppProperties schema reference](cppproperties-schema-reference.md).

### Define build tasks with tasks.vs.json

You can automate build scripts or any other external operations on the files you have in your current workspace by running them as tasks directly in the IDE. You can configure a new task by right-clicking on a file or folder and selecting **Configure Tasks**.

![Open Folder Configure Tasks](media/open-folder-config-tasks.png)

This creates (or opens) the **tasks.vs.json** file in the .vs folder which Visual Studio creates in your root project folder. You can define any arbitrary task in this file and then invoke it from the **Solution Explorer** context menu. The following example shows a tasks.vs.json file that defines a single task. `taskName` defines the name that appears in the context menu. `appliesTo` defines which files the command can be performed on. The `command` property refers to the COMSPEC environment variable, which identifies the path for the console (cmd.exe on Windows). You can also reference environment variables that are declared in CppProperties.json or CMakeSettings.json. The `args` property specifies the command line to be invoked. The `${file}` macro retrieves the selected file in **Solution Explorer**. The following example will display the filename of the currently selected .cpp file.

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

For more information, see [Tasks.vs.json schema reference](tasks-vs-json-schema-reference-cpp.md).

### Configure debugging parameters with launch.vs.json

To customize your program’s command line arguments, right-click on the executable in **Solution Explorer** and select **Debug and Launch Settings**. This will open an existing **launch.vs.json** file, or if none exists, it will create a new file prepopulated with the information about the program you have selected.

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
