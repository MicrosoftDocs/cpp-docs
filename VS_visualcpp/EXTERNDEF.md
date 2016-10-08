---
title: "EXTERNDEF"
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
ms.assetid: 95a10de6-c345-4428-a2f2-90f7d411dc86
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
# EXTERNDEF
Defines one or more external variables, labels, or symbols called *name* whose type is `type`.  
  
## Syntax  
  
```  
  
EXTERNDEF [[langtype]] name:type [[, [[langtype]] name:type]]...  
```  
  
## Remarks  
 If *name* is defined in the module, it is treated as [PUBLIC](../VS_visualcpp/PUBLIC--MASM-.md). If *name* is referenced in the module, it is treated as [EXTERN](../VS_visualcpp/EXTERN--MASM-.md). If *name* is not referenced, it is ignored. The `type` can be [ABS](../VS_visualcpp/operator-ABS.md), which imports *name* as a constant. Normally used in include files.  
  
## See Also  
 [Directives Reference](../VS_visualcpp/Directives-Reference.md)