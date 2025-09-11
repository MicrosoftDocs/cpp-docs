---
title: "Compiler Error C3270"
description: "Learn more about: Compiler Error C3270"
ms.date: 11/04/2016
f1_keywords: ["C3270"]
helpviewer_keywords: ["C3270"]
---
# Compiler Error C3270

> 'field': the FieldOffset attribute can only be used in the context of StructLayout(Explicit), in which case it is required

## Remarks

A field was marked with **FieldOffset**, which is only allowed when **StructLayout(Explicit)** is in effect.

## Example

The following example generates C3270:

```cpp
// C3270_2.cpp
// compile with: /clr /c
using namespace System::Runtime::InteropServices;

[ StructLayout(LayoutKind::Sequential) ]
// try the following line instead
// [ StructLayout(LayoutKind::Explicit) ]
public value struct MYUNION
{
   [FieldOffset(0)] int a;   // C3270
   // ...
};
```
