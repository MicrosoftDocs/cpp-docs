---
title: "One&#39;s Complement Operator: ~"
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
ms.assetid: 4bf81967-34f7-4b4b-aade-fd03d5da0174
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
# One&#39;s Complement Operator: ~
## Syntax  
  
```  
  
~ cast-expression  
```  
  
## Remarks  
 The one's complement operator (`~`), sometimes called the "bitwise complement" operator, yields a bitwise one's complement of its operand. That is, every bit that is 1 in the operand is 0 in the result. Conversely, every bit that is 0 in the operand is 1 in the result. The operand to the one's complement operator must be an integral type.  
  
## Operator Keyword for ~  
 The `compl` operator is the text equivalent of `~`. There are two ways to access the `compl` operator in your programs: include the header file `iso646.h`, or compile with [/Za](../VS_visualcpp/-Za---Ze--Disable-Language-Extensions-.md).  
  
## Example  
  
```  
// expre_One_Complement_Operator.cpp  
// compile with: /EHsc  
#include <iostream>  
  
using namespace std;  
  
int main () {  
   unsigned short y = 0xFFFF;  
   cout << hex << y << endl;  
   y = ~y;   // Take one's complement  
   cout << hex << y << endl;  
}  
```  
  
 In this example, the new value assigned to `y` is the one's complement of the unsigned value 0xFFFF, or 0x0000.  
  
 Integral promotion is performed on integral operands, and the resultant type is the type to which the operand is promoted. See [Integral Promotions](../Topic/Integral%20Promotions.md) for more information on how the promotion is done.  
  
## See Also  
 [Expressions with Unary Operators](../VS_visualcpp/Expressions-with-Unary-Operators.md)   
 [C++ Operators](../Topic/C++%20Operators.md)   
 [C++ Built-in Operators, Precedence and Associativity](../VS_visualcpp/C---Built-in-Operators--Precedence-and-Associativity.md)   
 [Unary Arithmetic Operators](../VS_visualcpp/Unary-Arithmetic-Operators.md)