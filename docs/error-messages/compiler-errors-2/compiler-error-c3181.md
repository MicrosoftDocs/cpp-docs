---
title: "Compiler Error C3181"
description: "Learn more about: Compiler Error C3181"
ms.date: 11/04/2016
f1_keywords: ["C3181"]
helpviewer_keywords: ["C3181"]
---
# Compiler Error C3181

> 'type' : invalid operand for operator

## Remarks

An invalid parameter was passed to the [typeid](../../extensions/typeid-cpp-component-extensions.md) operator. The parameter must be a managed type.

Note that the compiler uses aliases for native types that map to types in the common language runtime.

## Example

The following example generates C3181:

```cpp
// C3181a.cpp
// compile with: /clr
using namespace System;

int main() {
   Type ^pType1 = interior_ptr<int>::typeid;   // C3181
   Type ^pType2 = int::typeid;   // OK
}
```
