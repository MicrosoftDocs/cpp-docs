---
title: "_CIexp"
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
  - _CIexp
apilocation: 
  - msvcr120.dll
  - msvcr80.dll
  - msvcr110.dll
  - msvcr100.dll
  - msvcrt.dll
  - msvcr110_clr0400.dll
  - msvcr90.dll
apitype: DLLExport
ms.assetid: f8a3e3b7-fa57-41a3-9983-6c81914cbb55
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
# _CIexp
Calculates the exponential of the top value on the stack.  
  
## Syntax  
  
```  
void __cdecl _CIexp();  
```  
  
## Remarks  
 This version of the `exp` function has a specialized calling convention that the compiler understands. It speeds up the execution because it prevents copies from being generated and helps with register allocation.  
  
 The resulting value is pushed onto the top of the stack.  
  
## Requirements  
 **Platform:** x86  
  
## See Also  
 [Alphabetical Function Reference](../VS_visualcpp/CRT-Alphabetical-Function-Reference.md)   
 [exp, expf](../VS_visualcpp/exp--expf.md)