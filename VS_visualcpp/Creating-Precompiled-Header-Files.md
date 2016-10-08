---
title: "Creating Precompiled Header Files"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: e2cdb404-a517-4189-9771-c869c660cb1b
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Creating Precompiled Header Files
The Microsoft C and C++ compilers provide options for precompiling any C or C++ code, including inline code. Using this performance feature, you can compile a stable body of code, store the compiled state of the code in a file, and, during subsequent compilations, combine the precompiled code with code that is still under development. Each subsequent compilation is faster because the stable code does not need to be recompiled.  
  
 This section covers the following precompiled header issues:  
  
-   [When to Precompile Source Code](../VS_visualcpp/When-to-Precompile-Source-Code.md)  
  
-   [Two Choices for Precompiling Code](../VS_visualcpp/Two-Choices-for-Precompiling-Code.md)  
  
-   [Precompiled Header Consistency Rules](../VS_visualcpp/Precompiled-Header-Consistency-Rules.md)  
  
-   [Using Precompiled Headers in a Project](../VS_visualcpp/Using-Precompiled-Headers-in-a-Project.md)  
  
 For reference information on the compiler options related to precompiled headers, see [/Y (Precompiled Headers)](../VS_visualcpp/-Y--Precompiled-Headers-.md).  
  
## See Also  
 [C/C++ Building Reference](../VS_visualcpp/C-C---Building-Reference.md)   
 [Compiler Options](../VS_visualcpp/Compiler-Options.md)