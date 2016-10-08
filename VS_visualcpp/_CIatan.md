---
title: "_CIatan"
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
  - _CIatan
apilocation: 
  - msvcr120.dll
  - msvcr110.dll
  - msvcrt.dll
  - msvcr80.dll
  - msvcr100.dll
  - msvcr90.dll
  - msvcr110_clr0400.dll
apitype: DLLExport
ms.assetid: 3baa0429-fe46-4bab-8b00-868e2186dc8c
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
# _CIatan
Calculates the arctangent of the top value on the stack.  
  
## Syntax  
  
```  
void __cdecl _CIatan();  
```  
  
## Remarks  
 This version of the `atan` function has a specialized calling convention that the compiler understands. It speeds up the execution because it prevents copies from being generated and helps with register allocation.  
  
 The resulting value is pushed onto the top of the stack.  
  
## Requirements  
 **Platform:** x86  
  
## See Also  
 [Alphabetical Function Reference](../VS_visualcpp/CRT-Alphabetical-Function-Reference.md)   
 [atan, atanf, atanl, atan2, atan2f, atan2l](../VS_visualcpp/atan--atanf--atanl--atan2--atan2f--atan2l.md)