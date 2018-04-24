---
title: "Methods declared &#39;Overrides&#39; cannot be declared &#39;Overridable&#39; because they are implicitly overridable | Microsoft Docs"
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
  - "bc30730"
  - "vbc30730"
helpviewer_keywords: 
  - "BC30730"
ms.assetid: cc892f81-eb1f-42a9-8f54-eff352adb5dd
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Methods declared &#39;Overrides&#39; cannot be declared &#39;Overridable&#39; because they are implicitly overridable
Unlike most methods, methods marked with the `Overrides` modifier are overridable by default.  
  
 **Error ID:** BC30730  
  
### To correct this error  
  
-   Omit the `Overridable` modifier from methods marked with the `Overrides` modifier.  
  
## See Also  
 [Overrides](http://msdn.microsoft.com/library/9f5e6144-ce10-465e-842b-1a8f8760af90)   
 [Overridable](http://msdn.microsoft.com/library/612581e7-8a4c-4a5d-beff-3402fffa6f35)