---
title: ".ENDPROLOG | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
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