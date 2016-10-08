---
title: "Unary Plus and Negation Operators: + and -"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: language-reference
ms.assetid: 2c58c4f4-0d92-4ae3-9d0c-1a6157875cc1
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Unary Plus and Negation Operators: + and -
## Syntax  
  
```  
  
+ cast-expression  
```  
  
```  
  
- cast-expression  
```  
  
## + operator  
 The result of the unary plus operator (**+**) is the value of its operand. The operand to the unary plus operator must be of an arithmetic type.  
  
 Integral promotion is performed on integral operands. The resultant type is the type to which the operand is promoted. Thus, the expression `+ch`, where `ch` is of type `char`, results in type `int`; the value is unmodified. See [Integral Promotions](../Topic/Integral%20Promotions.md) for more information about how the promotion is done.  
  
## - operator  
 The unary negation operator (**–**) produces the negative of its operand. The operand to the unary negation operator must be an arithmetic type.  
  
 Integral promotion is performed on integral operands, and the resultant type is the type to which the operand is promoted. See [Integral Promotions](../Topic/Integral%20Promotions.md) for more information about how the promotion is performed.  
  
## Microsoft specific  
 Unary negation of unsigned quantities is performed by subtracting the value of the operand from 2^n, where n is the number of bits in an object of the given unsigned type. (Microsoft C++ runs on processors that utilize two's-complement arithmetic. On other processors, the algorithm for negation can differ.)  
  
## See Also  
 [Expressions with Unary Operators](../VS_visualcpp/Expressions-with-Unary-Operators.md)   
 [C++ Operators](../Topic/C++%20Operators.md)   
 [C++ Built-in Operators, Precedence and Associativity](../VS_visualcpp/C---Built-in-Operators--Precedence-and-Associativity.md)