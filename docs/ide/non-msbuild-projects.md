---
title: "Non-MSBuild Projects in Visual C++ | Microsoft Docs"
ms.custom: ""
ms.date: "06/14/2017"
ms.reviewer: ""
ms.suite: ""
ms.technology:  
  - "cpp-ide"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Non-MSBuild Projects in Visual C++"
ms.assetid: abd1985e-3717-4338-9e80-869db5435175
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
## Non-MSBuild projects in Visual C++
VS2017 introduces the "Open Folder" feature, which enables you to open a folder of source files and immediately start coding with support for Intellisense, browsing, refactoring, debugging, and so on. No .sln or .vcxproj files are loaded; if needed, you can specify custom tasks as well as build and launch parameters through simple .json files. 
Powered by Open Folder, Visual C++ can now support not only loose collections of files, but also virtually any build system, including CMake, Ninja, QMake (for Qt projects), gyp, SCons, Gradle, Buck, make and more. 

## Open Folder in Visual C++
To use Open Folder, from the main menu select *File | Open | Folder* or press *Ctrl + Shift + Alt + O*. 
Solution Explorer immediately displays all the files in the folder. You can click on any file to begin editing it. In the background, Visual Studio starts indexing the files to enable Intellisense, navigation and refactoring features. As you edit, create, move or delete files, Visual Studio tracks the changes automatically and continuously updates its Intellisense index. 

## CMake projects
CMake is a cross-platform open-source tool for defining build processes that run across multiple platforms by abstracting away native build environments and compilers. CMake interprets a CMakeLists.txt script the user authors and generates a build plan in a build environment of choice (e.g. Visual studio projects, make scripts, Xcode projects, etc.).
CMake is integrated in the Visual studio IDE as CMake Tools for Visual C++, a component of the C++ desktop workload. For more information, see [CMake Tools for Visual C++](cmake-support-in-visual-cpp.md).
 
## QMake projects that target the Qt framework
	can use CMake for Qt
	or use Qt extension to import .pro file which converts to vcxproj. (not round tripped)
## gyp, Cons, SCons, Cons, 
	--configure with json files: cppProperties.json vs.launch.json, 
## Linux server, IoT, 
## Configuring Open Folder build parameters
