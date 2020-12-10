---
description: "Learn more about: .MODEL (32-bit MASM)"
title: ".MODEL"
ms.date: "11/05/2019"
f1_keywords: [".MODEL"]
helpviewer_keywords: [".MODEL directive"]
ms.assetid: 057f00df-1515-4c55-852a-d936c8a34b53
---
# .MODEL (32-bit MASM)

Initializes the program memory model. (32-bit MASM only.)

## Syntax

> **.MODEL** *memory-model* ⟦__,__ *language-type*⟧ ⟦__,__ *stack-option*⟧

### Parameters

*memory-model*\
Required parameter that determines the size of code and data pointers.

*language-type*\
Optional parameter that sets the calling and naming conventions for procedures and public symbols.

*stack-option*\
Optional parameter.

*stack-option* is not used if *memory-model* is **FLAT**.

Specifying **NEARSTACK** groups the stack segment into a single physical segment (**DGROUP**) along with data. The stack segment register (**SS**) is assumed to hold the same address as the data segment register (**DS**). **FARSTACK** does not group the stack with **DGROUP**; thus **SS** does not equal **DS**.

## Remarks

**.MODEL** is not used in [MASM for x64 (ml64.exe)](masm-for-x64-ml64-exe.md).

The following table lists the possible values for each parameter when targeting 16-bit and 32-bit platforms:

|Parameter|32-bit values|16-bit values (support for earlier 16-bit development)|
|---------------|--------------------|----------------------------------------------------------------|
|*memory-model*|**FLAT**|**TINY**, **SMALL**, **COMPACT**, **MEDIUM**, **LARGE**, **HUGE**, **FLAT**|
|*language-type*|**C**, **STDCALL**|**C**, **BASIC**, **FORTRAN**, **PASCAL**, **SYSCALL**, **STDCALL**|
|*stack-option*|Not used|**NEARSTACK**, **FARSTACK**|

## Code

For MASM-related samples, download the Compiler samples from [Visual C++ Samples and Related Documentation for Visual Studio 2010](https://go.microsoft.com/fwlink/p/?linkid=178749).

The following example demonstrates the use of the `.MODEL` directive.

## Example

```asm
; file simple.asm
; For x86 (32-bit), assemble with debug information:
;   ml -c -Zi simple.asm
; For x64 (64-bit), assemble with debug information:
;   ml64 -c -DX64 -Zi simple.asm
;
; In this sample, the 'X64' define excludes source not used
;  when targeting the x64 architecture

ifndef X64
.686p
.XMM
.model flat, C
endif

.data
; user data

.code
; user code

fxn PROC public
  xor eax, eax ; zero function return value
  ret
fxn ENDP

end
```

## See also

[Directives Reference](directives-reference.md)\
[MASM BNF Grammar](masm-bnf-grammar.md)
