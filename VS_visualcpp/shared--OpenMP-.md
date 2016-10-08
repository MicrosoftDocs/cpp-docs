---
title: "shared (OpenMP)"
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
ms.assetid: 7887dc95-67a2-462f-a3a2-8e0632bf5d04
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
# shared (OpenMP)
Specifies that one or more variables should be shared among all threads.  
  
## Syntax  
  
```  
shared(var)  
```  
  
## Remarks  
 where,  
  
 `var`  
 One more more variables to share. If more than one variable is specified, separate variable names with a comma.  
  
## Remarks  
 Another way to share variables among threads is with the [copyprivate](../VS_visualcpp/copyprivate.md) clause.  
  
 `shared` applies to the following directives:  
  
-   [for](../VS_visualcpp/for--OpenMP-.md)  
  
-   [parallel](../VS_visualcpp/parallel.md)  
  
-   [sections](../VS_visualcpp/sections--OpenMP-.md)  
  
 For more information, see [2.7.2.4 shared](../VS_visualcpp/2.7.2.4-shared.md).  
  
## Example  
 See [private](../VS_visualcpp/private--OpenMP-.md) for an example of using `shared`.  
  
## See Also  
 [Clauses](../VS_visualcpp/OpenMP-Clauses.md)