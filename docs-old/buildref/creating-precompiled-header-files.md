---
title: "Creating Precompiled Header Files"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
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
caps.latest.revision: 8
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Creating Precompiled Header Files
The Microsoft C and C++ compilers provide options for precompiling any C or C++ code, including inline code. Using this performance feature, you can compile a stable body of code, store the compiled state of the code in a file, and, during subsequent compilations, combine the precompiled code with code that is still under development. Each subsequent compilation is faster because the stable code does not need to be recompiled.  
  
 This section covers the following precompiled header issues:  
  
-   [When to Precompile Source Code](../buildref/when-to-precompile-source-code.md)  
  
-   [Two Choices for Precompiling Code](../buildref/two-choices-for-precompiling-code.md)  
  
-   [Precompiled Header Consistency Rules](../buildref/precompiled-header-consistency-rules.md)  
  
-   [Using Precompiled Headers in a Project](../buildref/using-precompiled-headers-in-a-project.md)  
  
 For reference information on the compiler options related to precompiled headers, see [/Y (Precompiled Headers)](../buildref/-y--precompiled-headers-.md).  
  
## See Also  
 [C/C++ Building Reference](../buildref/c-c---building-reference.md)   
 [Compiler Options](../buildref/compiler-options.md)