---
title: "Cannot call friend function on object which is not an instance of defining class"
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
  - "vbrID97"
ms.assetid: b9d821f0-8565-4f15-bb35-184789c69662
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
# Cannot call friend function on object which is not an instance of defining class
Either you tried to call the `Friend` procedure of a class, or you tried to access a `Friend` property or method either cross-process or cross-thread. A `Friend` procedure is callable from a module outside the class, but is part of the project in which the class is defined.  
  
### To correct this error  
  
-   Ensure that you are calling or accessing the procedure from a module that is part of the project in which the class is defined.  
  
## See Also  
 [Friend](../Topic/Friend%20\(Visual%20Basic\).md)