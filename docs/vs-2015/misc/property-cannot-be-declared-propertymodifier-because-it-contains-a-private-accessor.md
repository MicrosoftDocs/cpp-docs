---
title: "Property cannot be declared &#39;&lt;propertymodifier&gt;&#39; because it contains a &#39;Private&#39; accessor | Microsoft Docs"
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
  - "vbc31108"
  - "bc31108"
helpviewer_keywords: 
  - "BC31108"
ms.assetid: 74fb36f4-54cd-4fda-bcc6-e965b5c7c37b
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Property cannot be declared &#39;&lt;propertymodifier&gt;&#39; because it contains a &#39;Private&#39; accessor
A property with a `Private` property procedure (`Get` or `Set`) is marked [Overridable](http://msdn.microsoft.com/library/612581e7-8a4c-4a5d-beff-3402fffa6f35).  
  
 If a base class property or procedure is declared [Private](http://msdn.microsoft.com/library/aba74a2e-5824-4613-bf63-b9ec7787f4e6), a derived class cannot override that property or procedure because it cannot access it. Because of this, you cannot use `Private` in combination with `Overridable`. This applies not only to the property itself but to the individual property procedures as well.  
  
 **Error ID:** BC31108  
  
### To correct this error  
  
-   Remove the `Overridable` keyword from the [Property Statement](http://msdn.microsoft.com/library/3155edaf-8ebd-45c6-9cef-11d5d2dc8d38), or remove the `Private` keyword from the [Get Statement](http://msdn.microsoft.com/library/56b05cdc-bd64-4dfd-bb12-824eacec6f94) or the [Set Statement](http://msdn.microsoft.com/library/9ecc27b4-df84-420d-9075-db25455fb3cd).  
  
## See Also  
 [Property Procedures](http://msdn.microsoft.com/library/46a98379-e1a2-45dd-a48c-b51213f5ab07)   
 [How to: Declare a Property with Mixed Access Levels](http://msdn.microsoft.com/library/fdbb2d97-279a-4956-b26c-cbdfbc34915a)