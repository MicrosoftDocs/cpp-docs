---
title: "/ILK (Name incremental database file)"
description: "The MSVC linker option /ILK specifies the incremental link database file pathname."
ms.date: 09/07/2022
f1_keywords: ["VC.Project.VCLinkerTool.IncrementalLinkDatabaseFile", "/ilk", "ilk"]
helpviewer_keywords: ["Name incremental database file in C++ linker", "/ILK linker option", "-ILK linker option", "ILK linker option"]
---
# `/ILK` (Name incremental database file)

The **`/ILK`** linker option tells the linker where to put the *`.ilk`* database file for incremental link information ([`/INCREMENTAL`](./incremental-link-incrementally.md)).

## Syntax

> **`/ILK:`**\[*`pathname`*]

### Arguments

*`pathname`*\
The destination directory and filename for the generated *`.ilk`* file. If the **`/ILK`** option isn't specified when **`/INCREMENTAL`** is used, the filename is created by appending *`.ilk`* to the target base filename.

## Remarks

The **`/ILK`** linker option tells the linker the path and filename to use for the *`.ilk`* incremental database file when you specify [`/INCREMENTAL`](./incremental-link-incrementally.md).

### To set this compiler option in the Visual Studio development environment

1. Open the project **Property Pages** dialog box. For more information, see [Set compiler and build properties](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **General** property page.

1. Modify the **Incremental Link Database File** property. The default value is `$(IntDir)$(TargetName).ilk`.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## See also

[`/INCREMENTAL`](./incremental-link-incrementally.md)\
[MSVC linker reference](linking.md)\
[MSVC linker options](linker-options.md)