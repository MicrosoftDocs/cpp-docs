---
title: "Nullable types are not allowed in conditional compilation expressions"
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
  - "bc33111"
  - "vbc33111"
helpviewer_keywords: 
  - "BC33111"
ms.assetid: 2c2587e5-2179-4a31-bcf7-7004db6f2d73
caps.latest.revision: 5
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
# Nullable types are not allowed in conditional compilation expressions
A nullable type cannot be used in the expression of a conditional compilation directive. For example, the following code causes this error.  
  
```vb#  
'#Const triggerPoint = 0  
  
'' Not valid.  
'#If CType(triggerpoint, Boolean?) = True Then  
'        ' Body of the conditional directive.  
'#End If  
```  
  
 **Error ID:** BC33111  
  
### To correct this error  
  
-   Remove the nullable type designation.  
  
## See Also  
 [Nullable Value Types](../Topic/Nullable%20Value%20Types%20\(Visual%20Basic\).md)   
 [#If...Then...#Else Directives](../Topic/%23If...Then...%23Else%20Directives.md)   
 [Conditional Compilation](../Topic/Conditional%20Compilation%20in%20Visual%20Basic.md)