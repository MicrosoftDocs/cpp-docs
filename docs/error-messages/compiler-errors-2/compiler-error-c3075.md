---
description: "Learn more about: Compiler Error C3075"
title: "Compiler Error C3075"
ms.date: "11/04/2016"
f1_keywords: ["C3075"]
helpviewer_keywords: ["C3075"]
ms.assetid: f431daa9-e0fa-48f0-a5c3-f99be96b55e3
---
# Compiler Error C3075

'instance' : you cannot embed an instance of a reference type, 'type', in a value-type

A value type cannot contain an instance of a reference type.

For more information, see [C++ Stack Semantics for Reference Types](../../dotnet/cpp-stack-semantics-for-reference-types.md).

## Example

The following sample generates C3075.

```cpp
// C3075.cpp
// compile with: /clr /c
ref struct U {};
value struct X {
   U y;   // C3075
};

ref struct Y {
   U y;   // OK
};
```
