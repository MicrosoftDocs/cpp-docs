---
description: "Learn more about: /fsanitize (enable sanitizers)"
title: "/fsanitize (enable sanitizers)"
ms.date: "02/24/2021"
f1_keywords: ["/fsanitize", "-fsanitize"]
helpviewer_keywords: ["/fsanitize [C++]", "-fsanitize=address [C++]", "address sanitizer [C++]"]
ms.assetid: 76d56784-f5ad-401d-841d-09d1059e8b8c
---
# /fsanitize (enable sanitizers)

Use the **/fsanitize** compiler options to enable sanitizers. As of Visual Studio 2019 16.9, the only supported sanitizer is [AddressSanitizer](../../sanitizers/asan.md).

## Syntax

> **/fsanitize=address**<em>

## Remarks

!!! THIS ISN'T DONE YET.
The **/constexpr** compiler options control compile-time evaluation of **`constexpr`** expressions. Evaluation steps, recursion levels, and backtrace depth are controlled to prevent the compiler from spending too much time on **`constexpr`** evaluation. For more information on the **`constexpr`** language element, see [constexpr (C++)](../../cpp/constexpr-cpp.md).

The **/constexpr** options are available beginning in Visual Studio 2015.

### To set this compiler option in the Visual Studio development environment

1. Open your project's **Property Pages** dialog box.

2. Under **Configuration Properties**, expand the **C/C++** folder and choose the **Command Line** property page.

3. Enter any **/constexpr** compiler options in the **Additional Options** box. Choose **OK** or **Apply** to save your changes.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
