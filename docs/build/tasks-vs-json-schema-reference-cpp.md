---
title: "Tasks.vs.json schema reference (C++)"
ms.date: "02/11/2019"
helpviewer_keywords: ["Open Folder Projects in Visual C++"]
ms.assetid: abd1985e-3717-4338-9e80-869db5435175
---
# Tasks.vs.json (C++)

A `tasks.vs.json` file can be added to an Open Folder project to define any arbitrary task and then invoke it from the **Solution Explorer** context menu. CMake projects typically do not use this file because all the build commands are specified in `CMakeLists.txt`. For build systems other than CMake, this is where you can specify your build commands and invoke build scripts. For general information about using tasks.vs.json, see [Customize build and debug tasks for "Open Folder" development](/visualstudio/ide/customize-build-and-debug-tasks-in-visual-studio).

