---
description: "Learn more about: /QIfist (Suppress _ftol)"
title: "/QIfist (Suppress _ftol)"
ms.date: "11/04/2016"
f1_keywords: ["/qifist"]
helpviewer_keywords: ["QIfist compiler option [C++]", "-QIfist compiler option [C++]", "/QIfist compiler option [C++]"]
ms.assetid: 1afd32a5-f658-4b66-85f4-e0ce4cb955bd
---
# /QIfist (Suppress _ftol)

Deprecated. Suppresses the call of the helper function `_ftol` when a conversion from a floating-point type to an integral type is required.

## Syntax

```
/QIfist
```

## Remarks

> [!NOTE]
> **/QIfist** is only available in the compiler targeting x86; this compiler option is not available in the compilers targeting x64 orARM.

In addition to converting from a floating-point type to integral type, the `_ftol` function ensures the rounding mode of the floating-point unit (FPU) is toward zero (truncate), by setting bits 10 and 11 of the control word. This guarantees that converting from a floating-point type to an integral type occurs as described by the ANSI C standard (the fractional portion of the number is discarded). When using **/QIfist**, this guarantee no longer applies. The rounding mode will be one of four as documented in Intel reference manuals:

- Round toward nearest (even number if equidistant)

- Round toward negative infinity

- Round toward positive infinity

- Round toward zero

You can use the [_control87, _controlfp, \__control87_2](../../c-runtime-library/reference/control87-controlfp-control87-2.md) C Run-Time function to modify the rounding behavior of the FPU. The default rounding mode of the FPU is "Round toward nearest." Using **/QIfist** can improve the performance of your application, but not without risk. You should thoroughly test the portions of your code that are sensitive to rounding modes before relying upon code built with **/QIfist** in production environments.

[/arch (x86)](arch-x86.md) and **/QIfist** can not be used on the same compiland.

> [!NOTE]
> **/QIfist** is not in effect by default because the rounding bits also affect floating point to floating point rounding (which occurs after every calculation), so when you set the flags for C-style (toward zero) rounding, your floating point calculations might be different. **/QIfist** should not be used if your code depends upon the expected behavior of truncating the fractional portion of the floating-point number. If you are unsure, do not use **/QIfist**.

The **/QIfist** option is deprecated starting in Visual Studio 2005. The compiler has made significant improvements in float to int conversion speed. For a list of deprecated compiler options, see **Deprecated and Removed Compiler Options** in [Compiler Options Listed by Category](compiler-options-listed-by-category.md).

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Click the **C/C++** folder.

1. Click the **Command Line** property page.

1. Type the compiler option in the **Additional Options** box.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[/Q Options (Low-Level Operations)](q-options-low-level-operations.md)<br/>
[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
