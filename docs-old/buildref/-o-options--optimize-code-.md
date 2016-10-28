---
title: "-O Options (Optimize Code)"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
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
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# /O Options (Optimize Code)
The **/O** options control various optimizations that help you create code for maximum speed or minimum size.  
  
-   [/O1](../buildref/-o1---o2--minimize-size--maximize-speed-.md) optimizes code for minimum size.  
  
-   [/O2](../buildref/-o1---o2--minimize-size--maximize-speed-.md) optimizes code for maximum speed.  
  
-   [/Ob](../buildref/-ob--inline-function-expansion-.md) controls inline function expansion.  
  
-   [/Od](../buildref/-od--disable--debug--.md) disables optimization, speeding compilation and simplifying debugging.  
  
-   [/Og](../buildref/-og--global-optimizations-.md) enables global optimizations.  
  
-   [/Oi](../buildref/-oi--generate-intrinsic-functions-.md) generates intrinsic functions for appropriate function calls.  
  
-   [/Os](../buildref/-os---ot--favor-small-code--favor-fast-code-.md) tells the compiler to favor optimizations for size over optimizations for speed.  
  
-   [/Ot](../buildref/-os---ot--favor-small-code--favor-fast-code-.md) (a default setting) tells the compiler to favor optimizations for speed over optimizations for size.  
  
-   [/Ox](../buildref/-ox--full-optimization-.md) selects full optimization.  
  
-   [/Oy](../buildref/-oy--frame-pointer-omission-.md) suppresses the creation of frame pointers on the call stack for quicker function calls.  
  
## Remarks  
 You can also combine multiple **/O** options into a single option statement. For example, `/Odi` is the same as `/Od /Oi`.  
  
## See Also  
 [Compiler Options](../buildref/compiler-options.md)   
 [Setting Compiler Options](../buildref/setting-compiler-options.md)