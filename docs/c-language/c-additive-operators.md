---
title: "C Additive Operators | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
dev_langs: ["C++"]
helpviewer_keywords: ["usual arithmetic conversions", "operators [C], addition", "+ operator, additive operators", "additive operators", "arithmetic operators [C++], additive operators"]
ms.assetid: bb8ac205-b061-41fc-8dd4-dab87c8b900c
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# C Additive Operators
The additive operators perform addition (**+**) and subtraction (**-**).  
  
## Syntax  
 *additive-expression*:  
 *multiplicative-expression*  
  
 *additive-expression*  **+**  *multiplicative-expression*  
  
 *additive-expression*  **-**  *multiplicative-expression*  
  
> [!NOTE]
>  Although the syntax for *additive-expression* includes *multiplicative-expression*, this does not imply that expressions using multiplication are required. See the syntax in [C Language Syntax Summary](../c-language/c-language-syntax-summary.md), for *multiplicative-expression*, *cast-expression*, and *unary-expression*.  
  
 The operands can be integral or floating values. Some additive operations can also be performed on pointer values, as outlined under the discussion of each operator.  
  
 The additive operators perform the usual arithmetic conversions on integral and floating operands. The type of the result is the type of the operands after conversion. Since the conversions performed by the additive operators do not provide for overflow or underflow conditions, information may be lost if the result of an additive operation cannot be represented in the type of the operands after conversion.  
  
## See Also  
 [Additive Operators: + and -](../cpp/additive-operators-plus-and.md)