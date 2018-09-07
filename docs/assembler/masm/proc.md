---
title: "PROC | Microsoft Docs"
ms.custom: ""
ms.date: "08/30/2018"
ms.technology: ["cpp-masm"]
ms.topic: "reference"
f1_keywords: ["PROC"]
dev_langs: ["C++"]
helpviewer_keywords: ["PROC directive"]
ms.assetid: ee5bb6b6-fa15-4d73-b0cf-e650178539a9
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# PROC

Marks start and end of a procedure block called *label*. The statements in the block can be called with the **CALL** instruction or [INVOKE](../../assembler/masm/invoke.md) directive.

## Syntax

> *label* PROC [[*distance*]] [[*langtype*]] [[*visibility*]] [[\<*prologuearg*>]] [[USES *reglist*]] [[, *parameter* [[:*tag*]]]] ...<br/>
> [[FRAME [[:*ehandler-address*]] ]]<br/>
> *statements*<br/>
> *label* ENDP

## Remarks

[[FRAME [[:*ehandler-address*]] ]] is only valid with ml64.exe, and causes MASM to generate a function table entry in .pdata and unwind information in .xdata for a function's structured exception handling unwind behavior.

When the **FRAME** attribute is used, it must be followed by an [.ENDPROLOG](../../assembler/masm/dot-endprolog.md) directive.

See [MASM for x64 (ml64.exe)](../../assembler/masm/masm-for-x64-ml64-exe.md) for more information on using ml64.exe.

## Example

```asm
; ml64 ex1.asm /link /entry:Example1 /SUBSYSTEM:CONSOLE
_text SEGMENT
Example1 PROC FRAME
   push r10
.pushreg r10
   push r15
.pushreg r15
   push rbx
.pushreg rbx
   push rsi
.pushreg rsi
.endprolog
   ; rest of function ...
   ret
Example1 ENDP
_text ENDS
END
```

The above code will emit the following function table and unwind information:

```Output
FileHeader->Machine 34404
Dumping Unwind Information for file ex2.exe

.pdata entry 1 0x00001000 0x00001023

  Unwind data: 0x00002000

    Unwind version: 1
    Unwind Flags: None
    Size of prologue: 0x08
    Count of codes: 3
    Frame register: rbp
    Frame offset: 0x0
    Unwind codes:

      Code offset: 0x08, SET_FPREG, register=rbp, offset=0x00
      Code offset: 0x05, ALLOC_SMALL, size=0x10
      Code offset: 0x01, PUSH_NONVOL, register=rbp
```

## See also

[Directives Reference](../../assembler/masm/directives-reference.md)<br/>