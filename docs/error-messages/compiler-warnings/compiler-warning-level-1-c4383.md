---
description: "Learn more about: Compiler Warning (level 1) C4383"
title: "Compiler Warning (level 1) C4383"
ms.date: "11/04/2016"
f1_keywords: ["C4383"]
helpviewer_keywords: ["C4383"]
ms.assetid: 96c0e52d-874e-4b57-a154-0e49b6a00fae
---
# Compiler Warning (level 1) C4383

'instance_dereference_operator' : the meaning of dereferencing a handle can change, when a user-defined 'operator' operator exists; write the operator as a static function to be explicit about the operand

When you add a user-defined instance override of the dereference operator in a managed type, you potentially override the ability of the type's dereference operator to return the handle's object. Consider writing a static, user-defined dereference operator.

For more information, see [Handle to Object Operator (^)](../../extensions/handle-to-object-operator-hat-cpp-component-extensions.md) and [Tracking Reference Operator](../../extensions/tracking-reference-operator-cpp-component-extensions.md).

Also, an instance operator is not available to other language compilers via referenced metadata. For more information, see [User-Defined Operators (C++/CLI)](../../dotnet/user-defined-operators-cpp-cli.md).

## Example

The following sample generates C4383.

```cpp
// C4383.cpp
// compile with: /clr /W1

ref struct S {
   int operator*() { return 0; }   // C4383
};

ref struct T {
   static int operator*(T%) { return 0; }
};

int main() {
   S s;
   S^ pS = %s;

   T t;
   T^ pT = %t;
   T% rT = *pT;
}
```
