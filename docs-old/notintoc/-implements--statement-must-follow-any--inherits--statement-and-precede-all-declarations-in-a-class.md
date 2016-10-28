---
title: "&#39;Implements&#39; statement must follow any &#39;Inherits&#39; statement and precede all declarations in a class"
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
  - "bc31053"
  - "vbc31053"
helpviewer_keywords: 
  - "BC31053"
ms.assetid: 8036a1a1-7e31-4c49-b74b-01601a548f3e
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
# &#39;Implements&#39; statement must follow any &#39;Inherits&#39; statement and precede all declarations in a class
An `Implements` statement was encountered in an invalid location.  
  
 **Error ID:** BC31053  
  
### To correct this error  
  
-   Place `Implements` statements immediately following any `Inherits` statements, but before any declarations. For example:  
  
    ```  
    Class Derived  
       Inherits Base  
       Implements One  
       Sub SubOne() Implements One.Method1  
          ' Add code to implement the method.  
       End Sub  
    End Class  
    ```  
  
## See Also  
 [Interfaces](../Topic/Interfaces%20\(Visual%20Basic\).md)   
 [Implements](../Topic/Implements%20Clause%20\(Visual%20Basic\).md)