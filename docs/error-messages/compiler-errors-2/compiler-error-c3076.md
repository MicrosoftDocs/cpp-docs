---
title: "Compiler Error C3076"
description: "Learn more about: Compiler Error C3076"
ms.date: 11/04/2016
f1_keywords: ["C3076"]
helpviewer_keywords: ["C3076"]
---
# Compiler Error C3076

> 'instance' : you cannot embed an instance of a reference type, 'type', in a native type

## Remarks

A native type cannot contain an instance of a CLR type.

For more information, see [C++ Stack Semantics for Reference Types](../../dotnet/cpp-stack-semantics-for-reference-types.md).

## Example

The following example generates C3076.

```cpp
// C3076.cpp
// compile with: /clr /c
ref struct U {};

struct V {
   U y;   // C3076
};

ref struct W {
   U y;   // OK
};
```
