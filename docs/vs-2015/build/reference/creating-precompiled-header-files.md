---
title: "Creating Precompiled Header Files | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "pch"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "precompiled header files, creating"
  - "PCH files, creating"
  - "cl.exe compiler, precompiling code"
  - ".pch files, creating"
ms.assetid: e2cdb404-a517-4189-9771-c869c660cb1b
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Creating Precompiled Header Files
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Creating Precompiled Header Files](https://docs.microsoft.com/cpp/build/reference/creating-precompiled-header-files).  
  
  
The Microsoft C and C++ compilers provide options for precompiling any C or C++ code, including inline code. Using this performance feature, you can compile a stable body of code, store the compiled state of the code in a file, and, during subsequent compilations, combine the precompiled code with code that is still under development. Each subsequent compilation is faster because the stable code does not need to be recompiled.  
  
 This section covers the following precompiled header issues:  
  
-   [When to Precompile Source Code](../../build/reference/when-to-precompile-source-code.md)  
  
-   [Two Choices for Precompiling Code](../../build/reference/two-choices-for-precompiling-code.md)  
  
-   [Precompiled Header Consistency Rules](../../build/reference/precompiled-header-consistency-rules.md)  
  
-   [Using Precompiled Headers in a Project](../../build/reference/using-precompiled-headers-in-a-project.md)  
  
 For reference information on the compiler options related to precompiled headers, see [/Y (Precompiled Headers)](../../build/reference/y-precompiled-headers.md).  
  
## See Also  
 [C/C++ Building Reference](../../build/reference/c-cpp-building-reference.md)   
 [Compiler Options](../../build/reference/compiler-options.md)

