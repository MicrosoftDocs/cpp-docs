---
description: "Learn more about: /FUNCTIONPADMIN (Create hotpatchable image)"
title: "/FUNCTIONPADMIN (Create hotpatchable image)"
ms.date: 09/09/2022
f1_keywords: ["VC.Project.VCLinkerTool.CreateHotPatchableImage", "/functionpadmin"]
helpviewer_keywords: ["-FUNCTIONPADMIN linker option", "/FUNCTIONPADMIN linker option"]
ms.assetid: 25b02c13-1add-4fbd-add9-fcb30eb2cae7
---
# `/FUNCTIONPADMIN` (Create hotpatchable image)

Tells the linker to prepare an executable image for hot patching.

## Syntax

> **`/FUNCTIONPADMIN`**[**`:`***`size`*]

### Arguments

*`size`*\
The amount of padding to add to the beginning of each function in bytes. On x86 the default is 5 bytes of padding and on x64 the default is 6 bytes. On other targets a value must be provided.

## Remarks

In order for the linker to produce a hotpatchable image, the *`.obj`* files must be compiled by using the [`/hotpatch` (Create hotpatchable image)](hotpatch-create-hotpatchable-image.md) compiler option.

When you compile and link an image with a single invocation of cl.exe, **`/hotpatch`** implies **`/FUNCTIONPADMIN`**.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For more information, see [Set compiler and build properties](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **General** property page.

1. Modify the **Create Hot Patchable Image** property. Choose **OK** or **Apply** to save your changes.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## See also

[MSVC linker reference](linking.md)\
[MSVC linker options](linker-options.md)
