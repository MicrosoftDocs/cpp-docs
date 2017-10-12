---
title: "-Ox (Enable Most Speed Optimizations) | Microsoft Docs"
ms.custom: ""
ms.date: "09/25/2017"
ms.reviewer: ""
ms.suite: ""
ms.technology:  
  - "cpp-tools"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCCLCompilerTool.ToolOptimization"
  - "/ox"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Ox compiler option [C++]"
  - "fast code [C++]"
  - "/Ox compiler option [C++]"
  - "-Ox compiler option [C++]"
ms.assetid: 3ad7c30b-c615-428c-b1d0-2e024f81c760
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /Ox (Enable Most Speed Optimizations)

The **/Ox** compiler option enables a combination of optimizations that favor speed. In some versions of the Visual Studio IDE and the compiler help message, this is called *full optimization*, but the **/Ox** compiler option enables only a subset of the speed optimization options enabled by **/O2**.

## Syntax

> /Ox

## Remarks

The **/Ox** compiler option enables the **/O** compiler options that favor speed. The **/Ox** compiler option does not include the additional [/GF (Eliminate Duplicate Strings)](../../build/reference/gf-eliminate-duplicate-strings.md) and [/Gy (Enable Function-Level Linking)](../../build/reference/gy-enable-function-level-linking.md) options enabled by [/O1 or /O2 (Minimize Size, Maximize Speed)](../../build/reference/o1-o2-minimize-size-maximize-speed.md). The additional options applied by **/O1** and **/O2** can cause pointers to strings or to functions to share a target address, which can affect debugging and strict language conformance. The **/Ox** option is an easy way to enable most optimizations without including **/GF** and **/Gy**. For more information, see the descriptions of the [/GF](../../build/reference/gf-eliminate-duplicate-strings.md) and [/Gy](../../build/reference/gy-enable-function-level-linking.md) options.

The **/Ox** compiler option is the same as using the following options in combination:

- [/Ob (Inline Function Expansion)](../../build/reference/ob-inline-function-expansion.md), where the option parameter is 2 (**/Ob2**)

- [/Og (Global Optimizations)](../../build/reference/og-global-optimizations.md)

- [/Oi (Generate Intrinsic Functions)](../../build/reference/oi-generate-intrinsic-functions.md)

- [/Ot (Favor Fast Code)](../../build/reference/os-ot-favor-small-code-favor-fast-code.md)

- [/Oy (Frame-Pointer Omission)](../../build/reference/oy-frame-pointer-omission.md)

**/Ox** is mutually exclusive from:

- [/O1 (Minimize Size)](../../build/reference/o1-o2-minimize-size-maximize-speed.md)

- [/O2 (Maximize Speed)](../../build/reference/o1-o2-minimize-size-maximize-speed.md)

- [/Od (Disable (Debug))](../../build/reference/od-disable-debug.md)

You can cancel the bias toward speed of the **/Ox** compiler option if you specify **/Oxs**, which combines the **/Ox** compiler option with [/Os (Favor Small Code)](../../build/reference/os-ot-favor-small-code-favor-fast-code.md). The combined options favor smaller code size.

To apply all available file-level optimizations for release builds, we recommend you specify [/O2 (Maximize Speed)](../../build/reference/o1-o2-minimize-size-maximize-speed.md) instead of **/Ox**, and [/O1 (Minimize Size)](../../build/reference/o1-o2-minimize-size-maximize-speed.md) instead of **/Oxs**. For even more optimization in release builds, also consider the [/GL (Whole Program Optimization)](../../build/reference/gl-whole-program-optimization.md) compiler option and [/LTCG (Link-time Code Generation)](../../build/reference/ltcg-link-time-code-generation.md) linker option.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).

1. Under **Configuration Properties**, open **C/C++** and then choose the **Optimization** property page.

1. Modify the **Optimization** property.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.Optimization%2A>.

## See Also

[/O Options (Optimize Code)](../../build/reference/o-options-optimize-code.md)  
[Compiler Options](../../build/reference/compiler-options.md)  
[Setting Compiler Options](../../build/reference/setting-compiler-options.md)