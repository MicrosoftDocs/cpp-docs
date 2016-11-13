---
title: "Unary Arithmetic Operators | Microsoft Docs"
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
  - "operators [C], unary"
  - "tilde (~) one's complement operator"
  - "bitwise-complement operator"
  - "arithmetic operators [C++], unary"
  - "+ operator, unary operators"
  - "unary operators"
  - "exclamation points"
  - "~ operator, one's complement operator"
  - "logical negation"
  - "! operator, unary arithmetic operators"
ms.assetid: 78c91415-d469-499e-9dfe-4435350fd333
caps.latest.revision: 6
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
# Unary Arithmetic Operators
The C unary plus, arithmetic-negation, complement, and logical-negation operators are discussed in the following list:  
  
|Operator|Description|  
|--------------|-----------------|  
|**+**|The unary plus operator preceding an expression in parentheses forces the grouping of the enclosed operations. It is used with expressions involving more than one associative or commutative binary operator. The operand must have arithmetic type. The result is the value of the operand. An integral operand undergoes integral promotion. The type of the result is the type of the promoted operand.|  
|**–**|The arithmetic-negation operator produces the negative (two's complement) of its operand. The operand must be an integral or floating value. This operator performs the usual arithmetic conversions.|  
|`~`|The bitwise-complement (or bitwise-NOT) operator produces the bitwise complement of its operand. The operand must be of integral type. This operator performs usual arithmetic conversions; the result has the type of the operand after conversion.|  
|**!**|The logical-negation (logical-NOT) operator produces the value 0 if its operand is true (nonzero) and the value 1 if its operand is false (0). The result has `int` type. The operand must be an integral, floating, or pointer value.|  
  
 Unary arithmetic operations on pointers are illegal.  
  
## Examples  
 The following examples illustrate the unary arithmetic operators:  
  
```  
short x = 987;  
    x = -x;  
```  
  
 In the example above, the new value of `x` is the negative of 987, or –987.  
  
```  
unsigned short y = 0xAAAA;  
    y = ~y;  
```  
  
 In this example, the new value assigned to `y` is the one's complement of the unsigned value 0xAAAA, or 0x5555.  
  
```  
if( !(x < y) )  
```  
  
 If `x` is greater than or equal to `y`, the result of the expression is 1 (true). If `x` is less than `y`, the result is 0 (false).  
  
## See Also  
 [Expressions with Unary Operators](../cpp/expressions-with-unary-operators.md)