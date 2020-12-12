---
description: "Learn more about: /C (Preserve Comments During Preprocessing)"
title: "/C (Preserve Comments During Preprocessing)"
ms.date: "11/04/2016"
f1_keywords: ["VC.Project.VCCLCompilerTool.KeepComments", "VC.Project.VCCLWCECompilerTool.KeepComments"]
helpviewer_keywords: ["comments, not stripping during preprocessing", "preserve comments during preprocessing", "-c compiler option [C++]", "c compiler option [C++]", "/c compiler option [C++]"]
ms.assetid: 944567ca-16bc-4728-befe-d414a7787f26
---
# /C (Preserve Comments During Preprocessing)

Preserves comments during preprocessing.

## Syntax

```
/C
```

## Remarks

This compiler option requires the **/E**, **/P**, or **/EP** option.

The following code sample will display the source code comment.

```cpp
// C_compiler_option.cpp
// compile with: /E /C /c
int i;   // a variable
```

This sample will produce the following output.

```
#line 1 "C_compiler_option.cpp"
int i;   // a variable
```

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Click the **C/C++** folder.

1. Click the **Preprocessor** property page.

1. Modify the **Keep Comments** property.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.KeepComments%2A>.

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)<br/>
[/E (Preprocess to stdout)](e-preprocess-to-stdout.md)<br/>
[/P (Preprocess to a File)](p-preprocess-to-a-file.md)<br/>
[/EP (Preprocess to stdout Without #line Directives)](ep-preprocess-to-stdout-without-hash-line-directives.md)
