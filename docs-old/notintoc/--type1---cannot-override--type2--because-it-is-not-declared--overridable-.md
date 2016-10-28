---
title: "&#39;&lt;type1&gt;&#39; cannot override &lt;type2&gt; because it is not declared &#39;Overridable&#39;"
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
  - "bc31086"
  - "vbc31086"
helpviewer_keywords: 
  - "BC31086"
ms.assetid: ce071994-2e32-4460-a65d-f48f914386c6
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
# &#39;&lt;type1&gt;&#39; cannot override &lt;type2&gt; because it is not declared &#39;Overridable&#39;
A member in a derived class overrides a base class member that is not marked with the `Overridable` modifier.  
  
 **Error ID:** BC31086  
  
### To correct this error  
  
1.  Add the `Overridable` modifier to the overridden member in the base class.  
  
2.  Use the `Shadows` keyword to shadow the item in the base class.  
  
## See Also  
 [Overridable](../Topic/Overridable%20\(Visual%20Basic\).md)   
 [Overrides](../Topic/Overrides%20\(Visual%20Basic\).md)   
 [Shadows](../Topic/Shadows%20\(Visual%20Basic\).md)