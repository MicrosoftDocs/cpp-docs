---
title: "Compiler Error C2217"
description: "Learn more about: Compiler Error C2217"
ms.date: 11/04/2016
f1_keywords: ["C2217"]
helpviewer_keywords: ["C2217"]
---
# Compiler Error C2217

> 'attribute1' requires 'attribute2'

## Remarks

The first function attribute requires the second attribute.

## Example

C2217 can occur if you attempt to bind a delegate to a CLR function that takes a variable number of arguments. If the function also has a param array overload, use that instead. The following example generates C2217.

```cpp
// C2217.cpp
// compile with: /clr
using namespace System;
delegate void MyDel(String^, Object^, Object^, ...);   // C2217
delegate void MyDel2(String ^, array<Object ^> ^);   // OK

int main() {
   MyDel2^ wl = gcnew MyDel2(Console::WriteLine);
   array<Object ^ > ^ x = gcnew array<Object ^>(2);
   x[0] = safe_cast<Object^>(0);
   x[1] = safe_cast<Object^>(1);

   // wl("{0}, {1}", 0, 1);
   wl("{0}, {1}", x);
}
```
