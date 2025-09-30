---
title: "Compiler Error C3195"
description: "Learn more about: Compiler Error C3195"
ms.date: 11/04/2016
f1_keywords: ["C3195"]
helpviewer_keywords: ["C3195"]
---
# Compiler Error C3195

> 'operator' : is reserved and cannot be used as a member of a ref class or value type. CLR or WinRT operators must be defined using the 'operator' keyword

## Remarks

The compiler detected an operator definition using the Managed Extensions for C++ syntax. You must use the C++ syntax for operators.

## Example

The following example generates C3195 and shows how to fix it:

```cpp
// C3195.cpp
// compile with: /clr /LD
#using <mscorlib.dll>
value struct V {
   static V op_Addition(V v, int i);   // C3195
   static V operator +(V v, char c);   // OK for new C++ syntax
};
```
