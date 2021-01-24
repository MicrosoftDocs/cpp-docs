---
description: "Learn more about: Compiler Error C3065"
title: "Compiler Error C3065"
ms.date: "11/04/2016"
f1_keywords: ["C3065"]
helpviewer_keywords: ["C3065"]
ms.assetid: e7a0bc69-1c68-459e-a7c4-93c65609ff7c
---
# Compiler Error C3065

property declaration at non-class scope is not allowed

The [property](../../cpp/property-cpp.md) __declspec modifier was used outside a class.  A property can only be declared inside a class.

The following sample generates C3065:

```cpp
// C3065.cpp
// compile with: /c
__declspec(property(get=get_i)) int i;   // C3065

class x {
public:
   __declspec(property(get=get_i)) int i;   // OK
};
```
