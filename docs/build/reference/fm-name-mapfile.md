---
description: "Learn more about: /Fm (Name Mapfile)"
title: "/Fm (Name Mapfile)"
ms.date: "11/04/2016"
f1_keywords: ["/fm"]
helpviewer_keywords: ["-Fm compiler option [C++]", "mapfiles [C++], creating linker", "files [C++], creating map", "Fm compiler option [C++]", "/Fm compiler option [C++]"]
ms.assetid: 8154448a-93a7-4546-8e4c-5c44d0aff45d
---
# /Fm (Name Mapfile)

Tells the linker to produce a mapfile containing a list of segments in the order in which they appear in the corresponding .exe file or DLL.

## Syntax

```
/Fmpathname
```

## Remarks

By default, the mapfile is given the base name of the corresponding C or C++ source file with a .MAP extension.

Specifying **/Fm** has the same effect as if you had specified the [/MAP (Generate Mapfile)](map-generate-mapfile.md) linker option.

If you specify [/c (Compile Without Linking)](c-compile-without-linking.md) to suppress linking, **/Fm** has no effect.

Global symbols in a mapfile usually have one or more leading underscores because the compiler adds a leading underscore to variable names. Many global symbols that appear in the mapfile are used internally by the compiler and the standard libraries.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Click the **C/C++** folder.

1. Click the **Command Line** property page.

1. Type the compiler option in the **Additional Options** box.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[Output-File (/F) Options](output-file-f-options.md)<br/>
[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)<br/>
[Specifying the Pathname](specifying-the-pathname.md)
