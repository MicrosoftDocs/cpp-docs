---
description: "Learn more about: Compiler Error C3181"
title: "Compiler Error C3181"
ms.date: "11/04/2016"
f1_keywords: ["C3181"]
helpviewer_keywords: ["C3181"]
ms.assetid: 5d450f8b-6cef-4452-a0c4-2076e967451d
---
# Compiler Error C3181

'type' : invalid operand for operator

An invalid parameter was passed to the [typeid](../../extensions/typeid-cpp-component-extensions.md) operator. The parameter must be a managed type.

Note that the compiler uses aliases for native types that map to types in the common language runtime.

The following sample generates C3181:

```cpp
// C3181a.cpp
// compile with: /clr
using namespace System;

int main() {
   Type ^pType1 = interior_ptr<int>::typeid;   // C3181
   Type ^pType2 = int::typeid;   // OK
}
```
