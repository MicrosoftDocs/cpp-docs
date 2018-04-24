---
title: ".ENDPROLOG | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - ".ENDPROLOG"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - ".ENDPROLOG directive"
ms.assetid: 61a2474c-9527-46e6-9f9d-bc4b42c10f35
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# .ENDPROLOG
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [.ENDPROLOG](https://docs.microsoft.com/cpp/assembler/masm/dot-endprolog).  
  
  
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

