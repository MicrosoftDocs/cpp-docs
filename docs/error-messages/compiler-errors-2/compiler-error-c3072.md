---
description: "Learn more about: Compiler Error C3072"
title: "Compiler Error C3072"
ms.date: "11/04/2016"
f1_keywords: ["C3072"]
helpviewer_keywords: ["C3072"]
ms.assetid: cdd5cb6b-c478-4698-adfa-c40188d34a18
---
# Compiler Error C3072

> operator '*operator-name*' cannot be applied to an instance of a ref class

use the unary *operator-name* operator to convert an instance of a ref class to a handle type

A CLR type requires CLR operators, not native (or standard) operators.  For more information, see [Tracking Reference Operator](../../extensions/tracking-reference-operator-cpp-component-extensions.md).

## Example

The following sample generates C3072.

```cpp
// C3072.cpp
// compile with: /clr
ref class R {};

int main() {
   R r1;
   R^ r2 = &r1;   // C3072
   R^ r3 = %r1;   // OK
}
```
