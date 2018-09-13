---
title: "ARM Assembler Directives | Microsoft Docs"
ms.custom: ""
ms.date: "08/30/2018"
ms.technology: ["cpp-masm"]
ms.topic: "reference"
dev_langs: ["C++"]
ms.assetid: 9cfa8896-ec10-4e77-855a-3135c40d7d2a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# ARM Assembler Directives

For the most part, the Microsoft ARM assembler uses the ARM assembly language, which is documented in the [ARM Compiler armasm Reference Guide](http://infocenter.arm.com/help/topic/com.arm.doc.dui0802b/index.html). However, the Microsoft implementations of some assembly directives differ from the ARM assembly directives. This article explains the differences.

## Microsoft Implementations of ARM Assembly Directives

`AREA`<br/>
The Microsoft ARM assembler supports these `AREA` attributes: `ALIGN`, `CODE`, `CODEALIGN`, `DATA`, `NOINIT`, `READONLY`, `READWRITE`, `THUMB`, `ARM`.

All except `THUMB` and `ARM` work as documented in the [ARM Compiler armasm Reference Guide](http://infocenter.arm.com/help/topic/com.arm.doc.dui0802b/index.html).

In the Microsoft ARM assembler, `THUMB` indicates that a `CODE` section contains Thumb code, and is the default for `CODE` sections.  `ARM` indicates that the section contains ARM code.

`ATTR`<br/>
Not supported.

`CODE16`<br/>
Not supported because it implies pre-UAL Thumb syntax, which the Microsoft ARM assembler does not allow.  Use the `THUMB` directive instead, along with UAL syntax.

`COMMON`<br/>
Specification of an alignment for the common region is not supported.

`DCDO`<br/>
Not supported.

`DN`, `QN`, `SN`<br/>
Specification of a type or a lane on the register alias is not supported.

`ENTRY`<br/>
Not supported.

`EQU`<br/>
Specification of a type for the defined symbol is not supported.

`EXPORT` and `GLOBAL`<br/>
Specifies exports using this syntax:

> **EXPORT**|**GLOBAL** <em>sym</em>{**[**<em>type</em>**]**}

*sym* is the symbol to be exported.  [*type*], if specified, can be either `[DATA]` to indicate that the symbol points to data or `[FUNC]` to indicate that the symbol points to code. `GLOBAL` is a synonym for `EXPORT`.

`EXPORTAS`<br/>
Not supported.

`FRAME`<br/>
Not supported.

`FUNCTION` and `PROC`<br/>
Although the assembly syntax supports the specification of a custom calling convention on procedures by listing the registers that are caller-save and those that are callee-save, the Microsoft ARM assembler accepts the syntax but ignores the register lists.  The debug information that is produced by the assembler supports only the default calling convention.

`IMPORT` and `EXTERN`<br/>
Specifies imports using this syntax:

> **IMPORT**|**EXTERN** *sym*{**, WEAK** *alias*{**, TYPE** *t*}}

*sym* is the name of the symbol to be imported.

If `WEAK` *alias* is specified, it indicates that *sym* is a weak external. If no definition for it is found at link time, then all references to it bind instead to *alias*.

If `TYPE` *t* is specified, then *t* indicates how the linker should attempt to resolve *sym*.  These values for *t* are possible:

|Value|Description|
|-|-|
|1|Do not perform a library search for *sym*|
|2|Perform a library search for *sym*|
|3|*sym* is an alias for *alias* (default)|

`EXTERN` is a synonym for `IMPORT`, except that *sym* is imported only if there are references to it in the current assembly.

`MACRO`<br/>
The use of a variable to hold the condition code of a macro is not supported. Default values for macro parameters are not supported.

`NOFP`<br/>
Not supported.

`OPT`, `TTL`, `SUBT`<br/>
Not supported because the Microsoft ARM assembler does not produce listings.

`PRESERVE8`<br/>
Not supported.

`RELOC`<br/>
`RELOC n` can only follow an instruction or a data definition directive. There is no "anonymous symbol" that can be relocated.

`REQUIRE`<br/>
Not supported.

`REQUIRE8`<br/>
Not supported.

`THUMBX`<br/>
Not supported because the Microsoft ARM assembler does not support the Thumb-2EE instruction set.

## See also

[ARM Assembler Command-Line Reference](../../assembler/arm/arm-assembler-command-line-reference.md)<br/>
[ARM Assembler Diagnostic Messages](../../assembler/arm/arm-assembler-diagnostic-messages.md)<br/>
