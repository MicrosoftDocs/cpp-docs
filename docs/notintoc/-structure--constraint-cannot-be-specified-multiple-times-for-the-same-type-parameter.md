---
title: "&#39;Structure&#39; constraint cannot be specified multiple times for the same type parameter"
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
  - "bc32102"
  - "vbc32102"
helpviewer_keywords: 
  - "BC32102"
ms.assetid: f4ebd416-7fb9-4a24-a8df-e9ee7ccc2c76
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
# &#39;Structure&#39; constraint cannot be specified multiple times for the same type parameter
A constraint list includes the [Structure (Visual Basic)](assetId:///263ce115-ac36-4c05-8cb7-0e0eead5c6d0) constraint more than once.  
  
 A constraint list on a type parameter can specify that the type argument passed to that type parameter must be a value type (with the `Structure` constraint) or must be a reference type (with the [Class (Visual Basic)](assetId:///0777c6e6-46bc-451b-ad70-57b49d4ef4f7) constraint). You cannot specify both constraints on the same type parameter, and you cannot specify either one more than once.  
  
 Error ID: BC32102  
  
### To correct this error  
  
-   Remove any redundant `Structure` keywords. You should have only one in the constraint list.  
  
## See Also  
 [Generic Types in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Value Types and Reference Types](../Topic/Value%20Types%20and%20Reference%20Types.md)