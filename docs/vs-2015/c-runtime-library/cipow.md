---
title: "_CIpow | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
api_name: 
  - "_CIpow"
api_location: 
  - "msvcr100.dll"
  - "msvcr110.dll"
  - "msvcr120.dll"
  - "msvcr80.dll"
  - "msvcr110_clr0400.dll"
  - "msvcrt.dll"
  - "msvcr90.dll"
api_type: 
  - "DLLExport"
topic_type: 
  - "apiref"
f1_keywords: 
  - "CIpow"
  - "_CIpow"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CIpow intrinsic"
  - "_CIpow intrinsic"
ms.assetid: 477aaf0c-ac58-4252-89dd-9f3e35d47536
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _CIpow
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [_CIpow](https://docs.microsoft.com/cpp/c-runtime-library/cipow).  
  
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
 [Alphabetical Function Reference](../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [pow, powf, powl](../c-runtime-library/reference/pow-powf-powl.md)





