---
description: "Learn more about: /EP (Preprocess to stdout Without #line Directives)"
title: "/EP (Preprocess to stdout Without #line Directives)"
ms.date: "11/04/2016"
f1_keywords: ["/ep", "VC.Project.VCCLCompilerTool.GeneratePreprocessedFileNoLines"]
helpviewer_keywords: ["copy preprocessor output to stdout", "preprocessor output, copy to stdout", "-EP compiler option [C++]", "EP compiler option [C++]", "/EP compiler option [C++]"]
ms.assetid: 6ec411ae-e33d-4ef5-956e-0054635eabea
---
# /EP (Preprocess to stdout Without #line Directives)

Preprocesses C and C++ source files and copies the preprocessed files to the standard output device.

## Syntax

```
/EP
```

## Remarks

In the process, all preprocessor directives are carried out, macro expansions are performed, and comments are removed. To preserve comments in the preprocessed output, use the [/C (Preserve Comments During Preprocessing)](c-preserve-comments-during-preprocessing.md) option with **/EP**.

The **/EP** option suppresses compilation. You must resubmit the preprocessed file for compilation. **/EP** also suppresses the output files from the **/FA**, **/Fa**, and **/Fm** options. For more information, see [/FA, /Fa (Listing File)](fa-fa-listing-file.md) and [/Fm (Name Mapfile)](fm-name-mapfile.md).

Errors generated during later stages of processing refer to the line numbers of the preprocessed file rather than the original source file. If you want line numbers to refer to the original source file, use [/E (Preprocess to stdout)](e-preprocess-to-stdout.md) instead. The **/E** option adds `#line` directives to the output for this purpose.

To send the preprocessed output, with `#line` directives, to a file, use the [/P (Preprocess to a File)](p-preprocess-to-a-file.md) option instead.

To send the preprocessed output to stdout, with `#line` directives, use **/P** and **/EP** together.

You cannot use precompiled headers with the **/EP** option.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Click the **C/C++** folder.

1. Click the **Preprocessor** property page.

1. Modify the **Generate Preprocessed File** property.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.GeneratePreprocessedFile%2A>.

## Example

The following command line preprocesses file `ADD.C`, preserves comments, and displays the result on the standard output device:

```
CL /EP /C ADD.C
```

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
