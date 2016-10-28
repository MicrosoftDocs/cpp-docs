---
title: "_CIpow"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
apiname: 
  - "_CIpow"
apilocation: 
  - "msvcr100.dll"
  - "msvcr110.dll"
  - "msvcr120.dll"
  - "msvcr80.dll"
  - "msvcr110_clr0400.dll"
  - "msvcrt.dll"
  - "msvcr90.dll"
apitype: "DLLExport"
f1_keywords: 
  - "CIpow"
  - "_CIpow"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CIpow intrinsic"
  - "_CIpow intrinsic"
ms.assetid: 477aaf0c-ac58-4252-89dd-9f3e35d47536
caps.latest.revision: 5
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
# _CIpow
Calculates *x* raised to the *y* power based on the top values in the stack.  
  
## Syntax  
  
```  
void __cdecl _CIpow();  
```  
  
## Remarks  
 This version of the `pow` function has a specialized calling convention that the compiler understands. It speeds up the execution because it prevents copies from being generated and helps with register allocation.  
  
 The resulting value is pushed onto the top of the stack.  
  
## Requirements  
 **Platform:** x86  
  
## See Also  
 [Alphabetical Function Reference](../crt/crt-alphabetical-function-reference.md)   
 [pow, powf, powl](../crt/pow--powf--powl.md)