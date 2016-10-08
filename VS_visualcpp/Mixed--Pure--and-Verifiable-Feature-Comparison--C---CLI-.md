---
title: "Mixed, Pure, and Verifiable Feature Comparison (C++-CLI)"
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
H1: Mixed, Pure, and Verifiable Feature Comparison (C++/CLI)
ms.assetid: 3f7a82ba-0e69-4927-ba0c-fbc3160e4394
caps.latest.revision: 8
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
# Mixed, Pure, and Verifiable Feature Comparison (C++-CLI)
This topic compares features among the different **/clr** compilation modes. For more information, see [/clr (Common Language Runtime Compilation)](../VS_visualcpp/-clr--Common-Language-Runtime-Compilation-.md).  
  
## Feature Comparison  
  
|Feature|Mixed (/clr)|Pure (/clr:pure)|Safe (/clr:safe)|Related Information|  
|-------------|---------------------|-------------------------|-------------------------|-------------------------|  
|CRT library|supported|supported||[Run-Time Routines by Category](../VS_visualcpp/Run-Time-Routines-by-Category.md)|  
|MFC/ATL|supported|||[MFC Desktop Applications](../VS_visualcpp/MFC-Desktop-Applications.md) &#124; [Class Overview](../VS_visualcpp/ATL-Class-Overview.md)|  
|Unmanaged Functions|supported|||[Mixed (Native and Managed) Assemblies](../VS_visualcpp/Mixed--Native-and-Managed--Assemblies.md)|  
|Unmanaged Data|supported|supported||[Pure and Verifiable Code (C++/CLI)](../VS_visualcpp/Pure-and-Verifiable-Code--C---CLI-.md)|  
|Callable from Unmanaged Functions|supported|||[How to: Migrate to /clr:pure (C++/CLI)](../VS_visualcpp/How-to--Migrate-to--clr-pure--C---CLI-.md)|  
|Supports calling unmanaged Functions|supported|C-style functions only|P/Invoke only|[Using C++ Interop (Implicit PInvoke)](../VS_visualcpp/Using-C---Interop--Implicit-PInvoke-.md)|  
|Supports Reflection|DLLs only|supported|supported|[Reflection (C++/CLI)](../VS_visualcpp/Reflection--C---CLI-.md)|  
  
## See Also  
 [Pure and Verifiable Code (C++/CLI)](../VS_visualcpp/Pure-and-Verifiable-Code--C---CLI-.md)