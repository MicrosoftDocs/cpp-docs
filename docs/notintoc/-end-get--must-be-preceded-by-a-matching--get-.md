---
title: "&#39;End Get&#39; must be preceded by a matching &#39;Get&#39;"
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
  - "bc30630"
  - "vbc30630"
helpviewer_keywords: 
  - "BC30630"
ms.assetid: d858076a-9088-4ad0-9766-95029476bf9b
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
# &#39;End Get&#39; must be preceded by a matching &#39;Get&#39;
`End Get` is used to terminate `Get` property procedures. The `End Get` construct was encountered outside a `Get` property procedure.  
  
 **Error ID:** BC30630  
  
### To correct this error  
  
1.  Make sure that the `Get` property procedure is declared after a `Property` keyword and before the `End Property` construct.  
  
2.  Make sure that the `Get` property procedure begins with the `Get` keyword and ends with `End Get` construct.  
  
## See Also  
 [Property Statement](../Topic/Property%20Statement.md)   
 [Property Changes in Visual Basic](assetId:///1c138efa-9bc2-44d7-80a0-f3a7c2510264)