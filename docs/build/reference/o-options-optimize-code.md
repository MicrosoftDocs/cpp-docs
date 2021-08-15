---
title: "/O options (Optimize code)"
description: "The MSVC /O compiler options specify the compiler optimizations to use."
ms.date: 07/08/2020
f1_keywords: ["VC.Project.VCCLCompilerTool.Optimization", "/o", "VC.Project.VCCLWCECompilerTool.Optimization"]
helpviewer_keywords: ["performance, cle.exe compiler", "cl.exe compiler, performance"]
ms.assetid: 77997af9-5555-4b3d-aa57-6615b27d4d5d
---
# `/O` options (Optimize code)

The **`/O`** options control various optimizations that help you create code for maximum speed or minimum size.

- [`/O1`](o1-o2-minimize-size-maximize-speed.md) sets a combination of optimizations that generate minimum size code.

- [`/O2`](o1-o2-minimize-size-maximize-speed.md) sets a combination of optimizations that optimizes code for maximum speed.

- [`/Ob`](ob-inline-function-expansion.md) controls inline function expansion.

- [`/Od`](od-disable-debug.md) disables optimization, to speed compilation and simplify debugging.

- [`/Og`](og-global-optimizations.md) (deprecated) enables global optimizations.

- [`/Oi`](oi-generate-intrinsic-functions.md) generates intrinsic functions for appropriate function calls.

- [`/Os`](os-ot-favor-small-code-favor-fast-code.md) tells the compiler to favor optimizations for size over optimizations for speed.

- [`/Ot`](os-ot-favor-small-code-favor-fast-code.md) (a default setting) tells the compiler to favor optimizations for speed over optimizations for size.

- [`/Ox`](ox-full-optimization.md) is a combination option that selects several of the optimizations with an emphasis on speed. **`/Ox`** is a strict subset of the **`/O2`** optimizations.

- [`/Oy`](oy-frame-pointer-omission.md) suppresses the creation of frame pointers on the call stack for quicker function calls.

## Remarks

You can combine multiple **`/O`** options into a single option statement. For example, **`/Odi`** is the same as **`/Od /Oi`**. Certain options are mutually exclusive and cause a compiler error if used together. For more information, see the individual **`/O`** options.

## See also

[MSVC compiler options](compiler-options.md)<br/>
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)
