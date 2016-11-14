---
title: ".SETFRAME | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - ".SETFRAME"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - ".SETFRAME directive"
ms.assetid: eaa9b5ed-4daa-4f1e-bdb6-100758007ab3
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
# .SETFRAME
Fills in the frame register field and offset in the unwind information using the specified register (`reg`) and offset (`offset`). The offset must be a multiple of 16 and less than or equal to 240. This directive also generates a `UWOP_SET_FPREG` unwind code entry for the specified register using the current prologue offset.  
  
## Syntax  
  
```  
.SETFRAME reg, offset  
```  
  
## Remarks  
 .SETFRAME allows ml64.exe users to specify how a frame function unwinds, and is only allowed within the prologue, which extends from the [PROC](../../assembler/masm/proc.md) FRAME declaration to the [.ENDPROLOG](../../assembler/masm/dot-endprolog.md) directive. These directives do not generate code; they only generate `.xdata` and `.pdata`. .SETFRAME should be preceded by instructions that actually implement the actions to be unwound. It is a good practice to wrap both the unwind directives and the code they are meant to unwind in a macro to ensure agreement.  
  
 For more information, see [MASM for x64 (ml64.exe)](../../assembler/masm/masm-for-x64-ml64-exe.md).  
  
## Sample  
  
### Description  
 The following sample shows how to use a frame pointer:  
  
### Code  
  
```  
; ml64 frmex2.asm /link /entry:frmex2 /SUBSYSTEM:CONSOLE  
_text SEGMENT  
frmex2 PROC FRAME  
   push rbp  
.pushreg rbp  
   sub rsp, 010h  
.allocstack 010h  
   mov rbp, rsp  
.setframe rbp, 0  
.endprolog  
   ; modify the stack pointer outside of the prologue (similar to alloca)  
   sub rsp, 060h  
  
   ; we can unwind from the following AV because of the frame pointer     
   mov rax, 0  
   mov rax, [rax] ; AV!  
  
   add rsp, 060h  
   add rsp, 010h  
   pop rbp  
   ret  
frmex2 ENDP  
_text ENDS  
END  
```  
  
## See Also  
 [Directives Reference](../../assembler/masm/directives-reference.md)