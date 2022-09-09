---
description: "Learn more about: /INCREMENTAL (Link incrementally)"
title: "/INCREMENTAL (Link incrementally)"
ms.date: 09/07/2022
f1_keywords: ["/incremental", "VC.Project.VCLinkerTool.LinkIncremental"]
helpviewer_keywords: ["/INCREMENTAL linker option", "-INCREMENTAL linker option", "INCREMENTAL linker option", "link incrementally option", "LINK tool [C++], options for full linking", "incremental linking"]
ms.assetid: 135656ff-94fa-4ad4-a613-22e1a2a5d16b
---
# `/INCREMENTAL` (Link incrementally)

Specifies whether to link incrementally or always perform a full link.

## Syntax

> **`/INCREMENTAL`**\[**`:NO`**]

## Remarks

The **`/INCREMENTAL`** linker option controls how the linker handles incremental linking.

By default, the linker runs in incremental mode. To override a default incremental link, specify **`/INCREMENTAL:NO`**.

An incrementally linked program is functionally equivalent to a program that is non-incrementally linked. However, because it's prepared for subsequent incremental links, an incrementally linked executable, static library, or dynamic-link library file:

- Is larger than a non-incrementally linked program because of padding of code and data. Padding enables the linker to increase the size of functions and data without recreating the file.

- May contain jump thunks to handle relocation of functions to new addresses.

   > [!NOTE]
   > To ensure that your final release build does not contain padding or thunks, link your program non-incrementally.

To link incrementally regardless of the default, specify **`/INCREMENTAL`**. When this option is selected, the linker issues a warning if it can't link incrementally, and then links the program non-incrementally. Certain options and situations override **`/INCREMENTAL`**.

Most programs can be linked incrementally. However, some changes are too great, and some options are incompatible with incremental linking. LINK performs a full link if any of the following options are specified:

- Link Incrementally isn't selected (**`/INCREMENTAL:NO`**)

- **`/OPT:REF`** is selected

- **`/OPT:ICF`** is selected

- **`/OPT:LBR`** is selected

- **`/ORDER`** is selected

**`/INCREMENTAL`** is implied when [`/DEBUG`](debug-generate-debug-info.md) is specified.

Additionally, LINK performs a full link if any of the following situations occur:

- The incremental status (*`.ilk`*) file is missing. (LINK creates a new *`.ilk`* file in preparation for subsequent incremental linking.)

- There's no write permission for the *`.ilk`* file. (LINK ignores the *`.ilk`* file and links non-incrementally.)

- The *`.exe`* or *`.dll`* output file is missing.

- The timestamp of the *`.ilk`*, *`.exe`*, or *`.dll`* is changed.

- A LINK option is changed. Most LINK options, when changed between builds, cause a full link.

- An object (*`.obj`*) file is added or omitted.

An incremental link creates or updates an incremental link database *`.ilk`* file. You can specify the name and location of this file by using the [`/ILK` (Name incremental database file)](./ilk-name-incremental-database-file.md) linker option. For more information about the *`.ilk`* file, see [`.ilk` files as linker input](./dot-ilk-files-as-linker-input.md).

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **General** property page.

1. Modify the **Enable Incremental Linking** property.

### To set this linker option programmatically

1. See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.LinkIncremental%2A>.

## See also

[MSVC linker reference](linking.md)\
[MSVC linker options](linker-options.md)\
[`.ilk` files as linker input](./dot-ilk-files-as-linker-input.md)
