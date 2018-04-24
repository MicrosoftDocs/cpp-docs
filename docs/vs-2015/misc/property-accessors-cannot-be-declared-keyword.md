---
title: "Property accessors cannot be declared &#39;&lt;keyword&gt;&#39; | Microsoft Docs"
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
  - "vbc31099"
  - "bc31099"
helpviewer_keywords: 
  - "BC31099"
ms.assetid: d6f3b989-39b9-4c47-995a-bd83ec03d7b8
caps.latest.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Property accessors cannot be declared &#39;&lt;keyword&gt;&#39;
A `Get` or `Set` procedure declaration includes a keyword that is not valid on a property procedure.  
  
 The [Get Statement](http://msdn.microsoft.com/library/56b05cdc-bd64-4dfd-bb12-824eacec6f94) and [Set Statement](http://msdn.microsoft.com/library/9ecc27b4-df84-420d-9075-db25455fb3cd) allow only an access modifier (`Public`, `Protected`, `Friend`, `Protected Friend`, `Private`).  
  
 **Error ID:** BC31099  
  
### To correct this error  
  
-   Remove the invalid keyword from the `Get` or `Set` statement.  
  
## See Also  
 [Property Procedures](http://msdn.microsoft.com/library/46a98379-e1a2-45dd-a48c-b51213f5ab07)   
 [How to: Declare a Property with Mixed Access Levels](http://msdn.microsoft.com/library/fdbb2d97-279a-4956-b26c-cbdfbc34915a)