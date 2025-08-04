---
title: "Compiler Error C2691"
description: "Learn more about: Compiler Error C2691"
ms.date: 11/04/2016
f1_keywords: ["C2691"]
helpviewer_keywords: ["C2691"]
---
# Compiler Error C2691

> 'data type' : a managed or WinRTarray cannot have this element type

## Remarks

The type of a managed or WinRT array element can be a value type or a reference type.

## Example

The following example generates C2691:

```cpp
// C2691a.cpp
// compile with: /clr
class A {};

int main() {
   array<A>^ a1 = gcnew array<A>(20);   // C2691
   array<int>^ a2 = gcnew array<int>(20);   // value type OK
}
```
