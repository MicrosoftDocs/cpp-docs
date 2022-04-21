---
description: "Learn more about the /INFERASANLIBS (Use inferred sanitizer libs) linker option"
title: "/INFERASANLIBS (Use inferred sanitizer libs)"
ms.date: 03/01/2021
f1_keywords: ["/INFERASANLIBS", "/INFERASANLIBS:NO"]
helpviewer_keywords: ["/INFERASANLIBS [C++]", "address sanitizer [C++] linker option"]
---
# `/INFERASANLIBS` (Use inferred sanitizer libs)

Use the **`/INFERASANLIBS`** linker option to enable or disable linking to the default AddressSanitizer libraries. As of Visual Studio 2019 16.9, the only supported sanitizer is [AddressSanitizer](../../sanitizers/asan.md).

## Syntax

> **`/INFERASANLIBS`**\[**`:NO`**]

## Remarks

The **`/INFERASANLIBS`** linker option enables the default [AddressSanitizer](../../sanitizers/asan.md) libraries. This option is enabled by default.

The **`/INFERASANLIBS`** and **`/INFERASANLIBS:NO`** linker options offer support for advanced users. For more information, see [AddressSanitizer build and language reference](../../sanitizers/asan-building.md).

The **`/INFERASANLIBS`** option is available beginning in Visual Studio 2019 version 16.9.

### To set the **`/INFERASANLIBS`** linker option in the Visual Studio development environment

1. Open your project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Command Line** property page.

1. Modify the **Additional Options** property. To enable default libraries, enter **/INFERASANLIBS** in the edit box. To disable default libraries, enter **/INFERASANLIBS:NO** instead.

1. Choose **OK** or **Apply** to save your changes.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## See also

[MSVC linker reference](linking.md)\
[MSVC linker options](linker-options.md)\
[`/fsanitize` (Enable sanitizers)](./fsanitize.md)\
[AddressSanitizer overview](../../sanitizers/asan.md)\
[AddressSanitizer known issues](../../sanitizers/asan-known-issues.md)\
[AddressSanitizer build and language reference](../../sanitizers/asan-building.md)
