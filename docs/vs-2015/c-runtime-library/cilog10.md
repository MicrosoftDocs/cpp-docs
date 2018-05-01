---
title: "_CIlog10 | Microsoft Docs"
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
  - "_CIlog10"
api_location: 
  - "msvcr100.dll"
  - "msvcr120.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr110_clr0400.dll"
  - "msvcrt.dll"
  - "msvcr110.dll"
api_type: 
  - "DLLExport"
topic_type: 
  - "apiref"
f1_keywords: 
  - "CIlog10"
  - "_CIlog10"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_CIlog10 intrinsic"
  - "CIlog10 intrinsic"
ms.assetid: 05d7fcaa-3cff-4cc5-8d44-015e7cacba24
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _CIlog10
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [_CIlog10](https://docs.microsoft.com/cpp/c-runtime-library/cilog10).  
  
Performs a `log10` operation on the top value in the stack.  
  
## Syntax  
  
```  
void __cdecl _CIlog10();  
```  
  
## Remarks  
 This version of the `log10` function has a specialized calling convention that the compiler understands. The function speeds up the execution because it prevents copies from being generated and helps with register allocation.  
  
 The resulting value is pushed onto the top of the stack.  
  
## Requirements  
 **Platform:** x86  
  
## See Also  
 [Alphabetical Function Reference](../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [log, logf, log10, log10f](../c-runtime-library/reference/log-logf-log10-log10f.md)





