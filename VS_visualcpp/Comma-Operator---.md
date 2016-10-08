---
title: "Comma Operator: ,"
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
ms.assetid: 38e0238e-19da-42ba-ae62-277bfdab6090
caps.latest.revision: 7
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
# Comma Operator: ,
Allows grouping two statements where one is expected.  
  
## Syntax  
  
```  
  
expression , expression  
```  
  
## Remarks  
 The comma operator has left-to-right associativity. Two expressions separated by a comma are evaluated left to right. The left operand is always evaluated, and all side effects are completed before the right operand is evaluated.  
  
 Commas can be used as separators in some contexts, such as function argument lists. Do not confuse the use of the comma as a separator with its use as an operator; the two uses are completely different.  
  
 Consider the expression  
  
 *e1* , *e2*  
  
 The type and value of the expression are the type and value of *e2*; the result of evaluating *e1* is discarded. The result is an l-value if the right operand is an l-value.  
  
 Where the comma is normally used as a separator (for example in actual arguments to functions or aggregate initializers), the comma operator and its operands must be enclosed in parentheses. For example:  
  
```  
func_one( x, y + 2, z );  
func_two( (x--, y + 2), z );  
```  
  
 In the function call to `func_one` above, three arguments, separated by commas, are passed: `x`, `y + 2`, and `z`. In the function call to `func_two`, parentheses force the compiler to interpret the first comma as the sequential-evaluation operator. This function call passes two arguments to `func_two`. The first argument is the result of the sequential-evaluation operation `(x--, y + 2)`, which has the value and type of the expression `y + 2`; the second argument is `z`.  
  
## Example  
  
```  
// cpp_comma_operator.cpp  
#include <stdio.h>  
int main () {  
   int i = 10, b = 20, c= 30;  
   i = b, c;  
   printf("%i\n", i);  
  
   i = (b, c);  
   printf("%i\n", i);  
}  
```  
  
 **20**  
**30**   
## See Also  
 [Expressions with Binary Operators](../VS_visualcpp/Expressions-with-Binary-Operators.md)   
 [C++ Operators](../Topic/C++%20Operators.md)   
 [C++ Built-in Operators, Precedence and Associativity](../VS_visualcpp/C---Built-in-Operators--Precedence-and-Associativity.md)   
 [Sequential-Evaluation Operator](../VS_visualcpp/Sequential-Evaluation-Operator.md)