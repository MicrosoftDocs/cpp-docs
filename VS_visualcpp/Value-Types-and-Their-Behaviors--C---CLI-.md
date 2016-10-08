---
title: "Value Types and Their Behaviors (C++-CLI)"
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
H1: Value Types and Their Behaviors (C++/CLI)
ms.assetid: 5cb872a6-1e0a-429d-853d-df4ab47e8f2a
caps.latest.revision: 7
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
# Value Types and Their Behaviors (C++-CLI)
Value types have changed in various ways from Managed Extensions for C++ to Visual C++. In this section, we look at the CLR enum type and the value class type, together with a look at boxing and access to the boxed instance on the CLR heap, as well as a look at interior and pinning pointers. There have been extensive language changes in this area.  
  
## In This Section  
 [CLR Enum Type](../VS_visualcpp/Value-Types-and-Their-Behaviors--C---CLI-.md)  
 Discusses changes in the declaration and behavior of enums.  
  
 [Implicit Boxing of Value Types](../VS_visualcpp/Implicit-Boxing-of-Value-Types.md)  
 Discusses the motivation for implicit boxing of value types and the consequent changes in behavior.  
  
 [A Tracking Handle to a Boxed Value](../VS_visualcpp/A-Tracking-Handle-to-a-Boxed-Value.md)  
 Discusses how implicit boxing of value types translates to a tracking handle to the boxed value object.  
  
 [Value Type Semantics](../VS_visualcpp/Value-Type-Semantics.md)  
 Discusses changes to value type semantics, including inherited virtual methods, class default constructors, interior pointers, and pinning pointers.  
  
## See Also  
 [C++/CLI Migration Primer](../VS_visualcpp/C---CLI-Migration-Primer.md)   
 [Classes and Structs](../VS_visualcpp/Classes-and-Structs---C---Component-Extensions-.md)