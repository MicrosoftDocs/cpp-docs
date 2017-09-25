---
title: "-O Options (Optimize Code) | Microsoft Docs"
ms.custom: ""
ms.date: "09/25/2017"
ms.reviewer: ""
ms.suite: ""
ms.technology:  
  - "cpp-tools"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCCLCompilerTool.Optimization"
  - "/o"
  - "VC.Project.VCCLWCECompilerTool.Optimization"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "performance, cle.exe compiler"
  - "cl.exe compiler, performance"
ms.assetid: 77997af9-5555-4b3d-aa57-6615b27d4d5d
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /O Options (Optimize Code)

The **/O** options control various optimizations that help you create code for maximum speed or minimum size.

  [/O1](../../build/reference/o1-o2-minimize-size-maximize-speed.md) sets a combination of optimizations that generate minimum size code.

- [/O2](../../build/reference/o1-o2-minimize-size-maximize-speed.md) sets a combination of optimizations that optimizes code for maximum speed.

- [/Ob](../../build/reference/ob-inline-function-expansion.md) controls inline function expansion.

- [/Od](../../build/reference/od-disable-debug.md) disables optimization, to speed compilation and simplify debugging.

- [/Og](../../build/reference/og-global-optimizations.md) enables global optimizations.

- [/Oi](../../build/reference/oi-generate-intrinsic-functions.md) generates intrinsic functions for appropriate function calls.

- [/Os](../../build/reference/os-ot-favor-small-code-favor-fast-code.md) tells the compiler to favor optimizations for size over optimizations for speed.

- [/Ot](../../build/reference/os-ot-favor-small-code-favor-fast-code.md) (a default setting) tells the compiler to favor optimizations for speed over optimizations for size.

- [/Ox](../../build/reference/ox-full-optimization.md) is a combination option that selects several of the optimizations with an emphasis on speed. It is a strict subset of the **/O2** optimizations.

- [/Oy](../../build/reference/oy-frame-pointer-omission.md) suppresses the creation of frame pointers on the call stack for quicker function calls.

## Remarks

You can combine multiple **/O** options into a single option statement. For example, **/Odi** is the same as **/Od /Oi**. Certain options are mutually exclusive and cause a compiler error if used together. See the individual **/O** options for more information.

## See Also

[Compiler Options](../../build/reference/compiler-options.md)   
[Setting Compiler Options](../../build/reference/setting-compiler-options.md)