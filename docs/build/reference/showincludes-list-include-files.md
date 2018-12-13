---
title: "/showIncludes (List Include Files) (C++) - Visual Studio"
ms.date: "12/14/2018"
f1_keywords: ["VC.Project.VCCLWCECompilerTool.ShowIncludes", "VC.Project.VCCLCompilerTool.ShowIncludes", "/showincludes"]
helpviewer_keywords: ["include files", "/showIncludes compiler option [C++]", "include files, displaying in compilation", "-showIncludes compiler option [C++]", "showIncludes compiler option [C++]"]
ms.assetid: 0b74b052-f594-45a6-a7c7-09e1a319547d
---
# /showIncludes (List Include Files)

Causes the compiler to output a list of the include files. Nested include files are also displayed (files that are included from the files that you include).

## Syntax

```
/showIncludes
```

## Remarks

When an include file is encountered during compilation, a message is output, for example:

```
Note: including file: d:\MyDir\include\stdio.h
```

Nested include files are indicated by an indentation, one space for each level of nesting, for example:

```
Note: including file: d:\temp\1.h
Note: including file:  d:\temp\2.h
```

In this case, `2.h` was included from within `1.h`, hence the indentation.

The **/showIncludes** option emits to `stderr`, not `stdout`.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../working-with-project-properties.md).

1. Click the **C/C++** folder.

1. Click the **Advanced** property page.

1. Modify the **Show Includes** property.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ShowIncludes%2A>.

## See Also

[Compiler Options](compiler-options.md)<br/>
[Compiler Command Line Syntax](../compiler-command-line-syntax.md)