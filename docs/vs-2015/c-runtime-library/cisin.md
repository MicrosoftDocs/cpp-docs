---
title: "_CIsin | Microsoft Docs"
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
  - "_CIsin"
api_location: 
  - "msvcr80.dll"
  - "msvcr100.dll"
  - "msvcrt.dll"
  - "msvcr110.dll"
  - "msvcr120.dll"
  - "msvcr90.dll"
  - "msvcr110_clr0400.dll"
api_type: 
  - "DLLExport"
topic_type: 
  - "apiref"
f1_keywords: 
  - "CIsin"
  - "_CIsin"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_CIsin intrinsic"
  - "CIsin intrinsic"
ms.assetid: f215f39a-2341-4f1c-ba8e-cb522451ceb2
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _CIsin
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [_CIsin](https://docs.microsoft.com/cpp/c-runtime-library/cisin).  
  
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





