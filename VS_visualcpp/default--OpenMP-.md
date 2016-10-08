---
title: "default (OpenMP)"
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
ms.assetid: 96055106-a8f0-40b3-8319-e412b6e07bf8
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
# default (OpenMP)
Specifies the behavior of unscoped variables in a parallel region.  
  
## Syntax  
  
```  
default(shared | none)  
```  
  
## Remarks  
 `shared`, which is in effect if the `default` clause is not specified, means that any variable in a parallel region will be treated as if it were specified with the [shared](../VS_visualcpp/shared--OpenMP-.md) clause. `none` means that any variables used in a parallel region that are not scoped with the [private](../VS_visualcpp/private--OpenMP-.md), [shared](../VS_visualcpp/shared--OpenMP-.md), [reduction](../VS_visualcpp/reduction.md), [firstprivate](../VS_visualcpp/firstprivate.md), or [lastprivate](../VS_visualcpp/lastprivate.md) clause will cause a compiler error.  
  
 `default` applies to the following directives:  
  
-   [parallel](../VS_visualcpp/parallel.md)  
  
-   [for](../VS_visualcpp/for--OpenMP-.md)  
  
-   [sections](../VS_visualcpp/sections--OpenMP-.md)  
  
 For more information, see [2.7.2.5 default](../VS_visualcpp/2.7.2.5-default.md).  
  
## Example  
 See [private](../VS_visualcpp/private--OpenMP-.md) for an example of using `default`.  
  
## See Also  
 [Clauses](../VS_visualcpp/OpenMP-Clauses.md)