---
title: "Compiler Error C2394"
description: "Learn more about: Compiler Error C2394"
ms.date: "11/04/2016"
f1_keywords: ["C2394"]
helpviewer_keywords: ["C2394"]
---
# Compiler Error C2394

> '*type*::operator *operator*': CLR/WinRT operator not valid. At least one parameter must be of the following types: 'T^', 'T^%', 'T^&', where T = 'type'

## Remarks

An operator in a Windows Runtime or managed type did not have at least one parameter whose type is the same as the type of the operator return value.

## Example

The following sample generates C2394:

```cpp
// C2394.cpp
// compile with: /clr /c
ref struct Y {
   static Y^ operator -(int i, char c);   // C2394

   // OK
   static Y^ operator -(Y^ hY, char c);
   // or
   static Y^ operator -(int i, Y^& rhY);
};
```
