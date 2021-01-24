---
description: "Learn more about: /D (Preprocessor Definitions)"
title: "/D (Preprocessor Definitions)"
ms.date: "09/18/2019"
f1_keywords: ["VC.Project.VCNMakeTool.PreprocessorDefinitions", "VC.Project.VCCLCompilerTool.PreprocessorDefinitions", "/d"]
helpviewer_keywords: ["preprocessor definition symbols", "constants, defining", "macros, compiling", "/D compiler option [C++]", "-D compiler option [C++]", "D compiler option [C++]"]
ms.assetid: b53fdda7-8da1-474f-8811-ba7cdcc66dba
---
# /D (Preprocessor Definitions)

Defines a preprocessing symbol for a source file.

## Syntax

> **/D**\[ ]_name_\[`=` \| `#` \[{ *string* \| *number* }] ]\
> **/D**\[ ]`"`_name_\[`=` \| `#` \[{ *string* \| *number* }] ]`"`

## Remarks

You can use this symbol together with `#if` or `#ifdef` to compile source code conditionally. The symbol definition remains in effect until it's redefined in the code, or is undefined in the code by an `#undef` directive.

**/D** has the same effect as a `#define` directive at the beginning of a source code file. The difference is that **/D** strips quotation marks on the command line, and a `#define` directive keeps them. You can have whitespace between the **/D** and the symbol. There can't be whitespace between the symbol and the equals sign, or between the equals sign and any value assigned.

By default, the value associated with a symbol is 1. For example, `/D name` is equivalent to `/D name=1`. In the example at the end of this article, the definition of `TEST` is shown to print `1`.

Compiling by using `/D name=` causes the symbol *name* to have no associated value. Although the symbol can still be used to conditionally compile code, it otherwise evaluates to nothing. In the example, if you compile by using `/DTEST=`, an error occurs. This behavior resembles the use of `#define` with or without a value.

The **/D** option doesn't support function-like macro definitions. To insert definitions that can't be defined on the command line, consider the [/FI (Name forced include file)](fi-name-forced-include-file.md) compiler option.

You can use **/D** multiple times on the command line to define additional symbols. If the same symbol is defined more than once, the last definition is used.

This command defines the symbol DEBUG in TEST.c:

```cmd
CL /DDEBUG TEST.C
```

This command removes all occurrences of the keyword `__far` in TEST.c:

```cmd
CL /D __far= TEST.C
```

The **CL** environment variable can't be set to a string that contains the equal sign. To use **/D** together with the **CL** environment variable, you must specify the number sign (`#`) instead of the equal sign:

```cmd
SET CL=/DTEST#0
```

When you define a preprocessing symbol at the command prompt, consider both compiler parsing rules and shell parsing rules. For example, to define a percent-sign preprocessing symbol (`%`) in your program, specify two percent-sign characters (`%%`) at the command prompt. If you specify only one, a parsing error is emitted.

```cmd
CL /DTEST=%% TEST.C
```

### To set this compiler option in the Visual Studio development environment

1. Open the project **Property Pages** dialog box. For more information, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. In the left pane, select **Configuration Properties**, **C/C++**, **Preprocessor**.

1. In the right pane, in the right-hand column of the **Preprocessor Definitions** property, open the drop-down menu and choose **Edit**.

1. In the **Preprocessor Definitions** dialog box, add (one per line), modify, or delete one or more definitions. Choose **OK** to save your changes.

   You don't need to include the '/D' option prefix on the definitions you specify here. In the property page, definitions are separated by semicolons (`;`).

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.PreprocessorDefinitions%2A>.

## Example

```cpp
// cpp_D_compiler_option.cpp
// compile with: cl /EHsc /DTEST cpp_D_compiler_option.cpp
#include <stdio.h>

int main( )
{
#ifdef TEST
    printf_s("TEST defined %d\n", TEST);
#else
    printf_s("TEST not defined\n");
#endif
}
```

```Output
TEST defined 1
```

## See also

[MSVC Compiler Options](compiler-options.md)\
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)\
[/FI (Name forced include file)](fi-name-forced-include-file.md)\
[/U, /u (Undefine Symbols)](u-u-undefine-symbols.md)\
[#undef Directive (C/C++)](../../preprocessor/hash-undef-directive-c-cpp.md)\
[#define Directive (C/C++)](../../preprocessor/hash-define-directive-c-cpp.md)
