---
title: "Bitwise exclusive OR operator: ^"
description: "The C++ standard language exclusive OR operator syntax and use."
ms.date: 09/21/2020
f1_keywords: ["xor_cpp", "^"]
helpviewer_keywords: ["operators [C++], bitwise", "exclusive OR operator", "XOR operator", "bitwise operators [C++], OR operator", "^ operator", "OR operator [C++], bitwise exclusive", "operators [C++], logical"]
ms.assetid: f9185d85-65d5-4f64-a6d6-679758d52217
---
# Bitwise exclusive OR operator: ^

## Syntax

> *expression* **`^`** *expression*

## Remarks

The bitwise exclusive OR operator (**`^`**) compares each bit of its first operand to the corresponding bit of its second operand. If the bit in one of the operands is 0 and the bit in the other operand is 1, the corresponding result bit is set to 1. Otherwise, the corresponding result bit is set to 0.

Both operands to the operator must have integral types. The usual arithmetic conversions covered in [Standard Conversions](standard-conversions.md) are applied to the operands.

For more information on the alternate usage of the **`^`** character in C++/CLI and C++/CX, see [Handle to Object Operator (^) (C++/CLI and C++/CX)](../extensions/handle-to-object-operator-hat-cpp-component-extensions.md).

## Operator keyword for ^

C++ specifies **`xor`** as an alternative spelling for **`^`**. In C, the alternative spelling is provided as a macro in the \<iso646.h> header. In C++, the alternative spelling is a keyword; use of \<iso646.h> or the C++ equivalent \<ciso646> is deprecated. In Microsoft C++, the [`/permissive-`](../build/reference/permissive-standards-conformance.md) or [`/Za`](../build/reference/za-ze-disable-language-extensions.md) compiler option is required to enable the alternative spelling.

## Example

```cpp
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

## See also

[C++ built-in operators, precedence, and associativity](../cpp/cpp-built-in-operators-precedence-and-associativity.md)
