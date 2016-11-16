---
title: "Raw Pseudo Operations | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 4def1a0e-ec28-4736-91fb-fac95fba1f36
caps.latest.revision: 4
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
# Raw Pseudo Operations
This topic lists the pseudo operations.  
  
## Remarks  
  
|Pseudo operation|Description|  
|----------------------|-----------------|  
|PROC FRAME [:ehandler]|Causes MASM to generate a function table entry in .pdata and unwind information in .xdata for a function's structured exception handling unwind behavior.  If ehandler is present, this proc is entered in the .xdata as the language specific handler.<br /><br /> When the FRAME attribute is used, it must be followed by an .ENDPROLOG directive.  If the function is a leaf function (as defined in [Function Types](../build/function-types.md)) the FRAME attribute is unnecessary, as are the remainder of these pseudo-operations.|  
|.PUSHREG reg|Generates a UWOP_PUSH_NONVOL unwind code entry for the specified register number using the current offset in the prologue.<br /><br /> This should only be used with nonvolatile integer registers.  For pushes of volatile registers, use an .ALLOCSTACK 8, instead|  
|.SETFRAME reg, offset|Fills in the frame register field and offset in the unwind information using the specified register and offset. The offset must be a multiple of 16 and less than or equal to 240. This directive also generates a UWOP_SET_FPREG unwind code entry for the specified register using the current prologue offset.|  
|.ALLOCSTACK size|Generates a UWOP_ALLOC_SMALL or a UWOP_ALLOC_LARGE with the specified size for the current offset in the prologue.<br /><br /> The size operand must be a multiple of 8.|  
|.SAVEREG reg, offset|Generates either a UWOP_SAVE_NONVOL or a UWOP_SAVE_NONVOL_FAR unwind code entry for the specified register and offset using the current prologue offset. MASM will choose the most efficient encoding.<br /><br /> Offset must be positive, and a multiple of 8.  Offset is relative to the base of the procedure’s frame, which is generally in RSP, or, if using a frame pointer, the unscaled frame pointer.|  
|.SAVEXMM128 reg, offset|Generates either a UWOP_SAVE_XMM128 or a UWOP_SAVE_XMM128_FAR unwind code entry for the specified XMM register and offset using the current prologue offset. MASM will choose the most efficient encoding.<br /><br /> Offset must be positive, and a multiple of 16.  Offset is relative to the base of the procedure’s frame, which is generally in RSP, or, if using a frame pointer, the unscaled frame pointer.|  
|.PUSHFRAME [code]|Generates a UWOP_PUSH_MACHFRAME unwind code entry. If the optional code is specified, the unwind code entry is given a modifier of 1. Otherwise the modifier is 0.|  
|.ENDPROLOG|Signals the end of the prologue declarations.  Must occur in the first 255 bytes of the function.|  
  
 Here is a sample function prolog with proper usage of most of the opcodes:  
  
```  
sample PROC FRAME     
   db      048h; emit a REX prefix, to enable hot-patching  
push rbp  
.pushreg rbp  
sub rsp, 040h  
.allocstack 040h     
lea rbp, [rsp+020h]  
.setframe rbp, 020h  
movdqa [rbp], xmm7  
.savexmm128 xmm7, 020h;the offset is from the base of the frame  
;not the scaled offset of the frame  
mov [rbp+018h], rsi  
.savereg rsi, 038h  
mov [rsp+010h], rdi  
.savereg rdi, 010h; you can still use RSP as the base of the frame  
; or any other register you choose  
.endprolog  
  
; you can modify the stack pointer outside of the prologue (similar to alloca)  
; because we have a frame pointer.  
; if we didn’t have a frame pointer, this would be illegal  
; if we didn’t make this modification,  
; there would be no need for a frame pointer  
  
sub rsp, 060h  
  
; we can unwind from the following AV because of the frame pointer  
  
mov rax, 0  
mov rax, [rax] ; AV!  
  
; restore the registers that weren’t saved with a push  
; this isn’t part of the official epilog, as described in section 2.5  
  
movdqa xmm7, [rbp]  
mov rsi, [rbp+018h]  
mov rdi, [rbp-010h]  
  
; Here’s the official epilog  
  
lea rsp, [rbp-020h]  
pop rbp  
ret  
sample ENDP  
```  
  
## See Also  
 [Unwind Helpers for MASM](../build/unwind-helpers-for-masm.md)