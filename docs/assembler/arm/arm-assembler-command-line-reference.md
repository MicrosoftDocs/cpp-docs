---
title: "ARM Assembler command-line reference"
description: "Reference guide to the Microsoft ARM assembler command-line options."
ms.date: "02/09/2020"
ms.assetid: f7b89478-1ab5-4995-8cde-a805f0462c45
---
# ARM Assembler command-line reference

This article provides command-line information about the Microsoft ARM assembler, **armasm**. **armasm** assembles ARMv7 Thumb assembly language into the Microsoft implementation of the Common Object File Format (COFF). The linker can link COFF code objects produced by both the ARM assembler and the C compiler. It can link either together with object libraries created by the librarian.

## Syntax

> **`armasm`** [*options*] *source_file* *object_file*\
> **`armasm`** [*options*] **`-o`** *object_file* *source_file*

### Parameters

*options*\
A combination of zero or more of the following options:

- **`-errors`** *filename*\
   Redirect error and warning messages to *filename*.

- **`-i`** *dir*[**`;`**<em>dir</em>]\
   Add the specified directories to the include search path.

- **`-predefine`** *directive*\
   Specify a SETA, SETL, or SETS directive to predefine a symbol.\
   Example: `armasm.exe -predefine "COUNT SETA 150" source.asm`\
   For more information, see the [ARM Compiler armasm Reference Guide](http://infocenter.arm.com/help/topic/com.arm.doc.dui0802b/index.html).

- **`-nowarn`**\
   Disable all warning messages.

- **`-ignore`** *warning*\
   Disable the specified warning. For possible values, see the section about warnings.

- **`-help`**\
   Print the command-line help message.

- **`-machine`** *machine*\
   Specify the machine type to set in the PE header.  Possible values for *machine* are:\
   **ARM**—Sets the machine type to IMAGE_FILE_MACHINE_ARMNT. This option is the default.\
   **THUMB**—Sets the machine type to IMAGE_FILE_MACHINE_THUMB.

- **`-oldit`**\
   Generate ARMv7-style IT blocks.  By default, ARMv8-compatible IT blocks are generated.

- **`-via`** *filename*\
   Read additional command-line arguments from *filename*.

- **`-16`**\
   Assemble source as 16-bit Thumb instructions.  This option is the default.

- **`-32`**\
   Assemble source as 32-bit ARM instructions.

- **`-g`**\
   Generate debugging information.

- **`-errorReport:`** *option*\
   This option is deprecated, and has no effect. Starting in Windows Vista, error reporting is controlled by [Windows Error Reporting (WER)](/windows/win32/wer/windows-error-reporting) settings.

*source_file*\
The name of the source file.

*object_file*\
The name of the object (output) file.

## Remarks

The following example demonstrates how to use armasm in a typical scenario. First, use armasm to build an assembly language source (.asm) file to an object (.obj) file. Then, use the CL command-line C compiler to compile a source (.c) file, and also specify the linker option to link the ARM object file.

```cmd
armasm myasmcode.asm -o myasmcode.obj
cl myccode.c /link myasmcode.obj
```

## See also

[ARM Assembler diagnostic messages](../../assembler/arm/arm-assembler-diagnostic-messages.md)\
[ARM Assembler directives](../../assembler/arm/arm-assembler-directives.md)
