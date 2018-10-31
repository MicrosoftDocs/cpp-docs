---
title: "/X (Ignore Standard Include Paths)"
ms.date: "11/04/2016"
f1_keywords: ["/x", "VC.Project.VCCLCompilerTool.OVERWRITEStandardIncludePath", "VC.Project.VCCLWCECompilerTool.OVERWRITEStandardIncludePath"]
helpviewer_keywords: ["/X compiler option [C++]", "include files, ignore standard path", "-X compiler option [C++]", "include directories, ignore standard", "X compiler option", "Ignore Standard Include Paths compiler option"]
ms.assetid: 16bdf2cc-c8dc-46e4-bdcc-f3caeba5e1ef
---
# /X (Ignore Standard Include Paths)

Prevents the compiler from searching for include files in directories specified in the PATH and INCLUDE environment variables.

## Syntax

```
/X
```

## Remarks

You can use this option with the [/I (Additional Include Directories)](../../build/reference/i-additional-include-directories.md) (**/I**`directory`) option.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).

1. Click the **C/C++** folder.

1. Click the **Preprocessor** property page.

1. Modify the **Ignore Standard Include Path** property.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.IgnoreStandardIncludePath%2A>.

## Example

In the following command, `/X` tells the compiler to ignore locations specified by the PATH and INCLUDE environment variables, and `/I` specifies the directory in which to look for include files:

```
CL /X /I \ALT\INCLUDE MAIN.C
```

## See Also

[Compiler Options](../../build/reference/compiler-options.md)<br/>
[Setting Compiler Options](../../build/reference/setting-compiler-options.md)