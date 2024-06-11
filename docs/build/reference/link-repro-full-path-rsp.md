---
description: "Learn more about: /LINKREPROFULLPATHRSP (Generate file containing absolute paths of linked files)"
title: "/LINKREPROFULLPATHRSP (Generate file containing absolute paths of linked files)"
ms.date: 06/10/2024
f1_keywords: ["VC.Project.VCLinkerTool.LinkReproFullPathRSP", "/LINKREPROFULLPATHRSP"]
helpviewer_keywords: ["/LINKREPROFULLPATHRSP linker option", "-LINKREPROFULLPATHRSP linker option", "LINKREPROFULLPATHRSP linker option"]
---
# `/LINKREPROFULLPATHRSP` (Generate file containing absolute paths of linked files)

Generates a response file (.RSP) containing the absolute paths of all the files the linker took as input.

This flag was introduced in Visual Studio 2022 version 17.11.

## Syntax

> **`/LINKREPROFULLPATHRSP:filename`**

## Remarks

Rather than generating a full link repro like `/LINKREPRO` which copies all the files to a directory and creating a response file with relative paths to that directory, this option writes the names of the files used during linking to the specified file.

For example, given:
- a directory `c:\temp\test` that contains the files `test.cpp`, `f1.cpp`, `f2.cpp`
- the linker command line: `link f1.obj f2.obj test.obj /out:test.exe /LINKREPROFULLPATHRSP:test.rsp`
The linker produces `test.rsp` containing the following lines to reflect the fully qualified paths of the input files:

```cmd
"c:\temp\test\f1.obj"
"c:\temp\test\f2.obj"
"c:\temp\test\test.obj"
```

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).
1. Select the **Configuration Properties** > **Linker** > **Command Line** property page.
1. Enter *`/LINKREPROFULLPATHRSP:file.rsp`* into **Additional Options**. Choose **OK** or **Apply** to apply the change.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.additionaloptions>.

## See also

[MSVC linker reference](linking.md)\
[MSVC linker options](linker-options.md)
