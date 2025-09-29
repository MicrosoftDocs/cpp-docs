---
title: "Compiler Error C3420"
description: "Learn more about: Compiler Error C3420"
ms.date: 11/04/2016
f1_keywords: ["C3420"]
helpviewer_keywords: ["C3420"]
---
# Compiler Error C3420

> 'finalizer' : a finalizer cannot be virtual

## Remarks

A finalizer can only be called non-virtually from its enclosing type. Therefore, it is an error to declare a virtual finalizer.

For more information, see [Destructors and finalizers in How to: Define and consume classes and structs (C++/CLI)](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers).

## Example

The following example generates C3420.

```cpp
// C3420.cpp
// compile with: /clr /c
ref class R {
   virtual !R() {}   // C3420
};
```
