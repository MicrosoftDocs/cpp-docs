---
description: "Learn more about: /constexpr (Control constexpr evaluation)"
title: "/constexpr (Control constexpr evaluation)"
ms.date: 04/14/2025
f1_keywords: ["/constexpr", "-constexpr"]
helpviewer_keywords: ["/constexpr control constexpr evaluation [C++]", "-constexpr control constexpr evaluation [C++]", "constexpr control constexpr evaluation [C++]"]
---
# /constexpr (Control constexpr evaluation)

Use the **`/constexpr`** compiler options to control parameters for **`constexpr`** evaluation at compile time.

## Syntax

> `/constexpr:depth`<em>N</em>\
> `/constexpr:backtrace`<em>N</em>\
> `/constexpr:steps`<em>N</em>

## Arguments

**`depth`**<em>N</em>\
Limit the depth of recursive **`constexpr`** function invocation to *N* levels. The default is 512.

**`backtrace`**<em>N</em>\
Show up to *N* **`constexpr`** evaluations in diagnostics. The default is 10.

**`steps`**<em>N</em>\
Terminate **`constexpr`** evaluation after *N* steps. The default is 100,000. A step refers to an individual computation taken towards evaluating the constant expression. Increasing the maximum number of steps might cause compilation to take longer in cases where compilation would otherwise fail.

## Remarks

The **`/constexpr`** compiler options control compile-time evaluation of **`constexpr`** expressions. Evaluation steps, recursion levels, and backtrace depth are controlled to prevent the compiler from spending too much time on **`constexpr`** evaluation. For more information on the **`constexpr`** language element, see [`constexpr` (C++)](../../cpp/constexpr-cpp.md).

The **`/constexpr`** flag is available beginning in Visual Studio 2015.

### To set this compiler option in the Visual Studio development environment

1. Open your project's **Property Pages** dialog box.
1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.
1. Enter **/constexpr** compiler options in the **Additional Options** box. Choose **OK** to save your changes.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[MSVC Compiler Options](compiler-options.md)\
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
