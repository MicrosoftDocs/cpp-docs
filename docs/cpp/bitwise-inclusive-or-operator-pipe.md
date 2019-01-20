---
title: "Bitwise inclusive OR operator: |"
ms.date: "06/14/2018"
f1_keywords: ["bitor", "|"]
helpviewer_keywords: ["OR operator [C++], bitwise inclusive", "bitwise operators [C++], OR operator", "inclusive OR operator", "| operator"]
ms.assetid: 4c8a6a68-d828-447d-875a-aedb4ce3aa9a
---
# Bitwise inclusive OR operator: |

## Syntax

> *expression1* **|** *expression2*

## Remarks

The bitwise inclusive OR operator (**&#124;**) compares each bit of its first operand to the corresponding bit of its second operand. If either bit is 1, the corresponding result bit is set to 1. Otherwise, the corresponding result bit is set to 0.

Both operands to the bitwise inclusive OR operator must be of integral types. The usual arithmetic conversions covered in [Standard Conversions](standard-conversions.md) are applied to the operands.

## Operator keyword for &#124;

The **bitor** operator is the text equivalent of **&#124;**. There are two ways to access the **bitor** operator in your programs: include the header file \<iso646.h>, or compile with the [/Za](../build/reference/za-ze-disable-language-extensions.md) (Disable language extensions) compiler option.

## Example

```cpp
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

## See also

- [C++ Built-in Operators, Precedence and Associativity](../cpp/cpp-built-in-operators-precedence-and-associativity.md)
- [C Bitwise Operators](../c-language/c-bitwise-operators.md)
