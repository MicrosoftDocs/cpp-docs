---
title: "Relational operator expected | Microsoft Docs"
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
  - "bc30239"
  - "vbc30239"
helpviewer_keywords: 
  - "BC30239"
ms.assetid: c5701568-77a1-441b-a0f7-f7b36cbd17e3
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Relational operator expected
A `Case` statement contains an `Is` clause but no comparison operator such as `=` or `>`. If a `Case` statement does not include an operator, `=` is assumed and `Is` is not used.  
  
 **Error ID:** BC30239  
  
### To correct this error  
  
-   Remove the `Is` keyword or follow it with a comparison operator.  
  
## See Also  
 [Select...Case Statement](http://msdn.microsoft.com/library/68877b65-5419-4bf0-a465-20cd0e4c7d44)   
 [Comparison Operators in Visual Basic](http://msdn.microsoft.com/library/0b570339-5407-474f-8421-e183a8b303ee)   
 [Comparison Operators](http://msdn.microsoft.com/library/d6cb12a8-e52e-46a7-8aaf-f804d634a825)