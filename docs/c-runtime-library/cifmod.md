---
title: "_CIfmod | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "conceptual"
apiname: ["_CIfmod"]
apilocation: ["msvcrt.dll", "msvcr110_clr0400.dll", "msvcr100.dll", "msvcr80.dll", "msvcr90.dll", "msvcr120.dll", "msvcr110.dll"]
apitype: "DLLExport"
f1_keywords: ["_CIfmod", "CIfmod"]
dev_langs: ["C++"]
helpviewer_keywords: ["CIfmod intrinsic", "_CIfmod intrinsic"]
ms.assetid: 7c050653-7ec6-4810-b3a7-7a0057ea65ed
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# _CIfmod
Calculates the floating-point remainder of the top two values on the stack.  
  
## Syntax  
  
```  
void __cdecl _CIfmod();  
```  
  
## Remarks  
 This version of the `fmod` function has a specialized calling convention that the compiler understands. It speeds up the execution because it prevents copies from being generated and helps with register allocation.  
  
 The resulting value is pushed onto the top of the stack.  
  
## Requirements  
 **Platform:** x86  
  
## See Also  
 [Alphabetical Function Reference](../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [fmod, fmodf](../c-runtime-library/reference/fmod-fmodf.md)