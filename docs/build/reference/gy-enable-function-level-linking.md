---
description: "Learn more about: /Gy (Enable Function-Level Linking)"
title: "/Gy (Enable Function-Level Linking)"
ms.date: "11/04/2016"
f1_keywords: ["VC.Project.VCCLCompilerTool.EnableFunctionLevelLinking", "/gy", "VC.Project.VCCLWCECompilerTool.EnableFunctionLevelLinking"]
helpviewer_keywords: ["enable function-level linking compiler option [C++]", "COMDAT function", "Gy compiler option [C++]", "-Gy compiler option [C++]", "/Gy compiler option [C++]", "packaged functions"]
ms.assetid: 0d3cf14c-ed7d-4ad3-b4b6-104e56f61046
---
# /Gy (Enable Function-Level Linking)

Allows the compiler to package individual functions in the form of packaged functions (COMDATs).

## Syntax

```
/Gy[-]
```

## Remarks

The linker requires that functions be packaged separately as COMDATs to exclude or order individual functions in a DLL or .exe file.

You can use the linker option [/OPT (Optimizations)](opt-optimizations.md) to exclude unreferenced packaged functions from the .exe file.

You can use the linker option [/ORDER (Put Functions in Order)](order-put-functions-in-order.md) to include packaged functions in a specified order in the .exe file.

Inline functions are always packaged if they are instantiated as calls (which occurs, for example, if inlining is off or you take a function address). In addition, C++ member functions defined in the class declaration are automatically packaged; other functions are not, and selecting this option is required to compile them as packaged functions.

> [!NOTE]
> The [/ZI](z7-zi-zi-debug-information-format.md) option, used for Edit and Continue, automatically sets the **/Gy** option.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Click the **C/C++** folder.

1. Click the **Code Generation** property page.

1. Modify the **Enable Function-Level Linking** property.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.EnableFunctionLevelLinking%2A>.

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
