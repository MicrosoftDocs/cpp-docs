---
title: "-O Options (Optimize Code)"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
H1: /O Options (Optimize Code)
ms.assetid: 77997af9-5555-4b3d-aa57-6615b27d4d5d
caps.latest.revision: 11
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# -O Options (Optimize Code)
The **/O** options control various optimizations that help you create code for maximum speed or minimum size.  
  
-   [/O1](../VS_visualcpp/-O1---O2--Minimize-Size--Maximize-Speed-.md) optimizes code for minimum size.  
  
-   [/O2](../VS_visualcpp/-O1---O2--Minimize-Size--Maximize-Speed-.md) optimizes code for maximum speed.  
  
-   [/Ob](../VS_visualcpp/-Ob--Inline-Function-Expansion-.md) controls inline function expansion.  
  
-   [/Od](../VS_visualcpp/-Od--Disable--Debug--.md) disables optimization, speeding compilation and simplifying debugging.  
  
-   [/Og](../VS_visualcpp/-Og--Global-Optimizations-.md) enables global optimizations.  
  
-   [/Oi](../VS_visualcpp/-Oi--Generate-Intrinsic-Functions-.md) generates intrinsic functions for appropriate function calls.  
  
-   [/Os](../VS_visualcpp/-Os---Ot--Favor-Small-Code--Favor-Fast-Code-.md) tells the compiler to favor optimizations for size over optimizations for speed.  
  
-   [/Ot](../VS_visualcpp/-Os---Ot--Favor-Small-Code--Favor-Fast-Code-.md) (a default setting) tells the compiler to favor optimizations for speed over optimizations for size.  
  
-   [/Ox](../VS_visualcpp/-Ox--Full-Optimization-.md) selects full optimization.  
  
-   [/Oy](../VS_visualcpp/-Oy--Frame-Pointer-Omission-.md) suppresses the creation of frame pointers on the call stack for quicker function calls.  
  
## Remarks  
 You can also combine multiple **/O** options into a single option statement. For example, `/Odi` is the same as `/Od /Oi`.  
  
## See Also  
 [Compiler Options](../VS_visualcpp/Compiler-Options.md)   
 [Setting Compiler Options](../VS_visualcpp/Setting-Compiler-Options.md)