---
description: "Learn more about: /GL (Whole program optimization)"
title: "/GL (Whole program optimization)"
ms.date: 03/05/2021
f1_keywords: ["/GL"]
helpviewer_keywords: ["/GL compiler option [C++]", "whole program optimizations and C++ compiler", "-GL compiler option [C++]", "GL compiler option [C++]"]
---
# `/GL` (Whole program optimization)

Enables whole program optimization.

## Syntax

> **`/GL`**[**`-`**]

## Remarks

Whole program optimization allows the compiler to perform optimizations with information on all modules in the program. Without whole program optimization, optimizations are performed on a per-module (compiland) basis.

Whole program optimization is off by default and must be explicitly enabled. However, it's also possible to explicitly disable it with **`/GL-`**.

With information on all modules, the compiler can:

- Optimize the use of registers across function boundaries.

- Do a better job of tracking modifications to global data, allowing a reduction in the number of loads and stores.

- Track the possible set of items modified by a pointer dereference, reducing the required loads and stores.

- Inline a function in a module even when the function is defined in another module.

*`.obj`* files produced with **`/GL`** aren't usable by linker utilities such as [`EDITBIN`](editbin-reference.md) and [`DUMPBIN`](dumpbin-reference.md).

If you compile your program with **`/GL`** and [`/c`](c-compile-without-linking.md), you should use the /LTCG linker option to create the output file.

[`/ZI`](z7-zi-zi-debug-information-format.md) can't be used with **`/GL`**

The format of files produced with **`/GL`** in the current version often isn't readable by later versions of Visual Studio and the MSVC toolset. Unless you're willing to ship copies of the *`.lib`* file for all versions of Visual Studio you expect your users to use, now and in the future, don't ship a *`.lib`* file made up of *`.obj`* files  produced by **`/GL`** . For more information, see [Restrictions on binary compatibility](../../porting/binary-compat-2015-2017.md#restrictions).

*`.obj`* files produced by **`/GL`** and precompiled header files shouldn't be used to build a *`.lib`* file unless the *`.lib`* file is linked on the same machine that produced the **`/GL`** *`.obj`* file. Information from the *`.obj`* file's precompiled header file is needed at link time.

For more information on the optimizations available with and the limitations of whole program optimization, see [`/LTCG`](ltcg-link-time-code-generation.md).  **`/GL`** also makes profile guided optimization available. When compiling for profile guided optimizations and if you want function ordering from your profile guided optimizations, you must compile with [`/Gy`](gy-enable-function-level-linking.md) or a compiler option that implies /Gy.

### To set this linker option in the Visual Studio development environment

For more information on how to specify **`/GL`** in the development environment, see [`/LTCG` (Link-time code generation)](ltcg-link-time-code-generation.md) .

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.WholeProgramOptimization%2A>.

## See also

[MSVC compiler options](compiler-options.md)\
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)
