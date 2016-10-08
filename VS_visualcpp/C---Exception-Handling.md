---
title: "C++ Exception Handling"
ms.custom: na
ms.date: 10/07/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: language-reference
ms.assetid: 65f80b44-9d0f-4d17-b910-07205a5c5c40
caps.latest.revision: 14
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
# C++ Exception Handling
The C++ language provides built-in support for throwing and catching exceptions. When programming in C++, you should almost always use the built-in C++ exception support as described in this section.  
  
 To enable C++ exception handling in your code, use [/EHsc](../VS_visualcpp/-EH--Exception-Handling-Model-.md).  
  
## In This Section  
 This discussion on C++ exception handling includes:  
  
-   [The try, catch, and throw Statements](../VS_visualcpp/try--throw--and-catch-Statements--C---.md)  
  
-   [How Catch Blocks are Evaluated](../VS_visualcpp/How-Catch-Blocks-are-Evaluated--C---.md)  
  
-   [Exceptions and Stack Unwinding](../VS_visualcpp/Exceptions-and-Stack-Unwinding-in-C--.md)  
  
-   [Exception Specifications](../VS_visualcpp/Exception-Specifications--throw---C---.md)  
  
-   [noexcept](../VS_visualcpp/noexcept--C---.md)  
  
-   [Unhandled C++ Exceptions](../VS_visualcpp/Unhandled-C---Exceptions.md)  
  
-   [Mixing C (Structured) and C++ Exceptions](../VS_visualcpp/Mixing-C--Structured--and-C---Exceptions.md)  
  
## Support for Earlier MFC Exceptions  
 As of version 4.0, MFC began using the C++ exception handling mechanism. Although you are encouraged to use C++ exception handling in new code, MFC version 4.0 and later retains the macros from previous versions of MFC so that old code will not be broken. The macros and the new mechanism can be combined as well. For information on mixing macros and C++ exception handling and on converting old code to use the new mechanism, see the articles [Exceptions: Using MFC Macros and C++ Exceptions](../VS_visualcpp/Exceptions--Using-MFC-Macros-and-C---Exceptions.md) and [Exceptions: Converting from MFC Exception Macros](../VS_visualcpp/Exceptions--Converting-from-MFC-Exception-Macros.md). The older MFC exception macros, if you still use them, evaluate to C++ exception keywords. See [Exceptions: Changes to Exception Macros in Version 3.0](../VS_visualcpp/Exceptions--Changes-to-Exception-Macros-in-Version-3.0.md).  
  
## See Also  
 [Exception Handling](../VS_visualcpp/Exception-Handling-in-Visual-C--.md)