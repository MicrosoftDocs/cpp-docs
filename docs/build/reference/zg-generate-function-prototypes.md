---
description: "Learn more about: /Zg (Generate Function Prototypes)"
title: "/Zg (Generate Function Prototypes)"
ms.date: "11/04/2016"
f1_keywords: ["/zg"]
helpviewer_keywords: ["Zg compiler option [C++]", "/Zg compiler option [C++]", "function prototypes, generate function prototypes compiler option", "-Zg compiler option [C++]", "generate function prototypes compiler option"]
ms.assetid: c8df1b46-24ff-46f2-8356-e0a144b21dd2
---
# /Zg (Generate Function Prototypes)

Removed. Creates a function prototype for each function defined in the source file, but does not compile the source file.

## Syntax

```
/Zg
```

## Remarks

This compiler option is no longer available. It was removed in Visual Studio 2015. This page remains for users of older versions of Visual Studio.

The function prototype includes the function return type and an argument type list. The argument type list is created from the types of the formal parameters of the function. Any function prototypes already present in the source file are ignored.

The list of prototypes is written to standard output. You may find this list helpful to verify that actual arguments and formal parameters of a function are compatible. You can save the list by redirecting standard output to a file. Then you can use **#include** to make the list of function prototypes a part of your source file. Doing so causes the compiler to perform argument type checking.

If you use the **/Zg** option and your program contains formal parameters that have struct, enum, or union type (or pointers to such types), the declaration of each struct, enum, or union type must have a tag (name). In the following sample, the tag name is `MyStruct`.

```C
// Zg_compiler_option.c
// compile with: /Zg
typedef struct MyStruct { int i; } T2;
void f2(T2 * t) {}
```

The **/Zg** option was deprecated in Visual Studio 2005 and has been removed in Visual Studio 2015. The MSVC compiler has removed support for older, C-style code. For a list of deprecated compiler options, see **Deprecated and Removed Compiler Options** in [Compiler Options Listed by Category](compiler-options-listed-by-category.md).

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Click the **C/C++** folder.

1. Click the **Command Line** property page.

1. Type the compiler option in the **Additional Options** box.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
