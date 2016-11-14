---
title: "_CIsin | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_CIsin"
apilocation: 
  - "msvcr80.dll"
  - "msvcr100.dll"
  - "msvcrt.dll"
  - "msvcr110.dll"
  - "msvcr120.dll"
  - "msvcr90.dll"
  - "msvcr110_clr0400.dll"
apitype: "DLLExport"
f1_keywords: 
  - "CIsin"
  - "_CIsin"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_CIsin intrinsic"
  - "CIsin intrinsic"
ms.assetid: f215f39a-2341-4f1c-ba8e-cb522451ceb2
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
# _CIsin
Calculates the sine of the top value in the stack.  
  
## Syntax  
  
```  
void __cdecl _CIsin();  
```  
  
## Remarks  
 This version of the `sin` function has a specialized calling convention that the compiler understands. It speeds up the execution because it prevents copies from being generated and helps with register allocation.  
  
 The resulting value is pushed onto the top of the stack.  
  
## Requirements  
 **Platform:** x86  
  
## See Also  
 [Alphabetical Function Reference](../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [sin, sinf, sinl, sinh, sinhf, sinhl](../c-runtime-library/reference/sin-sinf-sinl-sinh-sinhf-sinhl.md)