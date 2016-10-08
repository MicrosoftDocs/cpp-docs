---
title: "Fatal Error C1076"
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
ms.topic: error-reference
ms.assetid: 84ac1180-3e8a-48e8-9f77-7f18a778b964
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
# Fatal Error C1076
compiler limit : internal heap limit reached; use /Zm to specify a higher limit  
  
 This error can be caused by too many symbols, or too many template instantiations.  
  
 To resolve this error:  
  
1.  Use the [/Zm](../VS_visualcpp/-Zm--Specify-Precompiled-Header-Memory-Allocation-Limit-.md) option to set the compiler memory limit to the value specified in the [C3859](../VS_visualcpp/Compiler-Error-C3859.md) error message. For more information that includes how to set this value in Visual Studio, see the Remarks section in [/Zm (Specify Precompiled Header Memory Allocation Limit)](../VS_visualcpp/-Zm--Specify-Precompiled-Header-Memory-Allocation-Limit-.md).  
  
2.  If you are using the 32-bit hosted compilers on a 64-bit operating system, use the 64-bit hosted compilers instead. For more information, see [How to: Enable a 64-Bit Visual C++ Toolset on the Command Line](../VS_visualcpp/How-to--Enable-a-64-Bit-Visual-C---Toolset-on-the-Command-Line.md).  
  
3.  Eliminate unnecessary include files.  
  
4.  Eliminate unnecessary global variables—for example, by allocating memory dynamically instead of declaring a large array.  
  
5.  Eliminate unused declarations.  
  
6.  Split large functions into smaller functions.  
  
7.  Split large classes into smaller classes.  
  
8.  Split the current file into smaller files.  
  
 If C1076 occurs immediately after the build starts, the value specified for **/Zm** is probably too high for your program. Reduce the **/Zm** value.