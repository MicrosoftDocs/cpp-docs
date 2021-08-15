---
description: "Learn more about: `/Fi` (Preprocess output file name)"
title: "/Fi (Preprocess Output File Name)"
ms.date: 08/12/2020
f1_keywords: ["/Fi"]
helpviewer_keywords: ["Fi compiler option (C++)", "-Fi compiler option (C++)", "/Fi compiler option (C++)", "preprocessing output files, file name"]
ms.assetid: 6d0ba983-a8b7-41ec-84f5-b4688ef8efee
---
# `/Fi` (Preprocess output file name)

Specifies the name of the output file to which the [`/P` (Preprocess to a File)](p-preprocess-to-a-file.md) compiler option writes preprocessed output.

## Syntax

> **`/Fi`**_`pathname`_

### Parameters

*`pathname`*\
The relative or absolute path and filename of the output file produced by the **`/P`** compiler option. Or, the directory path for the *`.i`* output files when more than one input file is specified. Don't put a space between the **`/Fi`** option and *`pathname`*.

## Remarks

Use the **`/Fi`** compiler option in combination with the **`/P`** compiler option. If **`/P`** isn't specified, **`/Fi`** causes command line warning D9007.

If you specify only a directory path (a path that ends in a backslash **`\`**) for the *`pathname`* parameter, the base name of the source file is used as the base name of the preprocessed output file. The *`pathname`* parameter doesn't require a particular file name extension. However, an extension of ".i" is used if you don't specify a file name extension.

### Example

The following command line preprocesses *`PROGRAM.cpp`*, preserves comments, adds [`#line`](../../preprocessor/hash-line-directive-c-cpp.md) directives, and writes the result to the *`MYPROCESS.i`* file:

```cmd
CL /P /FiMYPROCESS.I PROGRAM.CPP
```

This command line preprocesses *`main.cpp`* and *`helper.cpp`* into *`main.i`* and *`helper.i`* in a subdirectory named *`preprocessed`*:

```cmd
CL /P /Fi".\\preprocessed\\" main.cpp helper.cpp
```

### To set this compiler option in the Visual Studio development environment

1. Open the source file or the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Preprocessor** property page.

1. Set the **Preprocess to a File** property to **Yes**.

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Enter the **`/Fi`** compiler option and *`pathname`* in the **Additional Options** box. Only specify a directory path, not a filename, when setting this property for a project.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[MSVC compiler options](compiler-options.md)<br/>
[`/P` (Preprocess to a file)](p-preprocess-to-a-file.md)<br/>
[Specifying the pathname](specifying-the-pathname.md)
