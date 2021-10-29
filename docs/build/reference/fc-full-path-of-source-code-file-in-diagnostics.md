---
description: "Learn more about: /FC (Full path of source code file in diagnostics)"
title: "/FC (Full path of source code file in diagnostics)"
ms.date: 04/26/2021
f1_keywords: ["VC.Project.VCCLCompilerTool.UseFullPaths", "/FC", "-FC"]
helpviewer_keywords: ["/FC compiler option [C++]", "-FC compiler option [C++]"]
ms.assetid: 1f11414e-cb42-421b-be68-9d369aab036b
---
# `/FC` (Full path of source code file in diagnostics)

Causes the compiler to display the full path of source code files passed to the compiler in diagnostics.

## Syntax

> **`/FC`**

## Remarks

Consider the following code sample, where the source file is located in *`C:\test\compiler_option_FC.cpp`*:

```cpp
// compiler_option_FC.cpp

int main( ) {
   int i   // C2143
}
```

Without **`/FC`**, the compiler output looks similar to this diagnostic text:

- compiler_option_FC.cpp(5): error C2143: syntax error: missing ';' before '}'

With **`/FC`**, the compiler output looks similar to this diagnostic text:

::: moniker range="<=msvc-150"

- c:\test\compiler_option_fc.cpp(5): error C2143: syntax error: missing ';' before '}'

::: moniker-end
::: moniker range=">=msvc-160"

- C:\test\compiler_option_FC.cpp(5): error C2143: syntax error: missing ';' before '}'

::: moniker-end

**`/FC`** is also needed if you want to see the full path of a file name when using the `__FILE__` macro. For more information about `__FILE__`, see [Predefined macros](../../preprocessor/predefined-macros.md).

The **`/FC`** option is implied by **`/ZI`**. For more information about **`/ZI`**, see [`/Z7, /Zi, /ZI` (Debug information format)](z7-zi-zi-debug-information-format.md).

In Visual Studio 2017 and earlier versions, **`/FC`** outputs full paths in lower case. Starting in Visual Studio 2019, **`/FC`** uses the same casing as the file system for full paths.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Advanced** property page.

1. Modify the **Use Full Paths** property.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.UseFullPaths%2A>.

## See also

[MSVC compiler options](compiler-options.md)\
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)
