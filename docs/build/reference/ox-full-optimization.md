---
title: "/Ox (Enable Most Speed Optimizations)"
description: "The MSVC /Ox option combines some of the compiler optimization options for speed into a single option."
ms.date: 07/08/2020
f1_keywords: ["VC.Project.VCCLCompilerTool.ToolOptimization", "/Ox", "/Oxs"]
helpviewer_keywords: ["Ox compiler option [C++]", "fast code [C++]", "/Ox compiler option [C++]", "-Ox compiler option [C++]"]
ms.assetid: 3ad7c30b-c615-428c-b1d0-2e024f81c760
---
# `/Ox` (Enable Most Speed Optimizations)

The **`/Ox`** compiler option enables a combination of optimizations that favor speed. In some versions of the Visual Studio IDE and the compiler help message, it's called *full optimization*, but the **`/Ox`** compiler option enables only a subset of the speed optimization options enabled by **`/O2`**.

## Syntax

> **`/Ox`**

## Remarks

The **`/Ox`** compiler option enables the **`/O`** compiler options that favor speed. The **`/Ox`** compiler option doesn't include the additional [`/GF` (Eliminate Duplicate Strings)](gf-eliminate-duplicate-strings.md) and [`/Gy` (Enable Function-Level Linking)](gy-enable-function-level-linking.md) options enabled by [`/O1` or `/O2` (Minimize Size, Maximize Speed)](o1-o2-minimize-size-maximize-speed.md). The additional options applied by **`/O1`** and **`/O2`** can cause pointers to strings or to functions to share a target address, which can affect debugging and strict language conformance. The **`/Ox`** option is an easy way to enable most optimizations without including **`/GF`** and **`/Gy`**. For more information, see the descriptions of the [`/GF`](gf-eliminate-duplicate-strings.md) and [`/Gy`](gy-enable-function-level-linking.md) options.

The **`/Ox`** compiler option is the same as using the following options in combination:

- [`/Ob` (Inline Function Expansion)](ob-inline-function-expansion.md), where the option parameter is 2 (**`/Ob2`**)

- [`/Oi` (Generate Intrinsic Functions)](oi-generate-intrinsic-functions.md)

- [`/Ot` (Favor Fast Code)](os-ot-favor-small-code-favor-fast-code.md)

- [`/Oy` (Frame-Pointer Omission)](oy-frame-pointer-omission.md)

**`/Ox`** is mutually exclusive from:

- [`/O1` (Minimize Size)](o1-o2-minimize-size-maximize-speed.md)

- [`/O2` (Maximize Speed)](o1-o2-minimize-size-maximize-speed.md)

- [`/Od` (Disable (Debug))](od-disable-debug.md)

You can cancel the bias toward speed of the **`/Ox`** compiler option if you specify **`/Oxs`**, which combines the **`/Ox`** compiler option with [`/Os` (Favor Small Code)](os-ot-favor-small-code-favor-fast-code.md). The combined options favor smaller code size.  The **`/Oxs`** option is exactly the same as specifying **`/Ox`** **`/Os`** when the options appear in that order.

To apply all available file-level optimizations for release builds, we recommend you specify [`/O2` (Maximize Speed)](o1-o2-minimize-size-maximize-speed.md) instead of **`/Ox`**, and [`/O1` (Minimize Size)](o1-o2-minimize-size-maximize-speed.md) instead of **`/Oxs`**. For even more optimization in release builds, also consider the [`/GL` (Whole Program Optimization)](gl-whole-program-optimization.md) compiler option and [`/LTCG` (Link-time Code Generation)](ltcg-link-time-code-generation.md) linker option.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Optimization** property page.

1. Modify the **Optimization** property.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.Optimization%2A>.

## See also

[`/O` Options (Optimize Code)](o-options-optimize-code.md)<br/>
[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
