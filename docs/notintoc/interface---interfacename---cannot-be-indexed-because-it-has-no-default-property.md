---
title: "Interface &#39;&lt;interfacename&gt;&#39; cannot be indexed because it has no default property"
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
  - "bc30547"
  - "vbc30547"
helpviewer_keywords: 
  - "BC30547"
ms.assetid: d9d83868-5e81-4ec5-878e-2303489d8f2f
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
# Interface &#39;&lt;interfacename&gt;&#39; cannot be indexed because it has no default property
Index expressions must result in a value whose type is an array, in a value whose type has a set of overloaded default properties, or in a set of overloaded properties. An interface can have only one default method or property. This means that it can either inherit an interface containing a default method or property, or its definition block can contain one method or property that is marked as default.  
  
 **Error ID:** BC30547  
  
### To correct this error  
  
-   Supply a default property in the interface.  
  
## See Also  
 [Interface Statement](../Topic/Interface%20Statement%20\(Visual%20Basic\).md)