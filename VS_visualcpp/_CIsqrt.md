---
title: "_CIsqrt"
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
apiname: 
  - _CIsqrt
apilocation: 
  - msvcr90.dll
  - msvcr80.dll
  - msvcr110_clr0400.dll
  - msvcr120.dll
  - msvcrt.dll
  - msvcr110.dll
  - msvcr100.dll
apitype: DLLExport
ms.assetid: 663548ea-398c-48ee-8397-a787c6ebb937
caps.latest.revision: 5
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# _CIsqrt
Calculates the square root of the top value in the stack.  
  
## Syntax  
  
```  
void __cdecl _CIsqrt();  
```  
  
## Remarks  
 This version of the `sqrt` function has a specialized calling convention that the compiler understands. It speeds up the execution because it prevents copies from being generated and helps with register allocation.  
  
 The resulting value is pushed onto the top of the stack.  
  
## Requirements  
 **Platform:** x86  
  
## See Also  
 [Alphabetical Function Reference](../VS_visualcpp/CRT-Alphabetical-Function-Reference.md)   
 [sqrt, sqrtf, sqrtl](../VS_visualcpp/sqrt--sqrtf--sqrtl.md)