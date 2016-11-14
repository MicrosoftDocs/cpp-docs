---
title: "_CIatan2 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_CIatan2"
apilocation: 
  - "msvcr80.dll"
  - "msvcrt.dll"
  - "msvcr120.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr100.dll"
  - "msvcr90.dll"
apitype: "DLLExport"
f1_keywords: 
  - "CIatan2"
  - "_CIatan2"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_CIatan2 intrinsic"
  - "CIatan2 intrinsic"
ms.assetid: 31f8cc78-b79f-4576-b73b-8add18e08680
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# _CIatan2
Calculates the arctangent of *x* / *y* where *x* and *y* are values on the top of the stack.  
  
## Syntax  
  
```  
void __cdecl _CIatan2();  
```  
  
## Remarks  
 This version of the `atan2` function has a specialized calling convention that the compiler understands. It speeds up the execution because it prevents copies from being generated and helps with register allocation.  
  
 The resulting value is pushed onto the top of the stack.  
  
## Requirements  
 **Platform:** x86  
  
## See Also  
 [Alphabetical Function Reference](../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [atan, atanf, atanl, atan2, atan2f, atan2l](../c-runtime-library/reference/atan-atanf-atanl-atan2-atan2f-atan2l.md)