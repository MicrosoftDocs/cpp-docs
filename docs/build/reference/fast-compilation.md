---
title: "Fast Compilation | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
dev_langs: ["C++"]
helpviewer_keywords: ["performance, cle.exe compiler", "compilation, performance", "cl.exe compiler, performance", "fast compiling"]
ms.assetid: 5fead136-ba69-40c8-8e25-236f89d5990a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Fast Compilation
To increase the speed of your compiles:  
  
-   Use [minimal rebuild](../../build/reference/gm-enable-minimal-rebuild.md), in which the C++ compiler recompiles a source file only if it is dependent on changes to a class in a header file.  
  
-   [Create Precompiled Header Files](../../build/reference/creating-precompiled-header-files.md) and use the [precompiled header options](../../build/reference/yc-create-precompiled-header-file.md).  
  
## See Also  
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)