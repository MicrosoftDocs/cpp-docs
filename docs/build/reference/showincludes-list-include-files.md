---
description: "Learn more about: /showIncludes (List include files)"
title: "/showIncludes (List include files)"
ms.date: 05/24/2022
f1_keywords: ["VC.Project.VCCLWCECompilerTool.ShowIncludes", "VC.Project.VCCLCompilerTool.ShowIncludes", "/showincludes"]
helpviewer_keywords: ["include files", "/showIncludes compiler option [C++]", "include files, displaying in compilation", "-showIncludes compiler option [C++]", "showIncludes compiler option [C++]"]
---
# `/showIncludes` (List include files)

Causes the compiler to output a list of the include files. The option also displays nested include files, that is, the files included by the files that you include.

## Syntax

> **`/showIncludes`**

## Remarks

When the compiler comes to an include file during compilation, a message is output, as in this example:

```cmd
Note: including file: d:\MyDir\include\stdio.h
```

Nested include files are indicated by an indentation, one space for each level of nesting, as in this example:

```cmd
Note: including file: d:\temp\1.h
Note: including file:  d:\temp\2.h
```

In this case, *`2.h`* was included from within *`1.h`*, causing the indentation.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Advanced** property page.

1. Modify the **Show Includes** property.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ShowIncludes%2A>.

## See also

[MSVC compiler options](compiler-options.md)\
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)
