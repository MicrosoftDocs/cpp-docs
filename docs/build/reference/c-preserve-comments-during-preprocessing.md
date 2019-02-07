---
title: "/C (Preserve Comments During Preprocessing)"
ms.date: "11/04/2016"
f1_keywords: ["VC.Project.VCCLCompilerTool.KeepComments", "/c", "VC.Project.VCCLWCECompilerTool.KeepComments"]
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

```
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

1. Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).

1. Click the **C/C++** folder.

1. Click the **Preprocessor** property page.

1. Modify the **Keep Comments** property.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.KeepComments%2A>.

## See also

- [Compiler Options](../../build/reference/compiler-options.md)
- [Setting Compiler Options](../../build/reference/setting-compiler-options.md)
- [/E (Preprocess to stdout)](../../build/reference/e-preprocess-to-stdout.md)
- [/P (Preprocess to a File)](../../build/reference/p-preprocess-to-a-file.md)
- [/EP (Preprocess to stdout Without #line Directives)](../../build/reference/ep-preprocess-to-stdout-without-hash-line-directives.md)
