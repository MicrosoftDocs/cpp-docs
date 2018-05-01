---
title: "&#39;MyClass&#39; must be followed by &#39;.&#39; and an identifier | Microsoft Docs"
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
  - "bc32028"
  - "vbc32028"
helpviewer_keywords: 
  - "BC32028"
ms.assetid: a7e92b54-32b8-4072-9576-632942f05e0f
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;MyClass&#39; must be followed by &#39;.&#39; and an identifier
`MyClass` is not a true object variable, and it cannot appear alone. You use it only to access a member of the current instance as if it were `NotOverridable` in the base class.  
  
 **Error ID:** BC32028  
  
### To correct this error  
  
1.  If you intend to access a class member, specify the member access operator (`.`) and a member of the current instance after `MyClass`.  
  
2.  If you do not intend to access a class member, use the `Me` keyword.  
  
## See Also  
 [MyClass - delete](http://msdn.microsoft.com/en-us/5db36f9b-f796-4b6a-ba34-cac1fde6eb62)   
 [Me](http://msdn.microsoft.com/en-us/a65973c7-cf06-4547-9b25-9fba885525c2)   
 [NotOverridable](http://msdn.microsoft.com/library/66ec6984-f5f5-4857-b362-6a3907aaf9e0)   
 [Inheritance Basics](http://msdn.microsoft.com/library/dfc8deba-f5b3-4d1d-a937-7cb826446fc5)