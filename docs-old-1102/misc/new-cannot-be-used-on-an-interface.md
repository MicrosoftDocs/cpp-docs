---
title: "&#39;New&#39; cannot be used on an interface"
ms.custom: ""
ms.date: "2015-07-20"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc30375"
  - "bc30375"
helpviewer_keywords: 
  - "BC30375"
ms.assetid: c1e06108-1b52-4cbe-8cae-e816a0dbac0b
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# &#39;New&#39; cannot be used on an interface
A [Dim Statement](../Topic/Dim%20Statement%20\(Visual%20Basic\).md) uses a [New Operator](../Topic/New%20Operator%20\(Visual%20Basic\).md) clause when declaring a variable to be of an interface type.  
  
 Although an interface is a reference type, you cannot create an instance of it. You can use `New` only to create an instance of a class or a structure.  
  
 **Error ID:** BC30375  
  
### To correct this error  
  
1.  If the variable is to be of an interface type, remove the `New` keyword.  
  
2.  If the variable is to refer to an instance, declare it to be of a class or structure type. Retain the `New` keyword to create an instance.  
  
## See Also  
 [Interface Statement](../Topic/Interface%20Statement%20\(Visual%20Basic\).md)   
 [Class Statement](../Topic/Class%20Statement%20\(Visual%20Basic\).md)   
 [Structure Statement](../Topic/Structure%20Statement.md)