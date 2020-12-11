---
description: "Learn more about: Compiler Error C3828"
title: "Compiler Error C3828"
ms.date: "11/04/2016"
f1_keywords: ["C3828"]
helpviewer_keywords: ["C3828"]
ms.assetid: 8d9cee75-9504-4bc8-88b6-2413618a3f45
---
# Compiler Error C3828

'object type': placement arguments not allowed while creating instances of managed or WinRTclasses

When creating an object of a managed type or Windows Runtime type, you cannot use the placement form of operator [ref new, gcnew](../../extensions/ref-new-gcnew-cpp-component-extensions.md) or [new](../../cpp/new-operator-cpp.md).

The following sample generates C3828 and shows how to fix it:

```cpp
// C3828a.cpp
// compile with: /clr
ref struct M {
};

ref struct N {
   static array<char>^ bytes = gcnew array<char>(256);
};

int main() {
   M ^m1 = new (&N::bytes) M();   // C3828
   // The following line fixes the error.
   // M ^m1 = gcnew M();
}
```
