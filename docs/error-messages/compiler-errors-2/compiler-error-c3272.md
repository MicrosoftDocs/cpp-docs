---
description: "Learn more about: Compiler Error C3272"
title: "Compiler Error C3272"
ms.date: "11/04/2016"
f1_keywords: ["C3272"]
helpviewer_keywords: ["C3272"]
ms.assetid: 7cdf254d-f207-4116-a1bf-7386f3b82a6f
---
# Compiler Error C3272

'symbol' : symbol requires FieldOffset, as it is a member of type typename defined with StructLayout(LayoutKind::Explicit)

When `StructLayout(LayoutKind::Explicit)` is in effect, fields must be marked with `FieldOffset`.

The following sample generates C3272:

```cpp
// C3272_2.cpp
// compile with: /clr /c
using namespace System;
using namespace System::Runtime::InteropServices;

[StructLayout(LayoutKind::Explicit)]
ref struct X
{
   int data_;   // C3272
   // try the following line instead
   // [FieldOffset(0)] int data_;
};
```
