---
title: "&#39;Implements&#39; statement must follow any &#39;Inherits&#39; statement and precede all declarations in a class | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc31053"
  - "vbc31053"
helpviewer_keywords: 
  - "BC31053"
ms.assetid: 8036a1a1-7e31-4c49-b74b-01601a548f3e
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
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
 [Interfaces](http://msdn.microsoft.com/library/61b06674-12c9-430b-be68-cc67ecee1f5b)   
 [Implements](http://msdn.microsoft.com/library/5252cdf9-964d-4fc6-af0f-0449b7126b5a)