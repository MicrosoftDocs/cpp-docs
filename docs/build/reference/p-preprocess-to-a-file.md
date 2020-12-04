---
description: "Learn more about: /P (Preprocess to a File)"
title: "/P (Preprocess to a File)"
ms.date: "11/04/2016"
f1_keywords: ["VC.Project.VCCLCompilerTool.GeneratePreprocessedFile", "/p", "VC.Project.VCCLWCECompilerTool.GeneratePreprocessedFile"]
helpviewer_keywords: ["/P compiler option [C++]", "-P compiler option [C++]", "P compiler option [C++]", "output files, preprocessor", "preprocessing output files"]
ms.assetid: 123ee54f-8219-4a6f-9876-4227023d83fc
---
# /P (Preprocess to a File)

Preprocesses C and C++ source files and writes the preprocessed output to a file.

## Syntax

```
/P
```

## Remarks

The file has the same base name as the source file and an .i extension. In the process, all preprocessor directives are carried out, macro expansions are performed, and comments are removed. To preserve comments in the preprocessed output, use the [/C (Preserve Comments During Preprocessing)](c-preserve-comments-during-preprocessing.md) option along with **/P**.

**/P** adds `#line` directives to the output, at the beginning and end of each included file and around lines removed by preprocessor directives for conditional compilation. These directives renumber the lines of the preprocessed file. As a result, errors generated during later stages of processing refer to the line numbers of the original source file rather than lines in the preprocessed file. To suppress the generation of `#line` directives, use [/EP (Preprocess to stdout Without #line Directives)](ep-preprocess-to-stdout-without-hash-line-directives.md) as well as **/P**.

The **/P** option suppresses compilation. It does not produce an .obj file, even if you use [/Fo (Object File Name)](fo-object-file-name.md). You must resubmit the preprocessed file for compilation. **/P** also suppresses the output files from the **/FA**, **/Fa**, and **/Fm** options. For more information, see [/FA, /Fa (Listing File)](fa-fa-listing-file.md) and [/Fm (Name Mapfile)](fm-name-mapfile.md).

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Click the **C/C++** folder.

1. Click the **Preprocessor** property page.

1. Modify the **Generate Preprocessed File** property.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.GeneratePreprocessedFile%2A>.

## Example

The following command line preprocesses `ADD.C`, preserves comments, adds `#line` directives, and writes the result to a file, `ADD.I`:

```
CL /P /C ADD.C
```

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)<br/>
[/Fi (Preprocess Output File Name)](fi-preprocess-output-file-name.md)
