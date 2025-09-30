---
title: "Compiler Error C2256"
description: "Learn more about: Compiler Error C2256"
ms.date: 11/04/2016
f1_keywords: ["C2256"]
helpviewer_keywords: ["C2256"]
---
# Compiler Error C2256

> illegal use of friend specifier on 'function'

## Remarks

A destructor or constructor cannot be specified as a [friend](../../cpp/friend-cpp.md).

## Example

The following example generates C2256:

```cpp
// C2256.cpp
// compile with: /c
class C {
public:
   friend ~C();   // C2256
   ~C();   // OK
};
```
