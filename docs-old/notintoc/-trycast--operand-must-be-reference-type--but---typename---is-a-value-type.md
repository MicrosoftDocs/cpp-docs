---
title: "&#39;TryCast&#39; operand must be reference type, but &#39;&lt;typename&gt;&#39; is a value type"
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
  - "BC30792"
  - "vbc30792"
helpviewer_keywords: 
  - "BC30792"
ms.assetid: 3325fce5-dbc0-4d1d-9530-31f4720bfe6e
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
# &#39;TryCast&#39; operand must be reference type, but &#39;&lt;typename&gt;&#39; is a value type
The `TryCast` operator is used with a value type for at least one of the arguments.  
  
 `TryCast` tests for an inheritance or implementation relationship between the two arguments. Therefore, it allows only reference types for the arguments. For more information, see [Value Types and Reference Types](../Topic/Value%20Types%20and%20Reference%20Types.md).  
  
 **Error ID:** BC30792  
  
### To correct this error  
  
-   Use `DirectCast` or `CType` to perform the conversion. They both allow value types.  
  
## See Also  
 [TryCast Operator](../Topic/TryCast%20Operator%20\(Visual%20Basic\).md)   
 [DirectCast Operator](../Topic/DirectCast%20Operator%20\(Visual%20Basic\).md)   
 [CType Function](../Topic/CType%20Function%20\(Visual%20Basic\).md)   
 [Value Types and Reference Types](../Topic/Value%20Types%20and%20Reference%20Types.md)