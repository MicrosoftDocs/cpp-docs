---
title: "One&#39;s Complement Operator: ~ | Microsoft Docs"
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
  - "~"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "tilde (~) one's complement operator"
  - "one's complement operator"
  - "bitwise-complement operator"
  - "compl operator"
  - "~ operator, syntax"
ms.assetid: 4bf81967-34f7-4b4b-aade-fd03d5da0174
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# One&#39;s Complement Operator: ~
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [One&#39;s Complement Operator: ~](https://docs.microsoft.com/cpp/cpp/one-s-complement-operator-tilde).  
  
Syntax  
  
```  
  
~ cast-expression  
```  
  
## Remarks  
 The one's complement operator (`~`), sometimes called the "bitwise complement" operator, yields a bitwise one's complement of its operand. That is, every bit that is 1 in the operand is 0 in the result. Conversely, every bit that is 0 in the operand is 1 in the result. The operand to the one's complement operator must be an integral type.  
  
## Operator Keyword for ~  
 The `compl` operator is the text equivalent of `~`. There are two ways to access the `compl` operator in your programs: include the header file `iso646.h`, or compile with [/Za](../build/reference/za-ze-disable-language-extensions.md).  
  
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
  
 Integral promotion is performed on integral operands, and the resultant type is the type to which the operand is promoted. See [Integral Promotions](../misc/integral-promotions.md) for more information on how the promotion is done.  
  
## See Also  
 [Expressions with Unary Operators](../cpp/expressions-with-unary-operators.md)   
 [C++ Operators](../misc/cpp-operators.md)   
 [C++ Built-in Operators, Precedence and Associativity](../cpp/cpp-built-in-operators-precedence-and-associativity.md)   
 [Unary Arithmetic Operators](../c-language/unary-arithmetic-operators.md)





