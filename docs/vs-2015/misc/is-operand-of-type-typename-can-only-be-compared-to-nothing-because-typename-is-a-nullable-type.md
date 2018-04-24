---
title: "&#39;Is&#39; operand of type &#39;typename&#39; can only be compared to &#39;Nothing&#39;, because &#39;typename&#39; is a nullable type | Microsoft Docs"
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
  - "vbc32127"
  - "bc32127"
helpviewer_keywords: 
  - "BC32127"
ms.assetid: 68b745b5-8605-4bf3-a6ec-69e67b3cff2d
caps.latest.revision: 5
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Is&#39; operand of type &#39;typename&#39; can only be compared to &#39;Nothing&#39;, because &#39;typename&#39; is a nullable type
A variable declared as nullable has been compared to an expression other than `Nothing` by using the `Is` operator.  
  
 **Error ID:** BC32127  
  
### To correct this error  
  
1.  To compare a nullable type to an expression other than `Nothing` by using the `Is` operator, call the `GetType` method on the nullable type and compare the result to the expression, as shown in the following example.  
  
    ```vb  
    Dim number? As Integer = 5  
  
    If number IsNot Nothing Then  
      If number.GetType() Is Type.GetType("System.Int32") Then   
  
      End If  
    End If  
    ```  
  
## See Also  
 [Nullable Value Types](http://msdn.microsoft.com/library/9ac3b602-6f96-4e6d-96f7-cd4e81c468a6)   
 [Is Operator](http://msdn.microsoft.com/library/8045a6c8-2a83-45b6-ad47-d09a704c656d)