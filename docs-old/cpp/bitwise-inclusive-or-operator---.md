---
title: "Bitwise Inclusive OR Operator: |"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "language-reference"
f1_keywords: 
  - "bitor"
  - "|"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OR operator, bitwise inclusive"
  - "bitwise operators, OR operator"
  - "inclusive OR operator"
  - "| operator"
ms.assetid: 4c8a6a68-d828-447d-875a-aedb4ce3aa9a
caps.latest.revision: 7
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
# Bitwise Inclusive OR Operator: |
## Syntax  
  
```  
  
expression   
|  
 expression  
  
```  
  
## Remarks  
 The bitwise inclusive OR operator (**&#124;**) compares each bit of its first operand to the corresponding bit of its second operand. If either bit is 1, the corresponding result bit is set to 1. Otherwise, the corresponding result bit is set to 0.  
  
 Both operands to the bitwise inclusive OR operator must be of integral types. The usual arithmetic conversions covered in [Arithmetic Conversions](../notintoc/arithmetic-conversions.md) are applied to the operands.  
  
## Operator Keyword for &#124;  
 The `bitor` operator is the text equivalent of **&#124;**. There are two ways to access the `bitor` operator in your programs: include the header file `iso646.h`, or compile with the [/Za](../buildref/-za---ze--disable-language-extensions-.md) (Disable language extensions) compiler option.  
  
## Example  
  
```  
// expre_Bitwise_Inclusive_OR_Operator.cpp  
// compile with: /EHsc  
// Demonstrate bitwise inclusive OR  
#include <iostream>  
using namespace std;  
  
int main() {  
   unsigned short a = 0x5555;      // pattern 0101 ...  
   unsigned short b = 0xAAAA;      // pattern 1010 ...  
  
   cout  << hex << ( a | b ) << endl;   // prints "ffff" pattern 1111 ...  
}  
```  
  
## See Also  
 [C++ Bitwise Operators](../notintoc/c---bitwise-operators.md)   
 [C++ Operators](../notintoc/c---operators.md)   
 [C++ Built-in Operators, Precedence and Associativity](../cpp/c---built-in-operators--precedence-and-associativity.md)   
 [C Bitwise Operators](../c/c-bitwise-operators.md)