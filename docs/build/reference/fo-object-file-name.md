---
title: "/Fo (Object File Name)"
ms.date: "11/04/2016"
f1_keywords: ["/Fo", "VC.Project.VCCLCompilerTool.ObjectFile", "VC.Project.VCCLWCECompilerTool.ObjectFile"]
helpviewer_keywords: ["Fo compiler option [C++]", "object files, naming", "/Fo compiler option [C++]", "-Fo compiler option [C++]"]
ms.assetid: 0e6d593e-4e7f-4990-9e6e-92e1dcbcf6e6
---
# /Fo (Object File Name)

Specifies an object (.obj) file name or directory to be used instead of the default.

## Syntax

```
/Fopathname
```

## Remarks

If you do not use this option, the object file uses the base name of the source file and the .obj extension. You can use any name and extension you want, but the recommended convention is to use .obj.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../working-with-project-properties.md).

1. Click the **C/C++** folder.

1. Click the **Output Files** property page.

1. Modify the **Object File Name** property.  In the development environment, the object file must have an extension of .obj.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ObjectFile%2A>.

## Example

The following command line creates an object file named THIS.obj in an existing directory, \OBJECT, on drive B.

```
CL /FoB:\OBJECT\ THIS.C
```

## See Also

[Output-File (/F) Options](output-file-f-options.md)<br/>
[Compiler Options](compiler-options.md)<br/>
[Setting Compiler Options](setting-compiler-options.md)<br/>
[Specifying the Pathname](specifying-the-pathname.md)