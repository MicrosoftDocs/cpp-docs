---
title: ".ENDPROLOG | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools", "cpp-masm"]
ms.topic: "reference"
f1_keywords: [".ENDPROLOG"]
dev_langs: ["C++"]
helpviewer_keywords: [".ENDPROLOG directive"]
ms.assetid: 61a2474c-9527-46e6-9f9d-bc4b42c10f35
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# .ENDPROLOG
Signals the end of the prologue declarations.  
  
## Syntax  
  
```  
.ENDPROLOG  
```  
  
## Remarks  
 It is an error to use any of the prologue declarations outside of the region between [PROC](../../assembler/masm/proc.md) FRAME and .ENDPROLOG.  
  
 For more information, see [MASM for x64 (ml64.exe)](../../assembler/masm/masm-for-x64-ml64-exe.md).  
  
## See Also  
 [Directives Reference](../../assembler/masm/directives-reference.md)