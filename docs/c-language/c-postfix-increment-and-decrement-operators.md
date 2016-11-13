---
title: "C Postfix Increment and Decrement Operators | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "increment operators, syntax"
  - "scalar operators"
  - "types [C], scalar"
ms.assetid: 56ba218d-65f9-405f-8684-caccc0ca33aa
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# C Postfix Increment and Decrement Operators
Operands of the postfix increment and decrement operators are scalar types that are modifiable l-values.  
  
## Syntax  
 *postfix-expression*:  
 *postfix-expression*  **++**  
  
 *postfix-expression*  **––**  
  
 The result of the postfix increment or decrement operation is the value of the operand. After the result is obtained, the value of the operand is incremented (or decremented). The following code illustrates the postfix increment operator.  
  
```  
if( var++ > 0 )  
    *p++ = *q++;  
```  
  
 In this example, the variable `var` is compared to 0, then incremented. If `var` was positive before being incremented, the next statement is executed. First, the value of the object pointed to by `q` is assigned to the object pointed to by `p`. Then, `q` and `p` are incremented.  
  
## See Also  
 [Postfix Increment and Decrement Operators: ++ and --](../cpp/postfix-increment-and-decrement-operators-increment-and-decrement.md)