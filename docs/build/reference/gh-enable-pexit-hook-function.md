---
title: "/GH (Enable _pexit hook function)"
description: "Describes the /GH compiler option to set a local _pexit hook function."
ms.date: "07/06/2020"
f1_keywords: ["_pexit"]
helpviewer_keywords: ["/Gh compiler option [C++]", "Gh compiler option [C++]", "_pexit function", "-Gh compiler option [C++]"]
ms.assetid: 93181453-2676-42e5-bf63-3b19e07299b6
---
# /GH (Enable _pexit hook function)

Calls the `_pexit` function at the end of every method or function.

## Syntax

> **`/GH`**

## Remarks

The `_pexit` function isn't part of any library. It's up to you to provide a definition for `_pexit`.

Unless you plan to explicitly call `_pexit`, you don't need to provide a prototype. The function must push the content of all registers on entry and pop the unchanged content on exit. It must appear as if it had the following prototype:

```cpp
void __declspec(naked) __cdecl _pexit( void );
```

This declaration isn't available for 64-bit projects.

`_pexit` is similar to `_penter`; see [`/Gh` (Enable _penter Hook Function)](gh-enable-penter-hook-function.md) for an example of how to write a `_penter` function.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Enter the compiler option in the **Additional Options** box.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[MSVC compiler options](compiler-options.md)<br/>
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)<br/>
[`/Gh` (Enable _penter hook function)](gh-enable-penter-hook-function.md)
