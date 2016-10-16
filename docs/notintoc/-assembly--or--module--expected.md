---
title: "&#39;Assembly&#39; or &#39;Module&#39; expected"
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
  - "vbc32015"
  - "bc32015"
helpviewer_keywords: 
  - "BC32015"
ms.assetid: 6e62fe8d-a875-4995-b6b2-443e75c65e85
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
# &#39;Assembly&#39; or &#39;Module&#39; expected
A global attribute is specified without indicating whether it applies to the entire assembly or only to the current module. Global attributes must specify either `Assembly` or `Module`.  
  
 A global attribute is one that appears on a source line by itself, rather than being applied to the declaration of a particular programming element.  
  
 **Error ID:** BC32015  
  
### To correct this error  
  
1.  If you intend the attribute to be global, add the `Assembly` or `Module` keyword to the beginning of the attribute block, followed by a colon (:).  
  
2.  If you do not intend the attribute to be global, delete the attribute block or move it to a programming element declaration.  
  
## See Also  
 [Assembly](../Topic/Assembly%20\(Visual%20Basic\).md)   
 [Module \<keyword>](../Topic/Module%20%3Ckeyword%3E%20\(Visual%20Basic\).md)   
 [NOT IN BUILD: Application of Attributes](assetId:///2b1703ed-4437-49b3-bc0b-568094324f47)   
 [NOT IN BUILD: Global Attributes in Visual Basic](assetId:///253a32d8-1531-4504-b687-088554ab71d2)