---
title: "Attribute &#39;&lt;attributename&gt;&#39; cannot be applied to an assembly"
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
  - "bc30548"
  - "vbc30548"
helpviewer_keywords: 
  - "BC30548"
ms.assetid: bc36f094-626a-4907-b80b-f195155fa5db
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
# Attribute &#39;&lt;attributename&gt;&#39; cannot be applied to an assembly
You attempted to apply an attribute to an assembly whose `AttributeUsageAttribute` does not specify `AttributeTargets.Assembly`. When the attribute was declared, it was not defined to be applicable to an assembly.  
  
 **Error ID:** BC30548  
  
### To correct this error  
  
1.  Check the attribute declaration and specify `AttributeTargets.Assembly` or `AttributeTargets.All`.  
  
## See Also  
 \<xref:System.AttributeUsageAttribute>   
 \<xref:System.AttributeTargets>