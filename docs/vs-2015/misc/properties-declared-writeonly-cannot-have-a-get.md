---
title: "Properties declared &#39;WriteOnly&#39; cannot have a &#39;Get&#39; | Microsoft Docs"
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
  - "bc30023"
  - "vbc30023"
helpviewer_keywords: 
  - "BC30023"
ms.assetid: ac290f7d-cbc3-4979-a5d9-1ae1bb26e79d
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Properties declared &#39;WriteOnly&#39; cannot have a &#39;Get&#39;
The `Get` procedure reads the value of a property. `WriteOnly` properties cannot be read.  
  
 **Error ID:** BC30023  
  
### To correct this error  
  
-   Remove the `WriteOnly` keyword from the `Property` statement, or remove the `Get` procedure from the property body.  
  
## See Also  
 [Property Statement](http://msdn.microsoft.com/library/3155edaf-8ebd-45c6-9cef-11d5d2dc8d38)   
 [Get Statement](http://msdn.microsoft.com/library/56b05cdc-bd64-4dfd-bb12-824eacec6f94)   
 [WriteOnly](http://msdn.microsoft.com/library/488d2899-b09f-4cee-92f0-6f9f9fc4f944)