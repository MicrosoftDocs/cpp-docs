---
description: "Learn more about: /FUNCTIONPADMIN (Create Hotpatchable Image)"
title: "/FUNCTIONPADMIN (Create Hotpatchable Image)"
ms.date: "03/09/2018"
f1_keywords: ["/functionpadmin"]
helpviewer_keywords: ["-FUNCTIONPADMIN linker option", "/FUNCTIONPADMIN linker option"]
ms.assetid: 25b02c13-1add-4fbd-add9-fcb30eb2cae7
---
# /FUNCTIONPADMIN (Create Hotpatchable Image)

Prepares an image for hotpatching.

## Syntax

> **/FUNCTIONPADMIN**[**:**_space_]

### Arguments

*space*<br/>
The amount of padding to add to the beginning of each function in bytes. On x86 this defaults to 5 bytes of padding and on x64 this defaults to 6 bytes. On other targets a value must be provided.

## Remarks

In order for the linker to produce a hotpatchable image, the .obj files must have been compiled with [/hotpatch (Create Hotpatchable Image)](hotpatch-create-hotpatchable-image.md).

When you compile and link an image with a single invocation of cl.exe, **/hotpatch** implies **/functionpadmin**.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Command Line** property page.

1. Enter the **/FUNCTIONPADMIN** option in **Additional Options**. Choose **OK** to save your changes.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## See also

[MSVC linker reference](linking.md)<br/>
[MSVC Linker Options](linker-options.md)
