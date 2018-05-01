---
title: "Unary Plus and Negation Operators: + and - | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "+"
  - "-"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "unary operators, plus"
  - "- operator"
  - "negation operator"
  - "+ operator, unary operators"
  - "+ operator"
ms.assetid: 2c58c4f4-0d92-4ae3-9d0c-1a6157875cc1
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Unary Plus and Negation Operators: + and -
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Unary Plus and Negation Operators: + and -](https://docs.microsoft.com/cpp/cpp/unary-plus-and-negation-operators-plus-and).  
  
Syntax  
  
```  
  
+ cast-expression  
```  
  
```  
  
- cast-expression  
```  
  
## + operator  
 The result of the unary plus operator (**+**) is the value of its operand. The operand to the unary plus operator must be of an arithmetic type.  
  
 Integral promotion is performed on integral operands. The resultant type is the type to which the operand is promoted. Thus, the expression `+ch`, where `ch` is of type `char`, results in type `int`; the value is unmodified. See [Integral Promotions](../misc/integral-promotions.md) for more information about how the promotion is done.  
  
## - operator  
 The unary negation operator (**–**) produces the negative of its operand. The operand to the unary negation operator must be an arithmetic type.  
  
 Integral promotion is performed on integral operands, and the resultant type is the type to which the operand is promoted. See [Integral Promotions](../misc/integral-promotions.md) for more information about how the promotion is performed.  
  
## Microsoft specific  
 Unary negation of unsigned quantities is performed by subtracting the value of the operand from 2^n, where n is the number of bits in an object of the given unsigned type. (Microsoft C++ runs on processors that utilize two's-complement arithmetic. On other processors, the algorithm for negation can differ.)  
  
## See Also  
 [Expressions with Unary Operators](../cpp/expressions-with-unary-operators.md)   
 [C++ Operators](../misc/cpp-operators.md)   
 [C++ Built-in Operators, Precedence and Associativity](../cpp/cpp-built-in-operators-precedence-and-associativity.md)





