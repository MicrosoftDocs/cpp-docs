---
description: "Learn more about: Compiler Error C2256"
title: "Compiler Error C2256"
ms.date: "11/04/2016"
f1_keywords: ["C2256"]
helpviewer_keywords: ["C2256"]
ms.assetid: 171fa2bc-8c72-49cd-afe5-d723b7acd3c5
---
# Compiler Error C2256

illegal use of friend specifier on 'function'

A destructor or constructor cannot be specified as a [friend](../../cpp/friend-cpp.md).

The following sample generates C2256:

```cpp
// C2256.cpp
// compile with: /c
class C {
public:
   friend ~C();   // C2256
   ~C();   // OK
};
```
