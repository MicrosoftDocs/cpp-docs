---
title: "/NOPDB"
description: "The /NOPDB option keeps DUMPBIN from loading and searching PDB files for symbol information."
ms.date: "12/04/2019"
f1_keywords: ["/NOPDB"]
helpviewer_keywords: ["/NOPDB dumpbin option", "/NOPDB"]
---
# /NOPDB

Tells DUMPBIN not to load and search program database (PDB) files for symbol information.

## Syntax

> **/NOPDB**

## Remarks

By default, DUMPBIN attempts to load PDB files for its target executables. DUMPBIN uses this information to match addresses to symbol names. The process can be time-consuming if the PDB files are large, or must be loaded from a remote server. The **/NOPDB** option tells DUMPBIN to skip this step. It only prints the addresses and symbol information available in the executable.

### To set the /NOPDB linker option in Visual Studio

1. Open the **Property Pages** dialog box for the project. For more information, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Command Line** property page.

1. In the **Additional options** box, add the **/NOPDB** option. Choose **OK** or **Apply** to save your changes.

### To set this linker option programmatically

- This option doesn't have a programmatic equivalent.

## See also

[DUMPBIN command line](dumpbin-command-line.md)\
[DUMPBIN options](dumpbin-options.md)\
[DUMPBIN reference](dumpbin-reference.md)
