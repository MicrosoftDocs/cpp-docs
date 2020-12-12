---
description: "Learn more about: Compiler Error C2395"
title: "Compiler Error C2395"
ms.date: "11/04/2016"
f1_keywords: ["C2395"]
helpviewer_keywords: ["C2395"]
ms.assetid: 2d9e3b28-8c2c-4f41-a57f-61ef88fc2af0
---
# Compiler Error C2395

'your_type::operator'op'' : CLR or WinRT operator not valid. At least one parameter must be of the following types: 'T', 'T%', 'T&', 'T^', 'T^%', 'T^&', where T = 'your_type'

An operator in a Windows Runtime or managed type did not have at least one parameter whose type is the same as the type of the operator return value.

The following sample generates C2395 and shows how to fix it:

```cpp
// C2395.cpp
// compile with: /clr /c
value struct V {
   static V operator *(int i, char c);   // C2395

   // OK
   static V operator *(V v, char c);
   // or
   static V operator *(int i, V& rv);
};
```
