---
title: "/Ob (Inline Function Expansion)"
ms.date: "09/25/2017"
f1_keywords: ["VC.Project.VCCLWCECompilerTool.InlineFunctionExpansion", "VC.Project.VCCLCompilerTool.InlineFunctionExpansion", "/ob"]
helpviewer_keywords: ["inline functions, function expansion compiler option [C++]", "-Ob1 compiler option [C++]", "-Ob0 compiler option [C++]", "/Ob0 compiler option [C++]", "/Ob1 compiler option [C++]", "any suitable compiler option [C++]", "Ob2 compiler option [C++]", "Ob1 compiler option [C++]", "/Ob2 compiler option [C++]", "Ob compiler option [C++]", "-Ob2 compiler option [C++]", "disable compiler option [C++]", "-Ob compiler option [C++]", "/Ob compiler option [C++]", "only __inline compiler option [C++]", "Ob0 compiler option [C++]", "inline expansion, compiler option"]
ms.assetid: f134e6df-e939-4980-a01d-47425dbc562a
---
# /Ob (Inline Function Expansion)

Controls inline expansion of functions.

## Syntax

> /Ob{0|1|2}

## Arguments

**0**<br/>
Disables inline expansions. By default, expansion occurs at the compiler's discretion on all functions, often referred to as *auto-inlining*.

**1**<br/>
Allows expansion only of functions marked [inline](../../cpp/inline-functions-cpp.md), `__inline`, or `__forceinline`, or in a C++ member function defined in a class declaration.

**2**<br/>
The default value. Allows expansion of functions marked as `inline`, `__inline`, or `__forceinline`, and any other function that the compiler chooses.

**/Ob2** is in effect when [/O1, /O2 (Minimize Size, Maximize Speed)](o1-o2-minimize-size-maximize-speed.md) or [/Ox (Enable Most Speed Optimizations)](ox-full-optimization.md) is used.

This option requires that you enable optimizations using **/O1**, **/O2**, **/Ox**, or **/Og**.

## Remarks

The compiler treats the inline expansion options and keywords as suggestions. There is no guarantee that any function will be expanded inline. You can disable inline expansions, but you cannot force the compiler to inline a particular function, even when using the `__forceinline` keyword.

You can use the `#pragma` [auto_inline](../../preprocessor/auto-inline.md) directive to exclude functions from consideration as candidates for inline expansion. Also see the `#pragma` [intrinsic](../../preprocessor/intrinsic.md) directive.

> [!NOTE]
> Information that is gathered from profiling test runs overrides optimizations that would otherwise be in effect if you specify **/Ob**, **/Os**, or **/Ot**. For more information, see [Profile-Guided Optimizations](../profile-guided-optimizations.md).

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Expand **Configuration Properties**, **C/C++**, and select **Optimization**.

1. Modify the **Inline Function Expansion** property.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.InlineFunctionExpansion%2A>.

## See Also

[/O Options (Optimize Code)](o-options-optimize-code.md)<br/>
[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)