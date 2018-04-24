---
title: "Nullable types are not allowed in conditional compilation expressions | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc33111"
  - "vbc33111"
helpviewer_keywords: 
  - "BC33111"
ms.assetid: 2c2587e5-2179-4a31-bcf7-7004db6f2d73
caps.latest.revision: 5
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Nullable types are not allowed in conditional compilation expressions
A nullable type cannot be used in the expression of a conditional compilation directive. For example, the following code causes this error.  
  
```vb  
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