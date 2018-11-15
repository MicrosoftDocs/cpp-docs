---
title: "Tasks.vs.json schema reference (C++)"
ms.date: "11/13/2018"
helpviewer_keywords: ["Open Folder Projects in Visual C++"]
ms.assetid: abd1985e-3717-4338-9e80-869db5435175
---
# Tasks.vs.json schema reference (C++)

A task.vs.json file can be added to a C++ Open Folder project to define any arbitrary task and then invoke it from the **Solution Explorer** context menu. The following example shows a tasks.vs.json file that defines a single task. `taskName` defines the name that appears in the context menu. `appliesTo` defines which files the command can be performed on. The `command` property refers to the COMSPEC environment variable, which identifies the path for the console (cmd.exe on Windows). You can also reference environment variables that are declared in CppProperties.json or CMakeSettings.json. The `args` property specifies the command line to be invoked. The `${file}` macro retrieves the selected file in **Solution Explorer**. The following example opens a console window and displays the filename of the currently selected .cpp file.

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
## appliesTo property

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

## output property

Use the `output` property to specify the executable that will launch when you press **F5**. For example:

```json
      "output": "${workspaceRoot}\\bin\\hellomake.exe"
```

## Macros for tasks.vs.json

|||
|-|-|
|`${env.<VARIABLE>}`| expands to any environment variable (for example,  ${env.PATH} or ${env.COMSPEC}) that is set for the developer command prompt. For more information, see [Developer Command Prompt for Visual Studio](/dotnet/framework/tools/developer-command-prompt-for-vs).|
|`${workspaceRoot}`| the full path to the workspace folder (for example, "C:\sources\hello")|
|`${file}`| the full path of the file or folder selected to run this task against (for example,  "C:\sources\hello\src\hello.cpp")|
|`${relativeFile}`| the relative path to the file or folder (for example, "src\hello.cpp")|
|`${fileBasename}`| the name of the file without path or extension (for example, "hello")|
|`${fileDirname}`| the full path to the file, excluding the filename (for example, "C:\sources\hello\src")|
|`${fileExtname}`| the extension of the selected file (for example, ".cpp")|

## Custom macros

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
