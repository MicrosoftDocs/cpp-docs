---
description: "Learn more about: /FC (Full Path of Source Code File in Diagnostics)"
title: "/FC (Full Path of Source Code File in Diagnostics)"
ms.date: "11/04/2016"
f1_keywords: ["VC.Project.VCCLCompilerTool.UseFullPaths", "/FC"]
helpviewer_keywords: ["/FC compiler option [C++]", "-FC compiler option [C++]"]
ms.assetid: 1f11414e-cb42-421b-be68-9d369aab036b
---
# /FC (Full Path of Source Code File in Diagnostics)

Causes the compiler to display the full path of source code files passed to the compiler in diagnostics.

## Syntax

> /FC

## Remarks

Consider the following code sample:

```cpp
// compiler_option_FC.cpp
int main( ) {
   int i   // C2143
}
```

Without **/FC**, the diagnostic text would look similar to this diagnostic text:

- compiler_option_FC.cpp(5) : error C2143: syntax error : missing ';' before '}'

With **/FC**, the diagnostic text would look similar to this diagnostic text:

- c:\test\compiler_option_fc.cpp(5) : error C2143: syntax error : missing ';' before '}'

**/FC** is also needed if you want to see the full path of a file name when using the &#95;&#95;FILE&#95;&#95; macro. See [Predefined Macros](../../preprocessor/predefined-macros.md) for more information on &#95;&#95;FILE&#95;&#95;.

The **/FC** option is implied by **/ZI**. For more information about **/ZI**, see [/Z7, /Zi, /ZI (Debug Information Format)](z7-zi-zi-debug-information-format.md).

**/FC** outputs full paths in lower case.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Advanced** property page.

1. Modify the **Use Full Paths** property.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.UseFullPaths%2A>.

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
