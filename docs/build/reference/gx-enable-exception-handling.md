---
description: "Learn more about: /GX (Enable Exception Handling)"
title: "/GX (Enable Exception Handling)"
ms.date: "11/19/2019"
f1_keywords: ["/gx"]
helpviewer_keywords: ["exception handling, enabling", "/GX compiler option [C++]", "-GX compiler option [C++]", "cl.exe compiler, exception handling", "enable exception handling compiler option [C++]", "GX compiler option [C++]"]
ms.assetid: 933b43ba-de77-4ff8-a48b-7074de90bc1c
---
# /GX (Enable Exception Handling)

Deprecated. Enables synchronous exception handling using the assumption that functions declared by using `extern "C"` never throw an exception.

## Syntax

```
/GX
```

## Remarks

**/GX** is deprecated. Use the equivalent [/EHsc](eh-exception-handling-model.md) option instead. For a list of deprecated compiler options, see the **Deprecated and Removed Compiler Options** section in [Compiler Options Listed by Category](compiler-options-listed-by-category.md).

By default, **/EHsc**, the equivalent of **/GX**, is in effect when you compile by using the Visual Studio development environment. When using the command line tools, no exception handling is specified. This is the equivalent of **/GX-**.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. In the navigation pane, choose **Configuration Properties**, **C/C++**, **Command Line**.

1. Type the compiler option in the **Additional Options** box.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)<br/>
[/EH (Exception Handling Model)](eh-exception-handling-model.md)
