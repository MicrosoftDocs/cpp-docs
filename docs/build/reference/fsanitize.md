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

> **/fsanitize=address**\
> **/fsanitize-address-use-after-return**\
> **/fno-sanitize-address-vcasan-lib**\
> **/INFERASANLIBS[:no]**

## Remarks

The **/fsanitize=address** compiler option enables [AddressSanitizer](../../sanitizers/asan.md), a powerful compiler and runtime technology to light up [hard-to-find bugs](../../sanitizers/asan.md#error-types). 

The **/fsanitize-address-use-after-return** and **/fno-sanitize-address-vcasan-lib** compiler options, and the **/INFERASANLIBS[:no]** linker option offers support for advanced users. See [AddressSanitizer Build and Language Reference](../../sanitizers/asan-building.md) for more details.

The options are available beginning in Visual Studio 2019 16.9.

### To set the **/fsanitize=address** compiler option in the Visual Studio development environment

1. Open your project's **Property Pages** dialog box.

2. Under **Configuration Properties**, expand the **C/C++** folder, expand the **General** folder, and in the **Enable Address Sanitizer** box choose **Yes (/fsanitize=address)**.

3. Choose **OK** or **Apply** to save your changes.

The advanced compiler and linker options are set additional **Additional Options** boxes under the respective dropdowns.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)<br/>
[AddressSanitizer Overview](../../sanitizers/asan.md)<br/>
[AddressSanitizer Known Issues](../../sanitizers/asan-known-issues.md)<br/>
[AddressSanitizer Build and Language Reference](../../sanitizers/asan-building.md)