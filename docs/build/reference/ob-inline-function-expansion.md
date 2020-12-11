---
description: "Learn more about: /Ob (Inline Function Expansion)"
title: "/Ob (Inline Function Expansion)"
ms.date: "08/08/2019"
f1_keywords: ["VC.Project.VCCLWCECompilerTool.InlineFunctionExpansion", "VC.Project.VCCLCompilerTool.InlineFunctionExpansion", "/ob"]
helpviewer_keywords: ["inline functions, function expansion compiler option [C++]", "-Ob1 compiler option [C++]", "-Ob0 compiler option [C++]", "/Ob0 compiler option [C++]", "/Ob1 compiler option [C++]", "any suitable compiler option [C++]", "Ob2 compiler option [C++]", "Ob1 compiler option [C++]", "/Ob2 compiler option [C++]", "Ob compiler option [C++]", "-Ob2 compiler option [C++]", "disable compiler option [C++]", "-Ob compiler option [C++]", "/Ob compiler option [C++]", "only __inline compiler option [C++]", "Ob0 compiler option [C++]", "inline expansion, compiler option"]
ms.assetid: f134e6df-e939-4980-a01d-47425dbc562a
---
# /Ob (Inline Function Expansion)

Controls inline expansion of functions. By default, when optimizing, expansion occurs at the compiler's discretion on all functions, often referred to as *auto-inlining*.

## Syntax

::: moniker range=">=msvc-160"

> **/Ob**{**0**|**1**|**2**|**3**}

::: moniker-end

::: moniker range="<=msvc-150"

> **/Ob**{**0**|**1**|**2**}

::: moniker-end

## Arguments

**0**\
The default value under [/Od](od-disable-debug.md). Disables inline expansions.

**1**\
Allows expansion only of functions marked [inline](../../cpp/inline-functions-cpp.md), [__inline](../../cpp/inline-functions-cpp.md), or [__forceinline](../../cpp/inline-functions-cpp.md), or in a C++ member function defined in a class declaration.

**2**\
The default value under [/O1](o1-o2-minimize-size-maximize-speed.md) and [/O2](o1-o2-minimize-size-maximize-speed.md). Allows the compiler to expand any function not explicitly marked for no inlining.

::: moniker range=">=msvc-160"

**3**\
This option specifies more aggressive inlining than **/Ob2**, but has the same restrictions. The **/Ob3** option is available starting in Visual Studio 2019.

::: moniker-end

## Remarks

The compiler treats the inline expansion options and keywords as suggestions. There's no guarantee that any function will be expanded inline. You can disable inline expansions, but you can't force the compiler to inline a particular function, even when using the **`__forceinline`** keyword.

To exclude functions from consideration as candidates for inline expansion, you can use [__declspec(noinline)](../../cpp/noinline.md), or a region marked by [#pragma auto_inline(off)](../../preprocessor/auto-inline.md) and [#pragma auto_inline(on)](../../preprocessor/auto-inline.md) directives. For information on another way to provide inlining hints to the compiler, see the [#pragma intrinsic](../../preprocessor/intrinsic.md) directive.

> [!NOTE]
> Information that is gathered from profiling test runs overrides optimizations that would otherwise be in effect because you specified **/Ob**, **/Os**, or **/Ot**. For more information, see [Profile-Guided Optimizations](../profile-guided-optimizations.md).

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Optimization** property page.

1. Modify the **Inline Function Expansion** property.

::: moniker range=">=msvc-160"

The **/Ob3** option isn't available in the **Inline Function Expansion** property. To set **/Ob3**:

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Enter **/Ob3** in **Additional Options**.

::: moniker-end

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.InlineFunctionExpansion%2A>.

## See also

[/O Options (Optimize Code)](o-options-optimize-code.md)\
[MSVC Compiler Options](compiler-options.md)\
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
