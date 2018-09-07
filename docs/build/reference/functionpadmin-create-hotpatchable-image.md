---
title: "/FUNCTIONPADMIN (Create Hotpatchable Image) | Microsoft Docs"
ms.custom: ""
ms.date: "03/09/2018"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["/functionpadmin"]
dev_langs: ["C++"]
helpviewer_keywords: ["-FUNCTIONPADMIN linker option", "/FUNCTIONPADMIN linker option"]
ms.assetid: 25b02c13-1add-4fbd-add9-fcb30eb2cae7
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# /FUNCTIONPADMIN (Create Hotpatchable Image)

Prepares an image for hotpatching.

## Syntax

> **/FUNCTIONPADMIN**[**:**_space_]  

### Arguments

*space*<br/>
The amount of padding to add to the beginning of each function in bytes. On x86 this defaults to 5 bytes of padding and on x64 this defaults to 6 bytes. On other targets a value must be provided.

## Remarks

In order for the linker to produce a hotpatchable image, the .obj files must have been compiled with [/hotpatch (Create Hotpatchable Image)](../../build/reference/hotpatch-create-hotpatchable-image.md).

When you compile and link an image with a single invocation of cl.exe, **/hotpatch** implies **/functionpadmin**.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../../ide/working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Command Line** property page.

1. Enter the **/FUNCTIONPADMIN** option in **Additional Options**. Choose **OK** to save your changes.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## See also

[Setting Linker Options](../../build/reference/setting-linker-options.md)<br/>
[Linker Options](../../build/reference/linker-options.md)
