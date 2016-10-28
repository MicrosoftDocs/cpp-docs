---
title: "_CIlog"
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
  - "_CIlog"
apilocation: 
  - "msvcr90.dll"
  - "msvcr120.dll"
  - "msvcr80.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr100.dll"
  - "msvcrt.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_CIlog"
  - "CIlog"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_CIlog intrinsic"
  - "CIlog intrinsic"
ms.assetid: 23503854-ddaa-4fe0-a4a3-7fbb3a43bdec
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
# _CIlog
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
 [Alphabetical Function Reference](../crt/crt-alphabetical-function-reference.md)   
 [log, logf, log10, log10f](../crt/log--logf--log10--log10f.md)