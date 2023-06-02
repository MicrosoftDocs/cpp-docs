---
description: "Learn more about: /jumptablerdata (Specify where switch case jump tables are placed)"
title: "/jumptablerdata (Specify the location of switch case jump tables)"
ms.date: "11/04/2016"
f1_keywords: ["/jumptable"]
helpviewer_keywords: ["-jumptablerdata compiler option [C++]", "/jumptablerdata compiler option [C++]"]
---
# /jumptablerdata (specify switch case jump table section)

Forces writes to the program database (PDB) file—created by [/Zi](z7-zi-zi-debug-information-format.md) or [/ZI](z7-zi-zi-debug-information-format.md)—to be serialized through MSPDBSRV.EXE.

## Syntax

```cpp
/jumptablerdata
```

## Remarks

This flag allows the jump tables generated for switch case statements to be placed in the `.rdata` section instead of the default, which is along with the code in `.text` section. This prevents the jump table from being loaded into both Icache and Dcache, potentially increasing performance.

This flag only is relevant for x64 code.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Modify the **Additional Options** property to include `/jumptablerdata` and then choose **OK**.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[MSVC Compiler Options](compiler-options.md)\
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
