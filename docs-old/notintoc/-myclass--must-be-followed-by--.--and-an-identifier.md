---
title: "&#39;MyClass&#39; must be followed by &#39;.&#39; and an identifier"
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
  - "bc32028"
  - "vbc32028"
helpviewer_keywords: 
  - "BC32028"
ms.assetid: a7e92b54-32b8-4072-9576-632942f05e0f
caps.latest.revision: 8
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
# &#39;MyClass&#39; must be followed by &#39;.&#39; and an identifier
`MyClass` is not a true object variable, and it cannot appear alone. You use it only to access a member of the current instance as if it were `NotOverridable` in the base class.  
  
 **Error ID:** BC32028  
  
### To correct this error  
  
1.  If you intend to access a class member, specify the member access operator (`.`) and a member of the current instance after `MyClass`.  
  
2.  If you do not intend to access a class member, use the `Me` keyword.  
  
## See Also  
 [MyClass - delete](assetId:///5db36f9b-f796-4b6a-ba34-cac1fde6eb62)   
 [Me](assetId:///a65973c7-cf06-4547-9b25-9fba885525c2)   
 [NotOverridable](../Topic/NotOverridable%20\(Visual%20Basic\).md)   
 [Inheritance Basics](../Topic/Inheritance%20Basics%20\(Visual%20Basic\).md)