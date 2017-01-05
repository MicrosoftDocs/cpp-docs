---
title: "Multiplicative Operators and the Modulus Operator | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "%"
  - "/"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operators [C++], multiplicative"
  - "arithmetic operators [C++], multiplicative operators"
  - "modulus operator, C+"
  - "* operator"
  - "division operator, multiplicative operators"
  - "% operator"
  - "multiplication operator [C++], multiplicative operators"
  - "multiplicative operators [C++]"
  - "division operator"
ms.assetid: b53ea5da-d0b4-40dc-98f3-0aa52d548293
caps.latest.revision: 9
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
# Multiplicative Operators and the Modulus Operator
## Syntax  
  
```  
expression * expression   
expression / expression   
expression % expression  
```  
  
## Remarks  
 The multiplicative operators are:  
  
-   Multiplication (**\***)  
  
-   Division (**/**)  
  
-   Modulus (remainder from division) (`%`)  
  
 These binary operators have left-to-right associativity.  
  
 The multiplicative operators take operands of arithmetic types. The modulus operator (`%`) has a stricter requirement in that its operands must be of integral type. (To get the remainder of a floating-point division, use the run-time function, [fmod](../c-runtime-library/reference/fmod-fmodf.md).) The conversions covered in [Standard Conversions](standard-conversions.md) are applied to the operands, and the result is of the converted type.  
  
 The multiplication operator yields the result of multiplying the first operand by the second.  
  
 The division operator yields the result of dividing the first operand by the second.  
  
 The modulus operator yields the remainder given by the following expression, where *e1* is the first operand and *e2* is the second: *e1* – (*e1* / *e2*) \* *e2*, where both operands are of integral types.  
  
 Division by 0 in either a division or a modulus expression is undefined and causes a run-time error. Therefore, the following expressions generate undefined, erroneous results:  
  
```  
i % 0  
f / 0.0  
```  
  
 If both operands to a multiplication, division, or modulus expression have the same sign, the result is positive. Otherwise, the result is negative. The result of a modulus operation's sign is implementation-defined.  
  
> [!NOTE]
>  Since the conversions performed by the multiplicative operators do not provide for overflow or underflow conditions, information may be lost if the result of a multiplicative operation cannot be represented in the type of the operands after conversion.  
  
## Microsoft Specific  
 In Microsoft C++, the result of a modulus expression is always the same as the sign of the first operand.  
  
## END Microsoft Specific  
 If the computed division of two integers is inexact and only one operand is negative, the result is the largest integer (in magnitude, disregarding the sign) that is less than the exact value the division operation would yield. For example, the computed value of –11 / 3 is –3.666666666. The result of that integral division is –3.  
  
 The relationship between the multiplicative operators is given by the identity (*e1* / *e2*) \* *e2* + *e1* % *e2* == *e1*.  
  
## Example  
 The following program demonstrates the multiplicative operators. Note that either operand of `10 / 3` must be explicitly cast to type `float` to avoid truncation so that both operands are of type `float` before division.  
  
```  
// expre_Multiplicative_Operators.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
int main() {  
   int x = 3, y = 6, z = 10;  
   cout  << "3 * 6 is " << x * y << endl  
         << "6 / 3 is " << y / x << endl  
         << "10 % 3 is " << z % x << endl  
         << "10 / 3 is " << (float) z / x << endl;  
}  
```  
  
## See Also  
 [Expressions with Binary Operators](../cpp/expressions-with-binary-operators.md)   
 [C++ Built-in Operators, Precedence and Associativity](../cpp/cpp-built-in-operators-precedence-and-associativity.md)   
 [C Multiplicative Operators](../c-language/c-multiplicative-operators.md)