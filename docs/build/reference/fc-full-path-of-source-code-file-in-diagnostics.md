---
title: "-FC (Full Path of Source Code File in Diagnostics) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "cpp-tools"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCCLCompilerTool.UseFullPaths"
  - "/FC"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/FC compiler option [C++]"
  - "-FC compiler option [C++]"
ms.assetid: 1f11414e-cb42-421b-be68-9d369aab036b
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: 
  - "cplusplus"
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

- c:\test\compiler_option_FC.cpp(5) : error C2143: syntax error : missing ';' before '}'

**/FC** is also needed if you want to see the full path of a file name when using the &#95;&#95;FILE&#95;&#95; macro.  See [Predefined Macros](../../preprocessor/predefined-macros.md) for more information on &#95;&#95;FILE&#95;&#95;.

The **/FC** option is implied by **/ZI**. For more information about **/ZI**, see [/Z7, /Zi, /ZI (Debug Information Format)](../../build/reference/z7-zi-zi-debug-information-format.md).

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).

1. Expand the **Configuration Properties** node.

1. Expand the **C/C++** node.

1. Select the **Advanced** property page.

1. Modify the **Use Full Paths** property.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.UseFullPaths%2A>.

## See Also

[Compiler Options](../../build/reference/compiler-options.md)   
[Setting Compiler Options](../../build/reference/setting-compiler-options.md)