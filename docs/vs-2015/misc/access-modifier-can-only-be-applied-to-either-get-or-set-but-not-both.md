---
title: "Access modifier can only be applied to either &#39;Get&#39; or Set&#39;, but not both | Microsoft Docs"
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
  - "bc31101"
  - "vbc31101"
helpviewer_keywords: 
  - "BC31101"
ms.assetid: c2a0580c-ff2f-4cc9-9113-6e540f906eec
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Access modifier can only be applied to either &#39;Get&#39; or Set&#39;, but not both
A property declaration specifies access levels in the [Property Statement](http://msdn.microsoft.com/library/3155edaf-8ebd-45c6-9cef-11d5d2dc8d38), the [Get Statement](http://msdn.microsoft.com/library/56b05cdc-bd64-4dfd-bb12-824eacec6f94), and the [Set Statement](http://msdn.microsoft.com/library/9ecc27b4-df84-420d-9075-db25455fb3cd).  
  
 You can always specify an access level for the property. In addition, you can specify a different access level for at most one of its property procedures (`Get` or `Set`), provided it is more restrictive than the property's access level. You cannot specify access levels for both of the property procedures.  
  
 **Error ID:** BC31101  
  
### To correct this error  
  
-   Remove the access modifier from either the `Get` statement or the `Set` statement.  
  
## See Also  
 [Property Procedures](http://msdn.microsoft.com/library/46a98379-e1a2-45dd-a48c-b51213f5ab07)   
 [How to: Declare a Property with Mixed Access Levels](http://msdn.microsoft.com/library/fdbb2d97-279a-4956-b26c-cbdfbc34915a)