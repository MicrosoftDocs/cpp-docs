---
title: "Range specified for &#39;Case&#39; statement is not valid | Microsoft Docs"
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
  - "vbc40052"
  - "bc40052"
helpviewer_keywords: 
  - "BC40052"
ms.assetid: a11d92f6-dc13-46a0-a8ca-5a962a0ed968
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Range specified for &#39;Case&#39; statement is not valid
An invalid range has been specified for a `Case` statement.  
  
 When you are comparing the same expression to several different values, you can use the `Select...Case` statements as an alternative to the `If...Then...Else` statements. While the `If` and `ElseIf` statements can evaluate a different expression in each statement, the `Select` statement evaluates a single expression only once and then uses it for every comparison. Each `Case` statement can contain more than one value, a range of values, or a combination of values and comparison operators.  
  
 **Error ID:** BC40052  
  
### To correct this error  
  
-   Modify the range to include all values, or use a `Case Else` statement to catch an undefined value.  
  
## See Also  
 [Select...Case Statement](http://msdn.microsoft.com/library/68877b65-5419-4bf0-a465-20cd0e4c7d44)   
 [Decision Structures](http://msdn.microsoft.com/library/2e2e0895-4483-442a-b17c-26aead751ec2)   
 [Widening and Narrowing Conversions](http://msdn.microsoft.com/library/058c3152-6c28-4268-af44-2209e774f0bd)