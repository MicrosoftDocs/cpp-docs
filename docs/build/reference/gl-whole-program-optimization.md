---
description: "Learn more about: /GL (Whole Program Optimization)"
title: "/GL (Whole Program Optimization)"
ms.date: "11/04/2016"
f1_keywords: ["/gl"]
helpviewer_keywords: ["/GL compiler option [C++]", "whole program optimizations and C++ compiler", "-GL compiler option [C++]", "GL compiler option [C++]"]
ms.assetid: 09d51e2d-9728-4bd0-b5dc-3b8284aca1d1
---
# /GL (Whole Program Optimization)

Enables whole program optimization.

## Syntax

```
/GL[-]
```

## Remarks

Whole program optimization allows the compiler to perform optimizations with information on all modules in the program. Without whole program optimization, optimizations are performed on a per module (compiland) basis.

Whole program optimization is off by default and must be explicitly enabled. However, it is also possible to explicitly disable it with **/GL-**.

With information on all modules, the compiler can:

- Optimize the use of registers across function boundaries.

- Do a better job of tracking modifications to global data, allowing a reduction in the number of loads and stores.

- Do a better job of tracking the possible set of items modified by a pointer dereference, reducing the numbers of loads and stores.

- Inline a function in a module even when the function is defined in another module.

.obj files produced with **/GL** will not be available to such linker utilities as [EDITBIN](editbin-reference.md) and [DUMPBIN](dumpbin-reference.md).

If you compile your program with **/GL** and [/c](c-compile-without-linking.md), you should use the /LTCG linker option to create the output file.

[/ZI](z7-zi-zi-debug-information-format.md) cannot be used with **/GL**

The format of files produced with **/GL** in the current version may not be readable by subsequent versions of Visual C++. You should not ship a .lib file comprised of .obj files that were produced with **/GL** unless you are willing to ship copies of the .lib file for all versions of Visual C++ you expect your users to use, now and in the future.

.obj files produced with **/GL** and precompiled header files should not be used to build a .lib file unless the .lib file will be linked on the same machine that produced the **/GL** .obj file. Information from the .obj file's precompiled header file will be needed at link time.

For more information on the optimizations available with and the limitations of whole program optimization, see [/LTCG](ltcg-link-time-code-generation.md).  **/GL** also makes profile guided optimization available; see /LTCG.  When compiling for profile guided optimizations and if you want function ordering from your profile guided optimizations, you must compile with [/Gy](gy-enable-function-level-linking.md) or a compiler option that implies /Gy.

### To set this linker option in the Visual Studio development environment

1. See [/LTCG (Link-time Code Generation)](ltcg-link-time-code-generation.md) for information on how to specify **/GL** in the development environment.

### To set this linker option programmatically

1. See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.WholeProgramOptimization%2A>.

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
