---
description: "Learn more about: Compiler Error C3071"
title: "Compiler Error C3071"
ms.date: "11/04/2016"
f1_keywords: ["C3071"]
helpviewer_keywords: ["C3071"]
ms.assetid: 69879e66-a60e-4058-9bbd-d5c5e2d8ee37
---
# Compiler Error C3071

operator 'operator' can only be applied to an instance of a ref class or a value-type

A CLR operator cannot be used on a native type. The operator can be used on a ref class or a ref struct (a value type) but not a native type such as int or an alias for a native type such as System::Int32. These types can't be boxed from C++ code in a way that refers to the native variable, so the operator cannot be used.

For more information, see [Tracking Reference Operator](../../extensions/tracking-reference-operator-cpp-component-extensions.md).

## Example

The following sample generates C3071.

```cpp
// C3071.cpp
// compile with: /clr
class N {};
ref struct R {};

int main() {
   N n;
   %n;   // C3071

   R r;
   R ^ r2 = %r;   // OK
}
```
