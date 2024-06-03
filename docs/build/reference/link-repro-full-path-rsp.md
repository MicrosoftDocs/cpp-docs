---
description: "Learn more about: /ASSEMBLYDEBUG (Add DebuggableAttribute)"
title: "/LINKREPROFULLPATHRSP (Generate absolute paths for linked files)"
ms.date: 06/3/2024
f1_keywords: ["VC.Project.VCLinkerTool.LinkReproFullPathRSP", "/LINKREPROFULLPATHRSP"]
helpviewer_keywords: ["/LINKREPROFULLPATHRSP linker option", "-LINKREPROFULLPATHRSP linker option", "LINKREPROFULLPATHRSP linker option"]
---
# `/LINKREPROFULLPATHRSP` (Generate absolute paths for linked files)

 Generates a response file (.RSP) containing the absolute paths to all the files that the linker took as input.

This flag was introduced in Visual Studio 2022 version 17.11 Preview 2.

## Syntax

> **`/LINKREPROFULLPATHRSP:filename`**

## Remarks

Rather than generating a full link repro like `/LINKREPRO` (copying all the files to a directory and creating a response file with relative paths to that directory), this option writes the names of the files used during linking to the specified file.

For example, given a directory `c:\temp\test` which contains the files `test.cpp`, `f1.cpp`, `f2.cpp` and the linker command line: `link f1.obj f2.obj test.obj /out:test.exe /LINKREPROFULLPATHRSP:test.rsp`, the file `test.rsp` that the linker generates contains the following lines to reflect the fully qualified paths of the input files:

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

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AssemblyDebug%2A>.

## See also

[MSVC linker reference](linking.md)\
[MSVC linker options](linker-options.md)
