---
description: "Learn more about: ARM Assembler Directives"
title: "ARM Assembler Directives"
ms.date: "08/30/2018"
ms.assetid: 9cfa8896-ec10-4e77-855a-3135c40d7d2a
---
# ARM Assembler Directives

Generally, the Microsoft ARM assembler uses the ARM assembly language, which is documented in the [ARM Compiler armasm Reference Guide](https://developer.arm.com/documentation/dui0802/latest/). However, the Microsoft implementations of some assembly directives differ from the ARM assembly directives. This article explains the differences.

## Microsoft Implementations of ARM Assembly Directives

- `AREA`

   The Microsoft ARM assembler supports these `AREA` attributes: `ALIGN`, `CODE`, `CODEALIGN`, `DATA`, `NOINIT`, `READONLY`, `READWRITE`, `THUMB`, `ARM`.

   All except `THUMB` and `ARM` work as documented in the [ARM Compiler armasm Reference Guide](https://developer.arm.com/documentation/dui0802/latest/).

   In the Microsoft ARM assembler, `THUMB` indicates that a `CODE` section contains Thumb code, and is the default for `CODE` sections.  `ARM` indicates that the section contains ARM code.

- `ATTR`

   Not supported.

- `CODE16`

   Not supported because it implies pre-UAL Thumb syntax, which the Microsoft ARM assembler doesn't allow. Use the `THUMB` directive instead, along with UAL syntax.

- `COMMON`

   Specification of an alignment for the common region isn't supported.

- `DCDO`

   Not supported.

- `DN`, `QN`, `SN`

   Specification of a type or a lane on the register alias isn't supported.

- `ENTRY`

   Not supported.

- `EQU`

   Specification of a type for the defined symbol isn't supported.

- `EXPORT` and `GLOBAL`

   Specifies exports using this syntax:

   > **`EXPORT`**|**`GLOBAL`** *`symbol`*{*`[type]`*}

   *`symbol`* is the symbol to be exported. *`[type]`*, if specified, can be either `[DATA]` to indicate that the symbol points to data or `[FUNC]` to indicate that the symbol points to code. `GLOBAL` is a synonym for `EXPORT`.

- `EXPORTAS`

   Not supported.

- `FRAME`

   Not supported.

- `FUNCTION` and `PROC`

   The assembly syntax lets you specify a custom calling convention on procedures: you list the registers that are caller-save, and the ones that are callee-save. However, while the Microsoft ARM assembler accepts the syntax, it ignores the register lists. The debug information that's produced by the assembler supports only the default calling convention.

- `IMPORT` and `EXTERN`

   Specifies imports using this syntax:

   > **`IMPORT`**|**`EXTERN`** *`symbol`*{**`, WEAK`** *`alias`*{**`, TYPE`** *`t`*}}

   *`symbol`* is the name of the symbol to be imported.

   If `WEAK` *`alias`* is specified, it indicates that *`symbol`* is a weak external. If a definition for it isn't found at link time, then all references to it bind instead to *`alias`*.

   If `TYPE` *`t`* is specified, then *`t`* indicates how the linker should attempt to resolve *`symbol`*.  These values for *`t`* are possible:

   | Value | Description |
   |--|--|
   | 1 | Don't search libraries for *`symbol`*. |
   | 2 | Search libraries for *`symbol`*. |
   | 3 | *`symbol`* is an alias for *`alias`* (default). |

   `EXTERN` is a synonym for `IMPORT`, except that *`symbol`* is imported only if there are references to it in the current assembly.

- `MACRO`

   The use of a variable to hold the condition code of a macro isn't supported. Default values for macro parameters aren't supported.

- `NOFP`

   Not supported.

- `OPT`, `TTL`, `SUBT`

   Not supported, because the Microsoft ARM assembler doesn't produce listings.

- `PRESERVE8`

   Not supported.

- `RELOC`

   `RELOC n` can only follow an instruction or a data definition directive. There's no "anonymous symbol" that can be relocated.

- `REQUIRE`

   Not supported.

- `REQUIRE8`

   Not supported.

- `THUMBX`

   Not supported, because the Microsoft ARM assembler doesn't support the Thumb-2EE instruction set.

## See also

[ARM Assembler Command-Line Reference](../../assembler/arm/arm-assembler-command-line-reference.md)<br/>
[ARM Assembler Diagnostic Messages](../../assembler/arm/arm-assembler-diagnostic-messages.md)<br/>
