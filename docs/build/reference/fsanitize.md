---
description: "Learn more about the /fsanitize (enable sanitizers) compiler option"
title: "/fsanitize (Enable sanitizers)"
ms.date: 02/17/2022
f1_keywords: ["/fsanitize", "-fsanitize", "/fsanitize=address", "/fsanitize=fuzzer", "/fsanitize-address-use-after-return", "-fsanitize-address-use-after-return", "/fno-sanitize-address-vcasan-lib", "-fno-sanitize-address-vcasan-lib", "VC.Project.VCCLCompilerTool.EnableASAN"]
helpviewer_keywords: ["/fsanitize [C++]", "-fsanitize=address [C++]", "address sanitizer compiler option [C++]", "/fsanitize-address-use-after-return", "/fno-sanitize-address-vcasan-lib"]
---
# `/fsanitize` (Enable sanitizers)

Use the **`/fsanitize`** compiler options to enable sanitizers.

## Syntax

> **`/fsanitize=address`**\
> **`/fsanitize=fuzzer`**\
> **`/fsanitize-address-use-after-return`**\
> **`/fno-sanitize-address-vcasan-lib`**

## Remarks

The **`/fsanitize=address`** compiler option enables [AddressSanitizer](../../sanitizers/asan.md), a powerful compiler and runtime technology to uncover [hard-to-find bugs](../../sanitizers/asan.md#error-types). Support for the **`/fsanitize=address`** option is available starting in Visual Studio 2019 version 16.9.

The **`/fsanitize=fuzzer`** compiler option enables experimental support for [LibFuzzer](https://llvm.org/docs/LibFuzzer.html). LibFuzzer is a coverage-guided fuzzing library that can be used to find bugs and crashes caused by user-provided input. We recommended you use **`/fsanitize=address`** with LibFuzzer. This option is useful for fuzzing tools such as OneFuzz. For more information, see the [OneFuzz documentation](https://www.microsoft.com/research/project/project-onefuzz/) and [OneFuzz GitHub project](https://github.com/microsoft/onefuzz). Support for the **`/fsanitize=fuzzer`** option is available starting in Visual Studio 2022 version 17.0.

The **`/fsanitize`** option doesn't allow comma-separated syntax, for example: **`/fsanitize=address,fuzzer`**. These options must be specified individually.

The **`/fsanitize-address-use-after-return`** and **`/fno-sanitize-address-vcasan-lib`** compiler options, and the [`/INFERASANLIBS` (Use inferred sanitizer libs)](./inferasanlibs.md) and **`/INFERASANLIBS:NO`** linker options offer support for advanced users. For more information, see [AddressSanitizer build and language reference](../../sanitizers/asan-building.md).

### To set the **`/fsanitize=address`** compiler option in the Visual Studio development environment

1. Open your project's **Property Pages** dialog box.

1. Select the **Configuration Properties** > **C/C++** > **General** property page.

1. Modify the **Enable Address Sanitizer** property. To enable it, choose **Yes (/fsanitize=address)**.

1. Choose **OK** or **Apply** to save your changes.

### To set the **`/fsanitize=fuzzer`** compiler option in the Visual Studio development environment

1. Open your project's **Property Pages** dialog box.

1. Select the **Configuration Properties** > **C/C++** > **General** property page.

1. Modify the **Enable Fuzzer** property. To enable it, choose **Yes (/fsanitize=fuzzer)**.

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
[`/fsanitize-coverage` (Configure sanitizer coverage)](fsanitize-coverage.md)\
[AddressSanitizer overview](../../sanitizers/asan.md)\
[AddressSanitizer known issues](../../sanitizers/asan-known-issues.md)\
[AddressSanitizer build and language reference](../../sanitizers/asan-building.md)
