---
description: "Learn more about: Compiler Error C3628"
title: "Compiler Error C3628"
ms.date: "11/04/2016"
f1_keywords: ["C3628"]
helpviewer_keywords: ["C3628"]
ms.assetid: 0ff5a4a4-fcc9-47a0-a4d8-8af9cf2815f6
---
# Compiler Error C3628

'base class' : managed or WinRTclasses only support public inheritance

An attempt was made to use a managed or WinRT class as a [private](../../cpp/private-cpp.md) or [protected](../../cpp/protected-cpp.md) base class. A managed or WinRT class can only be used as a base class with [public](../../cpp/public-cpp.md) access.

The following sample generates C3628 and shows how to fix it:

```cpp
// C3628a.cpp
// compile with: /clr
ref class B {
};

ref class D : private B {   // C3628

// The following line resolves the error.
// ref class D : public B {
};

int main() {
}
```
