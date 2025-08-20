---
title: "Compiler Error C3288"
description: "Learn more about: Compiler Error C3288"
ms.date: 11/04/2016
f1_keywords: ["C3288"]
helpviewer_keywords: ["C3288"]
---
# Compiler Error C3288

> 'type' : illegal dereference of a handle type

## Remarks

The compiler detected an illegal dereference of a handle type. You can dereference a handle type and assign it to a reference. For more information, see [Tracking Reference Operator](../../extensions/tracking-reference-operator-cpp-component-extensions.md).

## Example

The following example generates C3288.

```cpp
// C3288.cpp
// compile with: /clr
ref class R {};
int main() {
   *(System::Object^) nullptr;   // C3288

// OK
   (System::Object^) nullptr;   // OK
   R^ r;
   R% pr = *r;
}
```
