---
title: "lastprivate"
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
ms.assetid: 6ef87b31-375a-47e8-8d0d-281be45fb56a
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
# lastprivate
Specifies that the enclosing context's version of the variable is set equal to the private version of whichever thread executes the final iteration (for-loop construct) or last section (#pragma sections).  
  
## Syntax  
  
```  
lastprivate(var)  
```  
  
## Remarks  
 where,  
  
 `var`  
 The variable that is set equal to the private version of whichever thread executes the final iteration (for-loop construct) or last section (#pragma sections).  
  
## Remarks  
 `lastprivate` applies to the following directives:  
  
-   [for](../VS_visualcpp/for--OpenMP-.md)  
  
-   [sections](../VS_visualcpp/sections--OpenMP-.md)  
  
 For more information, see [2.7.2.3 lastprivate](../VS_visualcpp/2.7.2.3-lastprivate.md).  
  
## Example  
 See [schedule](../VS_visualcpp/schedule.md) for an example of using `lastprivate` clause.  
  
## See Also  
 [Clauses](../VS_visualcpp/OpenMP-Clauses.md)