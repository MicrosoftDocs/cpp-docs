---
title: "/Og (Global Optimizations)"
ms.date: "09/22/2017"
f1_keywords: ["VC.Project.VCCLCompilerTool.GlobalOptimizations", "/og"]
helpviewer_keywords: ["-Og compiler option [C++]", "global optimizations compiler option [C++]", "automatic register allocation", "/Og compiler option [C++]", "loop structures, optimizing", "common subexpression elimination", "Og compiler option [C++]"]
ms.assetid: d10630cc-b9cf-4e97-bde3-8d7ee79e9435
---
# /Og (Global Optimizations)

Deprecated. Provides local and global optimizations, automatic-register allocation, and loop optimization. We recommend you use either [/O1 (Minimize Size)](../../build/reference/o1-o2-minimize-size-maximize-speed.md) or [/O2 (Maximize Speed)](../../build/reference/o1-o2-minimize-size-maximize-speed.md) instead.

## Syntax

> /Og

## Remarks

**/Og** is deprecated. These optimizations are now generally enabled by default. For more information on optimizations, see [/O1, /O2 (Minimize Size, Maximize Speed)](../../build/reference/o1-o2-minimize-size-maximize-speed.md) or [/Ox (Enable Most Speed Optimizations)](../../build/reference/ox-full-optimization.md).

The following optimizations are available under **/Og**:

- Local and global common subexpression elimination

   In this optimization, the value of a common subexpression is calculated once. In the following example, if the values of `b` and `c` do not change between the three expressions, the compiler can assign the calculation of `b + c` to a temporary variable, and substitute the variable for `b + c`:

    ```C
    a = b + c;
    d = b + c;
    e = b + c;
    ```

   For local common subexpression optimization, the compiler examines short sections of code for common subexpressions. For global common subexpression optimization, the compiler searches entire functions for common subexpressions.

- Automatic register allocation

   This optimization allows the compiler to store frequently used variables and subexpressions in registers; the `register` keyword is ignored.

- Loop optimization

   This optimization removes invariant subexpressions from the body of a loop. An optimal loop contains only expressions whose values change through each execution of the loop. In the following example, the expression `x + y` does not change in the loop body:

    ```C
    i = -100;
    while( i < 0 ) {
        i += x + y;
    }
    ```

   After optimization, `x + y` is calculated once rather than every time the loop is executed:

    ```C
    i = -100;
    t = x + y;
    while( i < 0 ) {
        i += t;
    }
    ```

   Loop optimization is much more effective when the compiler can assume no aliasing, which you set with [__restrict](../../cpp/extension-restrict.md), [noalias](../../cpp/noalias.md), or [restrict](../../cpp/restrict.md).

   > [!NOTE]
   > You can enable or disable global optimization on a function-by-function basis using the `optimize` pragma together with the `g` option.

For related information, see [/Oi (Generate Intrinsic Functions)](../../build/reference/oi-generate-intrinsic-functions.md) and [/Ox (Enable Most Speed Optimizations)](../../build/reference/ox-full-optimization.md).

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).

1. Click the **C/C++** folder.

1. Click the **Command Line** property page.

1. Enter the compiler option in the **Additional Options** box.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

- [/O Options (Optimize Code)](../../build/reference/o-options-optimize-code.md)

- [Compiler Options](../../build/reference/compiler-options.md)

- [Setting Compiler Options](../../build/reference/setting-compiler-options.md)
