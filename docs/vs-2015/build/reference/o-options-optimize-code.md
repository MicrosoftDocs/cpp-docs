---
title: "-O Options (Optimize Code) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
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
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /O Options (Optimize Code)
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [-O Options (Optimize Code)](https://docs.microsoft.com/cpp/build/reference/o-options-optimize-code).  
  
  
The **/O** options control various optimizations that help you create code for maximum speed or minimum size.  
  
-   [/O1](../../build/reference/o1-o2-minimize-size-maximize-speed.md) optimizes code for minimum size.  
  
-   [/O2](../../build/reference/o1-o2-minimize-size-maximize-speed.md) optimizes code for maximum speed.  
  
-   [/Ob](../../build/reference/ob-inline-function-expansion.md) controls inline function expansion.  
  
-   [/Od](../../build/reference/od-disable-debug.md) disables optimization, speeding compilation and simplifying debugging.  
  
-   [/Og](../../build/reference/og-global-optimizations.md) enables global optimizations.  
  
-   [/Oi](../../build/reference/oi-generate-intrinsic-functions.md) generates intrinsic functions for appropriate function calls.  
  
-   [/Os](../../build/reference/os-ot-favor-small-code-favor-fast-code.md) tells the compiler to favor optimizations for size over optimizations for speed.  
  
-   [/Ot](../../build/reference/os-ot-favor-small-code-favor-fast-code.md) (a default setting) tells the compiler to favor optimizations for speed over optimizations for size.  
  
-   [/Ox](../../build/reference/ox-full-optimization.md) selects full optimization.  
  
-   [/Oy](../../build/reference/oy-frame-pointer-omission.md) suppresses the creation of frame pointers on the call stack for quicker function calls.  
  
## Remarks  
 You can also combine multiple **/O** options into a single option statement. For example, `/Odi` is the same as `/Od /Oi`.  
  
## See Also  
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)

