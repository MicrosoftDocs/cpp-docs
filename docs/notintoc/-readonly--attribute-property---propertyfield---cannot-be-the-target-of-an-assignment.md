---
title: "&#39;ReadOnly&#39; attribute property &#39;&lt;propertyfield&gt;&#39; cannot be the target of an assignment"
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
  - "bc31501"
  - "vbc31501"
helpviewer_keywords: 
  - "BC31501"
ms.assetid: 41c3f979-6b24-4595-9503-9c80a4d6d762
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
# &#39;ReadOnly&#39; attribute property &#39;&lt;propertyfield&gt;&#39; cannot be the target of an assignment
An attempt was made to assign a value to a `ReadOnly` property in an attribute.  
  
 **Error ID:** BC31501  
  
### To correct this error  
  
1.  Remove the property assignment statement.  
  
2.  If using properties you developed, remove the `ReadOnly` or `Shared` modifiers from the attribute property.  
  
## See Also  
 [Shared](../Topic/Shared%20\(Visual%20Basic\).md)   
 [NOT IN BUILD: Attributes in Visual Basic](assetId:///620bfc0e-4582-4c8b-8432-ebc5c3dccc22)