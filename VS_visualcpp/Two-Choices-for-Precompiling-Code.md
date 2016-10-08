---
title: "Two Choices for Precompiling Code"
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
ms.assetid: f50ac76f-e2a2-462d-bda5-0e2ab7cccdeb
caps.latest.revision: 12
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
# Two Choices for Precompiling Code
With Visual C++, you can precompile any C or C++ code; you are not limited to precompiling only header files.  
  
 Precompiling requires planning, but it offers significantly faster compilations if you precompile source code other than simple header files.  
  
 Precompile code when you know that your source files use common sets of header files but don't include them in the same order, or when you want to include source code in your precompilation.  
  
 The precompiled-header options are [/Yc (Create Precompiled Header File)](../VS_visualcpp/-Yc--Create-Precompiled-Header-File-.md) and [/Yu (Use Precompiled Header File)](../VS_visualcpp/-Yu--Use-Precompiled-Header-File-.md). Use **/Yc** to create a precompiled header. When used with the optional `hdrstop` pragma, **/Yc** lets you precompile both header files and source code. Select **/Yu** to use an existing precompiled header in the existing compilation. You can also use **/Fp** with the **/Yc** and **/Yu** options to provide an alternative name for the precompiled header.  
  
 The compiler option reference topics for **/Yu** and **/Yc** discuss how to access this functionality in the development environment.  
  
## More Information  
  
-   [When to Precompile Source Code](../VS_visualcpp/When-to-Precompile-Source-Code.md)  
  
-   [Precompiled Header Consistency Rules](../VS_visualcpp/Precompiled-Header-Consistency-Rules.md)  
  
-   [Using Precompiled Headers in a Project](../VS_visualcpp/Using-Precompiled-Headers-in-a-Project.md)  
  
 For further examples using precompiled headers, see the makefiles used to build the sample programs that ship with the Microsoft Foundation Class Library.  
  
## See Also  
 [Creating Precompiled Header Files](../VS_visualcpp/Creating-Precompiled-Header-Files.md)