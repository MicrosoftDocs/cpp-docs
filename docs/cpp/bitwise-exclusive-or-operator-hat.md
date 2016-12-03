---
title: "Bitwise Exclusive OR Operator: ^ | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operators [C++], bitwise"
  - "exclusive OR operator"
  - "XOR operator"
  - "bitwise operators, OR operator"
  - "^ operator"
  - "OR operator, bitwise exclusive"
  - "operators [C++], logical"
ms.assetid: f9185d85-65d5-4f64-a6d6-679758d52217
caps.latest.revision: 7
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
# Bitwise Exclusive OR Operator: ^
## Syntax  
  
```  
expression ^ expression  
```  
  
## Remarks  
 The bitwise exclusive OR operator (**^**) compares each bit of its first operand to the corresponding bit of its second operand. If one bit is 0 and the other bit is 1, the corresponding result bit is set to 1. Otherwise, the corresponding result bit is set to 0.  
  
 Both operands to the bitwise exclusive OR operator must be of integral types. The usual arithmetic conversions covered in [Standard Conversions](standard-conversions.md) are applied to the operands.  
  
## Operator Keyword for ^  
 The **xor** operator is the text equivalent of **^**. There are two ways to access the **xor** operator in your programs: include the header file `iso646.h`, or compile with the [/Za](../build/reference/za-ze-disable-language-extensions.md) (Disable language extensions) compiler option.  
  
## Example  
  
```  
// expre_Bitwise_Exclusive_OR_Operator.cpp  
// compile with: /EHsc  
// Demonstrate bitwise exclusive OR  
#include <iostream>  
using namespace std;  
int main() {  
   unsigned short a = 0x5555;      // pattern 0101 ...  
   unsigned short b = 0xFFFF;      // pattern 1111 ...  
  
   cout  << hex << ( a ^ b ) << endl;   // prints "aaaa" pattern 1010 ...  
}  
```  
  
## See Also  
 [C++ Bitwise Operators](../misc/cpp-bitwise-operators.md)   
 [C++ Built-in Operators, Precedence and Associativity](../cpp/cpp-built-in-operators-precedence-and-associativity.md)   


