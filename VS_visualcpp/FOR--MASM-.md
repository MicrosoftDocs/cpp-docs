---
title: "FOR (MASM)"
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
ms.assetid: 99872e61-f503-4d34-b305-59f8556ba6b7
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
# FOR (MASM)
Marks a block that will be repeated once for each `argument`, with the current `argument` replacing `parameter` on each repetition.  
  
## Syntax  
  
```  
  
   FOR   
   parameter [[:REQ | :=default]] , <argument [[, argument]]...>  
statements  
ENDM  
```  
  
## Remarks  
 Same as [IRP](../VS_visualcpp/IRP.md).  
  
## See Also  
 [Directives Reference](../VS_visualcpp/Directives-Reference.md)