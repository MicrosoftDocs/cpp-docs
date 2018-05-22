---
title: "Properties declared &#39;ReadOnly&#39; cannot have a &#39;Set&#39; | Microsoft Docs"
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
  - "vbc30022"
  - "bc30022"
helpviewer_keywords: 
  - "BC30022"
ms.assetid: a22eff96-8c18-47c4-9ef0-f98b2ab8a5d8
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Properties declared &#39;ReadOnly&#39; cannot have a &#39;Set&#39;
The `Set` procedure writes the value of a property. `ReadOnly` properties cannot be written.  
  
 **Error ID:** BC30022  
  
### To correct this error  
  
-   Remove the `ReadOnly` keyword from the `Property` statement, or remove the `Set` procedure from the property body.  
  
## See Also  
 [Property Statement](http://msdn.microsoft.com/library/3155edaf-8ebd-45c6-9cef-11d5d2dc8d38)   
 [Set Statement](http://msdn.microsoft.com/library/9ecc27b4-df84-420d-9075-db25455fb3cd)   
 [ReadOnly](http://msdn.microsoft.com/library/e868185d-6142-4359-a2fd-a7965cadfce8)