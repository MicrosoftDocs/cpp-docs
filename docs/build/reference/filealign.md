---
description: "Learn more about: /FILEALIGN (Align sections in files)"
title: "/FILEALIGN (Align sections in files)"
ms.date: "10/23/2017"
f1_keywords: ["/filealign"]
helpviewer_keywords: ["linker align sections", "/FILEALIGN linker option", "-FILEALIGN linker option", "FILEALIGN linker option"]
ms.assetid: c1017a35-8d71-4ad9-934b-a3e3ea037fa0
---
# /FILEALIGN (Align sections in files)

The **/FILEALIGN** linker option lets you specify the alignment of sections written to your output file as a multiple of an specified size.

## Syntax

> __/FILEALIGN:__*size*

### Parameters

*size*<br/>
The section alignment size in bytes, which must be a power of two.

## Remarks

The **/FILEALIGN** option causes the linker to align each section in the output file on a boundary that is a multiple of the *size* value. By default, the linker does not use a fixed alignment size.

The **/FILEALIGN** option can be used to make disk utilization more efficient, or to make page loads from disk faster. A smaller section size may be useful for apps that run on smaller devices, or to keep downloads smaller. Section alignment on disk does not affect alignment in memory.

Use [DUMPBIN](dumpbin-reference.md) to see information about sections in your output file.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Command Line** property page in the **Linker** folder.

1. Type the option name **/FILEALIGN:** and the size in the **Additional Options** box.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## See also

[MSVC linker reference](linking.md)<br/>
[MSVC Linker Options](linker-options.md)
