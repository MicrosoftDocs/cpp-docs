---
title: "ML and ML64 command-line reference"
description: "Reference guide to the Microsoft MASM ML and ML64 assembler command-line options."
ms.date: 7/3/2023
f1_keywords: ["ML"]
helpviewer_keywords: ["/W* MASM compiler option", "/c MASM compiler option", "/EP MASM compiler option", "/Fe MASM compiler option", "/Zp MASM compiler option", "/AT MASM compiler option", "/Zm MASM compiler option", "/Sf MASM compiler option", "/Sp MASM compiler option", "/w MASM compiler option", "/Fl MASM compiler option", "/coff MASM compiler option", "/St MASM compiler option", "/Cx MASM compiler option", "/Sl MASM compiler option", "/Cu MASM compiler option", "MASM (Microsoft Macro Assembler), ML command-line reference", "/FPi MASM compiler option", "/Zf MASM compiler option", "ML environment variable", "/Fr MASM compiler option", "/help MASM compiler option", "/Sa MASM compiler option", "/Zd MASM compiler option", "/I MASM compiler option", "/? MASM compiler option", "/Bl MASM compiler option", "/Fm MASM compiler option", "/Fo MASM compiler option", "command-line reference [ML]", "/Sn MASM compiler option", "/Gd MASM compiler option", "/D* MASM compiler option", "environment variables, ML", "/Gc MASM compiler option", "/F* MASM compiler option", "/Sc MASM compiler option", "/H MASM compiler option", "/Zs MASM compiler option", "/omf MASM compiler option", "/Sg MASM compiler option", "/Cp MASM compiler option", "/Zi MASM compiler option", "/nologo MASM compiler option", "/Sx MASM compiler option", "/WX MASM compiler option", "/Ss MASM compiler option", "command line, reference [ML]", "/Ta MASM compiler option"]
---
# ML and ML64 command-line reference

Assembles and links one or more assembly-language source files. The command-line options are case-sensitive.

For more information on ml64.exe, see [MASM for x64 (ml64.exe)](masm-for-x64-ml64-exe.md).

## Syntax

> **`ML`** \[*`options`*] *`filename`* \[ \[*`options`*]  *`filename`*]
>
> **`ML64`** \[*`options`*] *`filename`* \[ \[*`options`*]  *`filename`*] ... \[**`/link`** *`link_options`*]

### Parameters

*`options`*\
The options listed in the following table:

| Option | Action |
|--|--|
| **`/AT`** | Enables tiny-memory-model support. Enables error messages for code constructs that violate the requirements for *`.com`* format files. This option isn't equivalent to the [`.MODEL`](dot-model.md) **`TINY`** directive.<br /> Not available in ml64.exe. |
| **`/Bl`** *`filename`* | Selects an alternate linker in *`filename`*. |
| **`/c`** | Assembles only. Does no linking. |
| **`/coff`** | Generates common object file format (COFF) type of object module. Required for Win32 assembly language development.<br /> Not available in ml64.exe. |
| **`/Cp`** | Preserves case of all user identifiers. |
| **`/Cu`** | Maps all identifiers to upper case (default).<br /> Not available in ml64.exe. |
| **`/Cx`** | Preserves case in public and extern symbols. |
| **`/D`** *`symbol`*⟦=*`value`*⟧ | Defines a text macro with the given name *`symbol`*. If *`value`* is missing, it's blank. Multiple tokens separated by spaces must be enclosed in quotation marks. |
| **`/EP`** | Generates a preprocessed source listing (sent to `STDOUT`). See **`/Sf`**. |
| **`/ERRORREPORT`** [ **`NONE`** \| **`PROMPT`** \| **`QUEUE`** \| **`SEND`** ] | Deprecated. Error reporting is controlled by [Windows Error Reporting (WER)](/windows/win32/wer/windows-error-reporting) settings. |
| **`/F`** *`hexnum`* | Sets stack size to *`hexnum`* bytes (the same as **`/link /STACK:<number>`**). The value must be expressed in hexadecimal notation. There must be a space between **`/F`** and *`hexnum`*. |
| **`/Fe`** *`filename`* | Names the executable file. |
| **`/Fl`**⟦*`filename`*⟧ | Generates an assembled code listing. See **/Sf**. |
| **`/Fm`**⟦*`filename`*⟧ | Creates a linker map file. |
| **`/Fo`** *`filename`* | Names an object file. For more information, see [Remarks](#remarks). |
| **`/FPi`** | Generates emulator fix-ups for floating-point arithmetic (mixed language only).<br /> Not available in ml64.exe. |
| **`/Fr`**⟦*`filename`*⟧ | Generates a source browser *`.sbr`* file. |
| **`/FR`**⟦*`filename`*⟧ | Generates an extended form of a source browser *`.sbr`* file. |
| **`/Gc`** | Specifies use of FORTRAN- or Pascal-style conventions for function calls and names. Same as **`OPTION LANGUAGE:PASCAL`**.<br /> Not available in ml64.exe. |
| **`/Gd`** | Specifies use of C-style conventions for function calls and names. Same as **`OPTION LANGUAGE:C`**.<br /> Not available in ml64.exe. |
| **`/Gz`** | Specifies use of `__stdcall` conventions for function calls and names. Same as **`OPTION LANGUAGE:STDCALL`**.<br /> Not available in ml64.exe. |
| **`/H`** *`number`* | Restricts external names to *`number`* significant characters. The default is 31 characters.<br /> Not available in ml64.exe. |
| **`/help`** | Displays a summary of ML command-line syntax and options. |
| **`/I`** *`pathname`* | Sets path for include file. A maximum of 10 **`/I`** options is allowed. |
| **`/nologo`** | Suppresses messages for successful assembly. |
| **`/omf`** | Generates object module file format (OMF) type of object module. **`/omf`** implies **`/c`**. ML.exe doesn't support linking OMF objects.<br /> Not available in ml64.exe. |
| **`/Sa`** | Turns on listing of all available information. |
| **`/safeseh`** | Marks the object file: either it contains no exception handlers, or it contains exception handlers that are all declared with [`.SAFESEH`](dot-safeseh.md).<br /> Not available in ml64.exe. |
| **`/Sf`** | Adds the first-pass listing to the listing file. |
| **`/Sl`** *`width`* | Sets the line width of source listing in characters per line to *`width`*. Range is 60-255 or 0. Default is 0. Same as [`PAGE`](page.md) *`width`*. |
| **`/Sn`** | Turns off symbol table when a listing is produced. |
| **`/Sp`** *`length`* | Sets the page length of source listing in lines per page to *`length`*. Range is 10-255 or 0. Default is 0. Same as [`PAGE`](page.md) *`length`*. |
| **`/Ss`** *`text`* | Specifies text for source listing. Same as [`SUBTITLE`](subtitle.md) text. |
| **`/St`** *`text`* | Specifies title for source listing. Same as [`TITLE`](title.md) text. |
| **`/Sx`** | Turns on false conditionals in listing. |
| **`/Ta`** *`filename`* | Assembles source file whose name doesn't end with the *`.asm`* extension. |
| **`/w`** | Same as **`/W0 /WX`**. |
| **`/W`** *`level`* | Sets the warning level, where *`level`* = 0, 1, 2, or 3. |
| **`/WX`** | If warnings are generated, returns an error code. |
| **`/X`** | Ignore `INCLUDE` environment path. |
| **`/Zd`** | Generates line-number information in object file. |
| **`/Zf`** | Makes all symbols public. |
| **`/ZH:MD5`** | Use MD5 for checksum in debug info. |
| **`/ZH:SHA_256`** | Use SHA256 for checksum in debug info (default in Visual Studio 2022 version 17.0 and later). |
| **`/Zi`** | Generates CodeView information in object file. |
| **`/Zm`** | Enables **`M510`** option for maximum compatibility with MASM 5.1.<br /> Not available in ml64.exe. |
| **`/Zp`**⟦*`alignment`*⟧ | Packs structures on the specified byte boundary. The *`alignment`* can be 1, 2, or 4. |
| **`/Zs`** | Performs a syntax check only. |
| **`/?`** | Displays a summary of ML command-line syntax and options. |

*`filename`*\
The name of the file.

*`link_options`*\
The link options. For more information, see [Linker options](../../build/reference/linker-options.md).

## Remarks

Some command-line options to ML and ML64 are placement-sensitive. For example, because ML and ML64 can accept several **`/c`** options, any corresponding **`/Fo`** options must be specified before **`/c`**. The following command-line example illustrates an object file specification for each assembly file specification:

```cmd
ml.exe /Fo a1.obj /c a.asm /Fo b1.obj /c b.asm
```

## Environment Variables

| Variable | Description |
|--|--|
| `INCLUDE` | Specifies search path for include files. |
| `ML` | Specifies default command-line options. |
| `TMP` | Specifies path for temporary files. |

## See also

[ML error messages](ml-error-messages.md)\
[Microsoft Macro Assembler reference](microsoft-macro-assembler-reference.md)
