---
title: "Include Files for Multithreading"
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
ms.assetid: 98d764f9-71f4-4da5-8f3a-8d2d26e96799
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
# Include Files for Multithreading
Standard include files declare C run-time library functions as they are implemented in the libraries. If you use the [Full Optimization](../VS_visualcpp/-Ox--Full-Optimization-.md) (/Ox) or [fastcall Calling Convention](../VS_visualcpp/-Gd---Gr---Gv---Gz--Calling-Convention-.md) (/Gr) option, the compiler assumes that all functions should be called using the register calling convention. The run-time library functions were compiled using the C calling convention, and the declarations in the standard include files tell the compiler to generate correct external references to these functions.  
  
## See Also  
 [Multithreading with C and Win32](../VS_visualcpp/Multithreading-with-C-and-Win32.md)