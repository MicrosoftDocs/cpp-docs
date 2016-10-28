---
title: "&#39;&lt;specifier&gt;&#39; is not valid on an interface property declaration"
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
  - "vbc30273"
  - "bc30273"
helpviewer_keywords: 
  - "BC30273"
ms.assetid: f10c4f5f-6176-4dba-99a9-b58f3b390fba
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
# &#39;&lt;specifier&gt;&#39; is not valid on an interface property declaration
A `Property` statement inside an interface contains an invalid keyword, such as `Implements`. An interface can only define members, not implement them.  
  
 **Error ID:** BC30273  
  
### To correct this error  
  
-   Remove the invalid keyword from the declaration statement.  
  
-   Move the implementation of interface members to a class that implements the interface.  
  
## See Also  
 [Interface Statement](../Topic/Interface%20Statement%20\(Visual%20Basic\).md)   
 [Implements Statement](../Topic/Implements%20Statement.md)