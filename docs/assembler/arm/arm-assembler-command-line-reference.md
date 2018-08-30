---
title: "ARM Assembler Command-Line Reference | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-masm"]
ms.topic: "reference"
dev_langs: ["C++"]
ms.assetid: f7b89478-1ab5-4995-8cde-a805f0462c45
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# ARM Assembler Command-Line Reference

This article provides command-line information about the Microsoft ARM assembler, *armasm*, which compiles ARMv7 Thumb assembly language into the Microsoft implementation of the Common Object File Format (COFF). The linker can link COFF code with object code that is produced by the ARM assembler or by the C compiler, together with object libraries that are created by the librarian.

## Syntax

> **armasm** [*options*] *sourcefile* *objectfile*
> **armasm** [*options*] **-o** *objectfile* *sourcefile*

### Parameters

*options*<br/>
A combination of zero or more of the following:

- **-errors** *filename*<br/>
   Redirect error and warning messages to *filename*.

- **-i** *dir*[**;**<em>dir</em>]<br/>
   Add the specified directories to the include search path.

- **-predefine** *directive*<br/>
   Specify a SETA, SETL, or SETS directive to predefine a symbol.<br/>
   Example: **armasm.exe -predefine "COUNT SETA 150" source.asm**<br/>
   For more information, see the [ARM Compiler armasm Reference Guide](http://infocenter.arm.com/help/topic/com.arm.doc.dui0802b/index.html).

- **-nowarn**<br/>
   Disable all warning messages.

- **-ignore** *warning*<br/>
   Disable the specified warning. For possible values, see the section about warnings.

- **-help**<br/>
   Print the command-line help message.

- **-machine** *machine*<br/>
   Specify the machine type to set in the PE header.  Possible values for *machine* are:<br/>
   **ARM**—Sets the machine type to IMAGE_FILE_MACHINE_ARMNT. This is the default.<br/>
   **THUMB**—Sets the machine type to IMAGE_FILE_MACHINE_THUMB.

- **-oldit**<br/>
   Generate ARMv7-style IT blocks.  By default, ARMv8-compatible IT blocks are generated.

- **-via** *filename*<br/>
   Read additional command-line arguments from *filename*.

- **-16**<br/>
   Assemble source as 16-bit Thumb instructions.  This is the default.

- **-32**<br/>
   Assemble source as 32-bit ARM instructions.

- **-g**<br/>
   Generate debugging information.

- **-errorReport:** *option*<br/>
   Specify how internal assembler errors are reported to Microsoft.  Possible values for *option* are:<br/>
   **none**—Do not send reports.<br/>
   **prompt**—Prompt the user to send reports immediately.<br/>
   **queue**—Prompt the user to send reports at the next admin logon. This is the default.<br/>
   **send**—Send reports automatically.

*sourcefile*<br/>
The name of the source file.

*objectfile*<br/>
The name of the object (output) file.

## Remarks

The following example demonstrates how to use armasm in a typical scenario. First, use armasm to build an assembly language source (.asm) file to an object (.obj) file. Then, use the CL command-line C compiler to compile a source (.c) file, and also specify the linker option to link the ARM object file.

**armasm myasmcode.asm -o myasmcode.obj**

**cl myccode.c /link myasmcode.obj**

## See Also

[ARM Assembler Diagnostic Messages](../../assembler/arm/arm-assembler-diagnostic-messages.md)<br/>
[ARM Assembler Directives](../../assembler/arm/arm-assembler-directives.md)<br/>
