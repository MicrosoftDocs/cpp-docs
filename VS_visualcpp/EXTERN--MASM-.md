---
title: "EXTERN (MASM)"
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
ms.assetid: 667d703d-3aaf-4139-a586-29bc5dab1aff
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
# EXTERN (MASM)
Defines one or more external variables, labels, or symbols called *name* whose type is `type`.  
  
## Syntax  
  
```  
  
   EXTERN [[langtype]] name [[(altid)]] :  
type [[, [[langtype]] name [[(altid)]] :type]]...  
```  
  
## Remarks  
 The `type` can be [ABS](../VS_visualcpp/operator-ABS.md), which imports *name* as a constant. Same as [EXTRN](../VS_visualcpp/EXTRN.md).  
  
## See Also  
 [Directives Reference](../VS_visualcpp/Directives-Reference.md)