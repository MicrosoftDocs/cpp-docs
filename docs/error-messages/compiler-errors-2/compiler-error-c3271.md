---
title: "Compiler Error C3271"
description: "Learn more about: Compiler Error C3271"
ms.date: 11/04/2016
f1_keywords: ["C3271"]
helpviewer_keywords: ["C3271"]
---
# Compiler Error C3271

> 'member': invalid value 'value' for the FieldOffset attribute

## Remarks

A negative number was passed to the **FieldOffset** attribute.

## Example

The following example generates C3271:

```cpp
// C3271.cpp
// compile with: /clr /c
using namespace System;
using namespace System::Runtime::InteropServices;

[StructLayout(LayoutKind::Explicit)]
value class MyStruct1 {
   public: [FieldOffset(0)] int a;
   public: [FieldOffset(-1)] long b;   // C3271
};
```
