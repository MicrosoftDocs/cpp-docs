---
title: "Release Builds | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
dev_langs: ["C++"]
helpviewer_keywords: ["debugging [C++], release builds", "release builds", "debug builds, converting to release build"]
ms.assetid: fa9a78fa-f4b5-4722-baf4-aec655c4ff0f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Release Builds
A release build uses optimizations. When you use optimizations to create a release build, the compiler will not produce symbolic debugging information. The absence of symbolic debugging information, along with the fact that code is not generated for TRACE and ASSERT calls, means that the size of your executable file is reduced and will therefore be faster.  
  
 This section presents information on why and when you would want to change from a debug build to a release build. It also discusses some of the problems you may encounter when changing from a debug to a release build:  
  
-   [Creating a Release Build](../../build/reference/how-to-create-a-release-build.md)  
  
-   [Common Problems When Creating a Release Build](../../build/reference/common-problems-when-creating-a-release-build.md)  
  
-   [Fixing Release Build Problems](../../build/reference/fixing-release-build-problems.md)  
  
    -   [Examining ASSERT Statements](../../build/reference/using-verify-instead-of-assert.md)  
  
    -   [Using the Debug Build To Check for Memory Overwrite](../../build/reference/using-the-debug-build-to-check-for-memory-overwrite.md)  
  
    -   [Debugging a Release Build](../../build/reference/how-to-debug-a-release-build.md)  
  
    -   [Checking for Memory Overwrites](../../build/reference/checking-for-memory-overwrites.md)  
  
## See Also  
[Building C++ Projects in Visual Studio](../../ide/building-cpp-projects-in-visual-studio.md)<br/>
[C/C++ Building Reference](../../build/reference/c-cpp-building-reference.md)