---
title: "/NOPDB"
ms.date: "10/24/2019"
f1_keywords: ["/sourcelink"]
helpviewer_keywords: ["/NOPDB dumpbin option", "/NOPDB"]
---
# /NOPDB option

Tells DUMPBIN not to load and search debug information (PDB) files for symbol information.

## Syntax

> **/NOPDB**

## Remarks

By default, DUMPBIN attempts to load debug information from PDB files to provide friendly names for symbols. This can be time-consuming if the information must be loaded from a remote server. The /NOPDB option skips this step, and causes DUMPBIN to only output the symbol information in the object file, library, executable, or DLL.

### To set the /NOPDB linker option in Visual Studio

1. Open the **Property Pages** dialog box for the project. For more information, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Command Line** property page.

1. In the **Additional options** box, add **/NOPDB** and then choose **OK** or **Apply** to save your changes.

### To set this linker option programmatically

- This option does not have a programmatic equivalent.

## See also

[DUMPBIN command line](dumpbin-command-line.md)\
[DUMPBIN options](dumpbin-options.md)\
[DUMPBIN reference](dumpbin-reference.md)
