---
title: "/Fp (Name .pch file)"
description: "Use the /Fp compiler option to specify the precompiled header file name."
ms.date: "05/31/2019"
f1_keywords: ["VC.Project.VCCLCompilerTool.PrecompiledHeaderFile", "VC.Project.VCCLWCECompilerTool.PrecompiledHeaderFile"]
helpviewer_keywords: ["Fp compiler option [C++]", "-Fp compiler option [C++]", "naming precompiler header files", "PCH files, naming", "names [C++], PCH", ".pch files, naming", "precompiled header files, naming", "/Fp compiler option [C++]"]
ms.assetid: 0fcd9cbd-e09f-44d3-9715-b41efb5d0be2
---
# /Fp (Name .pch file)

Provides a path name for a precompiled header instead of using the default path name.

## Syntax

> **/Fp**<em>pathname</em>

## Remarks

Use the **/Fp** option with [/Yc (Create Precompiled Header File)](yc-create-precompiled-header-file.md) or [/Yu (Use Precompiled Header File)](yu-use-precompiled-header-file.md) to specify the path and file name for the precompiled header (PCH) file. By default, the **/Yc** option creates a PCH file name by using the base name of the source file and a *pch* extension.

If you don't specify an extension as part of the *pathname*, an extension of *pch* is assumed. When you specify a directory name by use of a slash (**/**) at the end of *pathname*, the default file name is vc*version*0.pch, where *version* is the major version of the Visual Studio toolset. This directory must exist, or error C1083 is generated.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Precompiled Headers** property page.

1. Modify the **Precompiled Header Output File** property.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## Examples

To create a separate named version of the precompiled header file for the debug build of your program, you can specify a command such as:

```CMD
CL /DDEBUG /Zi /Yc /FpDPROG.PCH PROG.CPP
```

The following command specifies the use of a precompiled header file named MYPCH.pch. The compiler precompiles the source code in PROG.cpp through the end of MYAPP.h, and puts the precompiled code in MYPCH.pch. It then uses the content of MYPCH.pch and compiles the rest of PROG.cpp to create an .obj file. The output of this example is a file named PROG.exe.

```CMD
CL /YuMYAPP.H /FpMYPCH.PCH PROG.CPP
```

## See also

[Output-File (/F) Options](output-file-f-options.md)<br/>
[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)<br/>
[Specifying the Pathname](specifying-the-pathname.md)
