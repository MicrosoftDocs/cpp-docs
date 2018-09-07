---
title: "_CIsqrt | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "conceptual"
apiname: ["_CIsqrt"]
apilocation: ["msvcr90.dll", "msvcr80.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcrt.dll", "msvcr110.dll", "msvcr100.dll"]
apitype: "DLLExport"
f1_keywords: ["_CIsqrt", "CIsqrt"]
dev_langs: ["C++"]
helpviewer_keywords: ["CIsqrt intrinsic", "_CIsqrt intrinsic"]
ms.assetid: 663548ea-398c-48ee-8397-a787c6ebb937
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# _CIsqrt
Calculates the square root of the top value in the stack.  
  
## Syntax  
  
```  
void __cdecl _CIsqrt();  
```  
  
## Remarks  
 This version of the `sqrt` function has a specialized calling convention that the compiler understands. It speeds up the execution because it prevents copies from being generated and helps with register allocation.  
  
 The resulting value is pushed onto the top of the stack.  
  
## Requirements  
 **Platform:** x86  
  
## See Also  
 [Alphabetical Function Reference](../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [sqrt, sqrtf, sqrtl](../c-runtime-library/reference/sqrt-sqrtf-sqrtl.md)