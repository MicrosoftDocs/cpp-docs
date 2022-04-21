---
title: "Bitwise inclusive OR operator: |"
description: "The C++ standard language bitwise inclusive OR operator syntax and use."
ms.date: 07/23/2020
f1_keywords: ["|", "bitor_cpp"]
helpviewer_keywords: ["OR operator [C++], bitwise inclusive", "bitwise operators [C++], OR operator", "inclusive OR operator", "| operator"]
ms.assetid: 4c8a6a68-d828-447d-875a-aedb4ce3aa9a
---
# Bitwise inclusive OR operator: `|`

## Syntax

> *expression1* **`|`** *expression2*

## Remarks

The bitwise inclusive OR operator (**`|`**) compares each bit of its first operand to the corresponding bit of its second operand. If either bit is 1, the corresponding result bit is set to 1. Otherwise, the corresponding result bit is set to 0.

Both operands to the operator must have integral types. The usual arithmetic conversions covered in [Standard Conversions](standard-conversions.md) are applied to the operands.

## Operator keyword for `|`

C++ specifies **`bitor`** as an alternative spelling for **`|`**. In C, the alternative spelling is provided as a macro in the \<iso646.h> header. In C++, the alternative spelling is a keyword; use of \<iso646.h> or the C++ equivalent \<ciso646> is deprecated. In Microsoft C++, the [`/permissive-`](../build/reference/permissive-standards-conformance.md) or [`/Za`](../build/reference/za-ze-disable-language-extensions.md) compiler option is required to enable the alternative spelling.

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

[C++ built-in operators, precedence, and associativity](../cpp/cpp-built-in-operators-precedence-and-associativity.md)<br/>
[C bitwise operators](../c-language/c-bitwise-operators.md)
