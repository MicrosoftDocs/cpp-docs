---
description: "Learn more about the /fsanitize (enable sanitizers) compiler option"
title: "/fsanitize (Enable sanitizers)"
ms.date: 02/24/2021
f1_keywords: ["/fsanitize", "-fsanitize", "/fsanitize=address", "/fsanitize-address-use-after-return", "-fsanitize-address-use-after-return", "/fno-sanitize-address-vcasan-lib", "-fno-sanitize-address-vcasan-lib"]
helpviewer_keywords: ["/fsanitize [C++]", "-fsanitize=address [C++]", "address sanitizer compiler option [C++]", "/fsanitize-address-use-after-return", "/fno-sanitize-address-vcasan-lib"]
---
# `/fsanitize` (Enable sanitizers)

Use the **`/fsanitize`** compiler options to enable sanitizers. As of Visual Studio 2019 16.9, the only supported sanitizer is [AddressSanitizer](../../sanitizers/asan.md).

## Syntax

> **`/fsanitize=address`**\
> **`/fsanitize-address-use-after-return`**\
> **`/fno-sanitize-address-vcasan-lib`**\

## Remarks

The **`/fsanitize=address`** compiler option enables [AddressSanitizer](../../sanitizers/asan.md), a powerful compiler and runtime technology to light up [hard-to-find bugs](../../sanitizers/asan.md#error-types).

The **`/fsanitize-address-use-after-return`** and **`/fno-sanitize-address-vcasan-lib`** compiler options, and the [`/INFERASANLIBS` (Use inferred sanitizer libs)](./inferasanlibs.md) and **`/INFERASANLIBS:NO`** linker options offer support for advanced users. For more information, see [AddressSanitizer build and language reference](../../sanitizers/asan-building.md).

The **`/fsanitize`** options are available beginning in Visual Studio 2019 version 16.9.

### To set the **`/fsanitize=address`** compiler option in the Visual Studio development environment

1. Open your project's **Property Pages** dialog box.

1. Select the **Configuration Properties** > **C/C++** > **General** property page.

1. Modify the **Enable Address Sanitizer** property. To enable it, choose **Yes (/fsanitize=address)**.

1. Choose **OK** or **Apply** to save your changes.

### To set the advanced compiler options

1. Open your project's **Property Pages** dialog box.

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Modify the **Additional Options** property to set **/fsanitize-address-use-after-return** or **/fno-sanitize-address-vcasan-lib**.

1. Choose **OK** or **Apply** to save your changes.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[MSVC compiler options](compiler-options.md)\
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)\
[`/INFERASANLIBS` (Use inferred sanitizer libs)](./inferasanlibs.md)\
[AddressSanitizer overview](../../sanitizers/asan.md)\
[AddressSanitizer known issues](../../sanitizers/asan-known-issues.md)\
[AddressSanitizer build and language reference](../../sanitizers/asan-building.md)
