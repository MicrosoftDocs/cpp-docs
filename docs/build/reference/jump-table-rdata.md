---
description: "Learn more about: /jumptablerdata (Place switch case jump tables in .rdata)"
title: "/jumptablerdata (put switch case jump tables in `.rdata`)"
ms.date: 06/02/2023
f1_keywords: ["/jumptable"]
helpviewer_keywords: ["-jumptablerdata compiler option [C++]", "/jumptablerdata compiler option [C++]"]
---
# /jumptablerdata (put switch case jump tables in `.rdata`)

Puts the generated switch case jump tables in the `.rdata` section instead of alongside code in the `.text` section.

## Syntax

```cpp
/jumptablerdata
```

## Remarks

Putting jump tables generated for switch case statements in the `.rdata` section prevents the jump table from being loaded into both the instruction cache (iCache) and data cache (dCache), potentially increasing performance. The `.rdata` section is where const initialized data is stored.

> [!IMPORTANT]
> This flag only applies to x64 code. This flag was introduced in Visual Studio 17.7.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Modify the **Additional Options** property to include `/jumptablerdata` and then choose **OK**.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[MSVC Compiler Options](compiler-options.md)\
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
