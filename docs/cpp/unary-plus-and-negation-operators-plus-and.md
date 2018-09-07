---
title: "Unary Plus and Negation Operators: + and - | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
f1_keywords: ["+", "-"]
dev_langs: ["C++"]
helpviewer_keywords: ["unary operators [C++], plus", "- operator", "negation operator", "+ operator [C++], unary operators", "+ operator"]
ms.assetid: 2c58c4f4-0d92-4ae3-9d0c-1a6157875cc1
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Unary Plus and Negation Operators: + and -
## Syntax  
  
```  
+ cast-expression  
- cast-expression  
```  
  
## + operator  
 The result of the unary plus operator (**+**) is the value of its operand. The operand to the unary plus operator must be of an arithmetic type.  
  
 Integral promotion is performed on integral operands. The resultant type is the type to which the operand is promoted. Thus, the expression `+ch`, where `ch` is of type **char**, results in type **int**; the value is unmodified. See [Standard Conversions](standard-conversions.md) for more information about how the promotion is done.  
  
## - operator  
 The unary negation operator (**-**) produces the negative of its operand. The operand to the unary negation operator must be an arithmetic type.  
  
 Integral promotion is performed on integral operands, and the resultant type is the type to which the operand is promoted. See [Standard Conversions](standard-conversions.md) for more information about how the promotion is performed.  
  
## Microsoft specific  
 Unary negation of unsigned quantities is performed by subtracting the value of the operand from 2^n, where n is the number of bits in an object of the given unsigned type.
  
## See also  
 [Expressions with Unary Operators](../cpp/expressions-with-unary-operators.md)   
 [C++ Built-in Operators, Precedence and Associativity](../cpp/cpp-built-in-operators-precedence-and-associativity.md)