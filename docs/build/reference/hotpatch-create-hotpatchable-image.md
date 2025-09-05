---
description: "Learn more about: /hotpatch (Create hotpatchable image)"
title: "/hotpatch (Create hotpatchable image)"
ms.date: "9/4/2025"
f1_keywords: ["/hotpatch", "VC.Project.VCCLCompilerTool.CreateHotpatchableImage"]
helpviewer_keywords: ["hot patching", "hotpatching", "-hotpatch compiler option [C++]", "/hotpatch compiler option [C++]"]
---
# /hotpatch (Create hotpatchable image)

Prepares an image for hotpatching.

## Syntax

```
/hotpatch
```

> [!NOTE]
> This option is only available for x86

## Remarks

When `/hotpatch` is used during compilation, the compiler ensures that the first instruction of each function is at least 2 bytes long and that no jump within the function goes to the first instruction. These conditions are required for hotpatching.

To complete the preparation for making an image hotpatchable, after you compile with `/hotpatch`, use [`/functionpadmin`](functionpadmin-create-hotpatchable-image.md) to link. When you compile and link an image using one invocation of `cl.exe`, `/hotpatch` implies `/functionpadmin`.

> [!TIP]
> Arm64 and x64 architectures are always treated as hotpatchable. But you must still link by using `/functionpadmin` to create hotpatchable images for them.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).
1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.
1. Add the compiler option to the **Additional Options** box.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[MSVC Compiler Options](compiler-options.md)\
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
