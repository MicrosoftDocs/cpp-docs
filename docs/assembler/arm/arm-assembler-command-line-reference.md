---
title: "ARM Assembler command-line reference"
description: "Reference guide to the Microsoft ARM assembler command-line options."
ms.date: 05/09/2022
ms.assetid: f7b89478-1ab5-4995-8cde-a805f0462c45
---
# ARM Assembler command-line reference

The Microsoft ARM assemblers, **armasm** and **armasm64**, support several command-line options. By default, **armasm** assembles ARMv7 Thumb assembly language into the Microsoft implementation of the Common Object File Format (COFF). The **armasm64** assembler creates COFF object code for ARM64 and ARM64EC targets. The linker can link COFF code objects produced by both the ARM assembler and the C/C++ compiler. It can link either together with object libraries created by the librarian.

## Syntax

> **`armasm`** [*options*] *source_file* *object_file*\
> **`armasm`** [*options*] *source_file*

> **`armasm64`** [*options*] *source_file* *object_file*\
> **`armasm64`** [*options*] *source_file*

### Parameters

*options*\
A combination of zero or more of the following options:

- **`-16`**\
  Available only in **armasm**. Assemble source as 16-bit Thumb instructions.  This option is the default.

- **`-32`**\
  Available only in **armasm**. Assemble source as 32-bit ARM instructions.

- **`-coff_thumb2_only`**\
  Available only in **armasm**. Allow only Thumb-2 code.

- **`-errorReport:`** *option*\
   This option is deprecated. In Windows Vista and later, error reporting is controlled by [Windows Error Reporting (WER)](/windows/win32/wer/windows-error-reporting) settings.

- **`-errors`** *filename*\
  **`-e`** *filename*\
  Redirect error and warning messages to *filename*. By default, these messages are sent to `stdout`.

- **`-funcOverride:`** *function_name*\
  Available only in **armasm64**. Emit function overriding support for *function_name*.

- **`-g`**\
  Generate debugging information.

- **`-gh:SHA1`**\
  Use the SHA-1 cryptographic hash algorithm to generate a checksum of each source file in debug info. Overrides **`-gh:SHA256`**.

- **`-gh:SHA256`**\
  Use the SHA-256 cryptographic hash algorithm to generate a checksum of each source file in debug info. This option is on by default in Visual Studio 2022 version 17.0 and later.

- **`-guard:ehcont`**[**`-`**]\
  Generate a sorted list of the relative virtual addresses (RVA) of all the valid exception handling continuation targets for a binary. It's used at runtime for `NtContinue` and `SetThreadContext` instruction pointer validation. By default, **`-guard:ehcont`** is off and must be explicitly enabled. To explicitly disable this option, use **`-guard:ehcont-`**. This option is available in Visual Studio 2019 version 16.7 and later. The feature is supported for 64-bit processes on a 64-bit OS.

- **`-help`**\
  **`-h`**\
  Print the command-line help message.

- **`-i`** *dir*[**`;`** *dir*]\
  Add one or more specified directories to the include search path. Separate directories by using a semi-colon (`;`).

- **`-ignore`** *warning_number*\
  Disable the specified warning number. For possible values, see [ARM Assembler diagnostic messages](arm-assembler-diagnostic-messages.md).

- **`-list`** *list_file*\
  Create a detailed listing of the generated assembly language to *list_file*. The *list_file* parameter is optional. If it's omitted, the assembler appends *`.lst`* to the base name of *source_file* to create the listing file.

- **`-machine`** *machine*\
  Specify the machine type to set in the PE header. In **armasm**, possible values for *machine* are:
  - **ARM**—Sets the machine type to `IMAGE_FILE_MACHINE_ARMNT`. This option is the default.
  - **THUMB**—Sets the machine type to `IMAGE_FILE_MACHINE_THUMB`.

  In **armasm64**, possible values are:
  - **ARM64**—Sets the machine type to `IMAGE_FILE_MACHINE_ARM64`. This option is the default.
  - **ARM64EC**—Sets the machine type to `IMAGE_FILE_MACHINE_ARM64EC`.

- **`-noesc`**\
  **`-noe`**\
  Ignore C-style escaped special characters, such as `\n` or `\t`.

- **`-nologo`**\
  Suppress the copyright banner.

- **`-nowarn`**\
  **`-now`**\
  Disable all warning messages.

- **`-o`** *object_file*\
  Specify the name of the object (output) file. The **`-o`** option is optional; you can instead specify an object file name as the last element of the command line.

- **`-oldit`**\
  Available only in **armasm**. Generate ARMv7-style IT blocks. By default, ARMv8-compatible IT blocks are generated.

- **`-predefine`** *directive*\
  **`-pd`** *directive*\
  Specify a SETA, SETL, or SETS directive to predefine a symbol.\
  Example: `armasm.exe -predefine "COUNT SETA 150" source.asm`\
  For more information, see the [ARM Compiler armasm Reference Guide](https://developer.arm.com/documentation/dui0802/latest/).

- **`-sourcelink:`** *sourcelink_filename*\
  *sourcelink_filename* specifies a JSON-formatted configuration file that contains a simple mapping of local file paths to URLs for source files to display in the debugger. For more information on the format of this file, see [Source Link JSON Schema](https://github.com/dotnet/designs/blob/master/accepted/2020/diagnostics/source-link.md#source-link-json-schema). Source Link is a language- and source-control agnostic system for providing source debugging for binaries. Source Link is supported for native binaries starting in Visual Studio 2017 version 15.8. For an overview of Source Link, see [Source Link](https://github.com/dotnet/designs/blob/master/accepted/2020/diagnostics/source-link.md). For information on how to use Source Link in your projects, and how to generate the SourceLink file as part of your project, see [Using Source Link](https://github.com/dotnet/sourcelink#using-source-link-in-c-projects).

- **`-via`** *filename*\
  Read extra command-line arguments from *filename*.

*source_file*\
The name of the source file.

*object_file*\
The last element of the command line can specify the name of the object (output) file. If it's omitted, and no **`-o`** option is specified, the assembler appends *`.obj`* to the base name of *source_file* to create the object file.

## Remarks

The following example demonstrates how to use armasm in a typical scenario. First, use armasm to build an assembly language source (.asm) file to an object (.obj) file. Then, use the CL command-line C compiler to compile a source (.c) file, and also specify the linker option to link the ARM object file.

```cmd
armasm -o myasmcode.obj myasmcode.asm 
cl myccode.c /link myasmcode.obj
```

## See also

[ARM Assembler diagnostic messages](../../assembler/arm/arm-assembler-diagnostic-messages.md)\
[ARM Assembler directives](../../assembler/arm/arm-assembler-directives.md)
