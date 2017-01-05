---
title: "Additive Operators: + and - | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "-"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operators [C++], addition"
  - "subtraction operator, additive operators"
  - "+ operator, additive operators"
  - "additive operators"
  - "arithmetic operators [C++], additive operators"
  - "- operator, additive operators in C++"
ms.assetid: d4afafe7-e201-4c69-a649-37f17756e784
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
# Additive Operators: + and -
## Syntax  
  
```  
expression + expression   
expression – expression  
```  
  
## Remarks  
 The additive operators are:  
  
-   Addition (**+**)  
  
-   Subtraction (**–**)  
  
 These binary operators have left-to-right associativity.  
  
 The additive operators take operands of arithmetic or pointer types. The result of the addition (**+**) operator is the sum of the operands. The result of the subtraction (**–**) operator is the difference between the operands. If one or both of the operands are pointers, they must be pointers to objects, not to functions. If both operands are pointers, the results are not meaningful unless both are pointers to objects in the same array.  
  
 Additive operators take operands of *arithmetic*, *integral*, and *scalar* types. These are defined in the following table.  
  
### Types Used with Additive Operators  
  
|Type|Meaning|  
|----------|-------------|  
|*arithmetic*|Integral and floating types are collectively called "arithmetic" types.|  
|*integral*|Types char and int of all sizes (long, short) and enumerations are "integral" types.|  
|*scalar*|Scalar operands are operands of either arithmetic or pointer type.|  
  
 The legal combinations for these operators are:  
  
 *arithmetic* + *arithmetic*  
  
 *scalar* + *integral*  
  
 *integral* + *scalar*  
  
 *arithmetic* – *arithmetic*  
  
 *scalar* – *scalar*  
  
 Note that addition and subtraction are not equivalent operations.  
  
 If both operands are of arithmetic type, the conversions covered in [Standard Conversions](standard-conversions.md) are applied to the operands, and the result is of the converted type.  
  
## Example  
  
```  
// expre_Additive_Operators.cpp  
// compile with: /EHsc  
#include <iostream>  
#define SIZE 5  
using namespace std;  
int main() {  
   int i = 5, j = 10;  
   int n[SIZE] = { 0, 1, 2, 3, 4 };  
   cout  << "5 + 10 = " << i + j << endl  
         << "5 - 10 = " << i - j << endl;  
  
   // use pointer arithmetic on array  
  
   cout << "n[3] = " << *( n + 3 ) << endl;  
}  
```  
  
## Pointer addition  
 If one of the operands in an addition operation is a pointer to an array of objects, the other must be of integral type. The result is a pointer that is of the same type as the original pointer and that points to another array element. The following code fragment illustrates this concept:  
  
```  
short IntArray[10]; // Objects of type short occupy 2 bytes  
short *pIntArray = IntArray;  
  
for( int i = 0; i < 10; ++i )  
{  
    *pIntArray = i;  
    cout << *pIntArray << "\n";  
    pIntArray = pIntArray + 1;  
}  
```  
  
 Although the integral value 1 is added to `pIntArray`, it does not mean "add 1 to the address"; rather it means "adjust the pointer to point to the next object in the array" that happens to be 2 bytes (or `sizeof( int )`) away.  
  
> [!NOTE]
>  Code of the form `pIntArray = pIntArray + 1` is rarely found in C++ programs; to perform an increment, these forms are preferable: `pIntArray++` or `pIntArray += 1`.  
  
## Pointer subtraction  
 If both operands are pointers, the result of subtraction is the difference (in array elements) between the operands. The subtraction expression yields a signed integral result of type ptrdiff_t (defined in the standard include file STDDEF.H).  
  
 One of the operands can be of integral type, as long as it is the second operand. The result of the subtraction is of the same type as the original pointer. The value of the subtraction is a pointer to the (*n* – *i*)th array element, where *n* is the element pointed to by the original pointer and *i* is the integral value of the second operand.  
  
## See Also  
 [Expressions with Binary Operators](../cpp/expressions-with-binary-operators.md)   
 [C++ Built-in Operators, Precedence and Associativity](../cpp/cpp-built-in-operators-precedence-and-associativity.md)   
 [C Additive Operators](../c-language/c-additive-operators.md)