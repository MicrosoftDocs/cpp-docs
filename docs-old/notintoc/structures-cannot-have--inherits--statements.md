---
title: "Structures cannot have &#39;Inherits&#39; statements"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "vbc30628"
  - "bc30628"
helpviewer_keywords: 
  - "BC30628"
ms.assetid: 131ecce1-6378-43fb-af0b-cdf5a0350cec
caps.latest.revision: 9
ms.author: "billchi"
manager: "douge"
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
# Structures cannot have &#39;Inherits&#39; statements
Unlike classes, structures do not support inheritance.  
  
 **Error ID:** BC30628  
  
### To correct this error  
  
-   Remove the `Inherits` statement from the structure.  
  
-   Redesign your application to use classes instead.  
  
## See Also  
 [Structures](../Topic/Structures%20\(Visual%20Basic\).md)   
 [Structures and Classes](../Topic/Structures%20and%20Classes%20\(Visual%20Basic\).md)