---
title: "Type &#39;&lt;typename&gt;&#39; is not supported because it either directly or indirectly inherits from itself"
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
  - "bc30916"
  - "vbc30916"
helpviewer_keywords: 
  - "BC30916"
ms.assetid: cea33daf-1971-4b70-a01d-7d8b5c9e4269
caps.latest.revision: 8
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
# Type &#39;&lt;typename&gt;&#39; is not supported because it either directly or indirectly inherits from itself
A class or interface either inherits from itself or from another class or interface which ultimately inherits from it.  
  
 Visual Basic does not support circular inheritance.  
  
 **Error ID:** BC30916  
  
### To correct this error  
  
-   Change the inheritance structure so that it is built on a base class or interface that does not inherit from any other class or interface.  
  
## See Also  
 [Inheritance Basics](../Topic/Inheritance%20Basics%20\(Visual%20Basic\).md)