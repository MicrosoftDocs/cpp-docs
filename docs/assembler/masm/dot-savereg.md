---
title: ".SAVEREG | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - ".SAVEREG"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - ".SAVEREG directive"
ms.assetid: 1dbc2ef6-a197-40e7-9e55-fddcae8cef29
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
# .SAVEREG
Generates either a `UWOP_SAVE_NONVOL` or a `UWOP_SAVE_NONVOL_FAR` unwind code entry for the specified register (`reg`) and offset (`offset`) using the current prologue offset. MASM will choose the most efficient encoding.  
  
## Syntax  
  
```  
.SAVEREG reg, offset  
```  
  
## Remarks  
 .SAVEREG allows ml64.exe users to specify how a frame function unwinds and is only allowed within the prologue, which extends from the [PROC](../../assembler/masm/proc.md) FRAME declaration to the [.ENDPROLOG](../../assembler/masm/dot-endprolog.md) directive. These directives do not generate code; they only generate `.xdata` and `.pdata`. .SAVEREG should be preceded by instructions that actually implement the actions to be unwound. It is a good practice to wrap both the unwind directives and the code they are meant to unwind in a macro to ensure agreement.  
  
 For more information, see [MASM for x64 (ml64.exe)](../../assembler/masm/masm-for-x64-ml64-exe.md).  
  
## See Also  
 [Directives Reference](../../assembler/masm/directives-reference.md)