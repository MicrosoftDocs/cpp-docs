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
 [Nullable Value Types](http://msdn.microsoft.com/library/9ac3b602-6f96-4e6d-96f7-cd4e81c468a6)   
 [#If...Then...#Else Directives](http://msdn.microsoft.com/library/10bba104-e3fd-451b-b672-faa472530502)   
 [Conditional Compilation](http://msdn.microsoft.com/library/9c35e55e-7eee-44fb-a586-dad1f1884848)