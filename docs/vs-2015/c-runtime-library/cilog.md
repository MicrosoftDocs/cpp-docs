---
title: "_CIlog | Microsoft Docs"
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
  - "_CIlog"
api_location: 
  - "msvcr90.dll"
  - "msvcr120.dll"
  - "msvcr80.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr100.dll"
  - "msvcrt.dll"
api_type: 
  - "DLLExport"
topic_type: 
  - "apiref"
f1_keywords: 
  - "_CIlog"
  - "CIlog"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_CIlog intrinsic"
  - "CIlog intrinsic"
ms.assetid: 23503854-ddaa-4fe0-a4a3-7fbb3a43bdec
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _CIlog
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [_CIlog](https://docs.microsoft.com/cpp/c-runtime-library/cilog).  
  
Calculates the natural logarithm of the top value in the stack.  
  
## Syntax  
  
```  
void __cdecl _CIlog();  
```  
  
## Remarks  
 This version of the `log` function has a specialized calling convention that the compiler understands. It speeds up the execution because it prevents copies from being generated and helps with register allocation.  
  
 The resulting value is pushed onto the top of the stack.  
  
## Requirements  
 **Platform:** x86  
  
## See Also  
 [Alphabetical Function Reference](../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [log, logf, log10, log10f](../c-runtime-library/reference/log-logf-log10-log10f.md)





