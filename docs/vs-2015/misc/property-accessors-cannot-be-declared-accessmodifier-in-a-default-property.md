---
title: "Property accessors cannot be declared &#39;&lt;accessmodifier&gt;&#39; in a &#39;Default&#39; property | Microsoft Docs"
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
  - "bc31107"
  - "vbc31107"
helpviewer_keywords: 
  - "BC31107"
ms.assetid: 25657b33-df85-4535-8043-69795c987175
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Property accessors cannot be declared &#39;&lt;accessmodifier&gt;&#39; in a &#39;Default&#39; property
A [Get Statement](http://msdn.microsoft.com/library/56b05cdc-bd64-4dfd-bb12-824eacec6f94) or [Set Statement](http://msdn.microsoft.com/library/9ecc27b4-df84-420d-9075-db25455fb3cd) in a default property includes the `Private` keyword.  
  
 A default property cannot be `Private`, and neither can its individual property procedures (`Get` or `Set`).  
  
 **Error ID:** BC31107  
  
### To correct this error  
  
-   Remove the `Private` keyword from the `Get` or `Set` statement, or remove `Default` from the [Property Statement](http://msdn.microsoft.com/library/3155edaf-8ebd-45c6-9cef-11d5d2dc8d38).  
  
## See Also  
 [Property Procedures](http://msdn.microsoft.com/library/46a98379-e1a2-45dd-a48c-b51213f5ab07)   
 [How to: Declare a Property with Mixed Access Levels](http://msdn.microsoft.com/library/fdbb2d97-279a-4956-b26c-cbdfbc34915a)   
 [How to: Declare and Call a Default Property in Visual Basic](http://msdn.microsoft.com/library/68b4026e-09ef-4613-808e-f6287494ff63)