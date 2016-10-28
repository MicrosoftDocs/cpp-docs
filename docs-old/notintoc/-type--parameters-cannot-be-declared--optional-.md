---
title: "&lt;type&gt; parameters cannot be declared &#39;Optional&#39;"
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
  - "bc33010"
  - "vbc33010"
helpviewer_keywords: 
  - "BC33010"
ms.assetid: ec4023e7-9ba6-4532-a6b9-4ae6b4f9063a
caps.latest.revision: 9
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
# &lt;type&gt; parameters cannot be declared &#39;Optional&#39;
A definition of a delegate, event, or operator declares an [Optional](../Topic/Optional%20\(Visual%20Basic\).md) parameter.  
  
 `Optional` parameters are allowed only on `Declare`, `Function`, `Property`, and `Sub` parameters.  
  
 **Error ID:** BC33010  
  
### To correct this error  
  
-   Remove the `Optional` keyword from the parameter list.  
  
-   If you are defining an operator, you might be able to achieve the `Optional` functionality with a series of overloads.  
  
-   If you are defining a delegate or event, you must rework the overall logic of this part of your application. You cannot use `Optional` or [ParamArray](../Topic/ParamArray%20\(Visual%20Basic\).md) parameters, or overloaded versions, on delegate or event parameters.  
  
## See Also  
 [Overloads](../Topic/Overloads%20\(Visual%20Basic\).md)   
 [Operator Procedures](../Topic/Operator%20Procedures%20\(Visual%20Basic\).md)   
 [Operator Statement](../Topic/Operator%20Statement.md)