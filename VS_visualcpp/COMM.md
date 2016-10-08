---
title: "COMM"
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
ms.assetid: a23548c4-ad04-41fa-91da-945f228de742
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
# COMM
Creates a communal variable with the attributes specified in `definition`.  
  
## Syntax  
  
```  
  
COMM definition [[, definition]] ...  
```  
  
## Remarks  
 Each `definition` has the following form:  
  
 [[*langtype*]] [[**NEAR** &#124; **FAR**]] *label***:**`type`[[**:***count*]]  
  
 The *label* is the name of the variable. The `type` can be any type specifier ([BYTE](../VS_visualcpp/BYTE--MASM-.md), [WORD](../VS_visualcpp/WORD.md), and so on) or an integer specifying the number of bytes. The *count* specifies the number of data objects (one is the default).  
  
## See Also  
 [Directives Reference](../VS_visualcpp/Directives-Reference.md)