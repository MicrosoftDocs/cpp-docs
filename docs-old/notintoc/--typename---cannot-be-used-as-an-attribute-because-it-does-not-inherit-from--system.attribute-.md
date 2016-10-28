---
title: "&#39;&lt;typename&gt;&#39; cannot be used as an attribute because it does not inherit from &#39;System.Attribute&#39;"
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
  - "vbc31504"
  - "bc31504"
helpviewer_keywords: 
  - "BC31504"
ms.assetid: 37517623-5099-4db9-a461-f2f5daa4957b
caps.latest.revision: 10
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
# &#39;&lt;typename&gt;&#39; cannot be used as an attribute because it does not inherit from &#39;System.Attribute&#39;
An attempt was made to use a class that is not derived from `System.Attribute`.  
  
 **Error ID:** BC31504  
  
### To correct this error  
  
1.  Define custom attributes as classes that derive from `System.Attribute` by adding an `Imports` statement to the first line of code in the class.  
  
## See Also  
 \<xref:System.AttributeUsageAttribute>   
 [NOT IN BUILD: Custom Attributes in Visual Basic](assetId:///d72d8a5c-8f64-4614-b15b-cad66845d047)