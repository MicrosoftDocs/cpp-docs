---
title: "/GH (Enable _pexit Hook Function) (C++) - Visual Studio"
ms.date: "12/14/2018"
f1_keywords: ["_pexit"]
helpviewer_keywords: ["/Gh compiler option [C++]", "Gh compiler option [C++]", "_pexit function", "-Gh compiler option [C++]"]
ms.assetid: 93181453-2676-42e5-bf63-3b19e07299b6
---
# /GH (Enable _pexit Hook Function)

Calls the `_pexit` function at the end of every method or function.

## Syntax

```
/GH
```

## Remarks

The `_pexit` function is not part of any library and it is up to you to provide a definition for `_pexit`.

Unless you plan to explicitly call `_pexit`, you do not need to provide a prototype. The function must appear as if it had the following prototype, and it must push the content of all registers on entry and pop the unchanged content on exit:

```
void __declspec(naked) __cdecl _pexit( void );
```

`_pexit` is similar to `_penter`; see [/Gh (Enable _penter Hook Function)](gh-enable-penter-hook-function.md) for an example of how to write a `_pexit` function.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../working-with-project-properties.md).

1. Click the **C/C++** folder.

1. Click the **Command Line** property page.

1. Type the compiler option in the **Additional Options** box.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See Also

[Compiler Options](compiler-options.md)<br/>
[Compiler Command Line Syntax](../compiler-command-line-syntax.md)