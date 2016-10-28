---
title: "COMM"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "COMM"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COMM directive"
ms.assetid: a23548c4-ad04-41fa-91da-945f228de742
caps.latest.revision: 7
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
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
  
 The *label* is the name of the variable. The `type` can be any type specifier ([BYTE](../intrinsics/byte--masm-.md), [WORD](../intrinsics/word.md), and so on) or an integer specifying the number of bytes. The *count* specifies the number of data objects (one is the default).  
  
## See Also  
 [Directives Reference](../intrinsics/directives-reference.md)