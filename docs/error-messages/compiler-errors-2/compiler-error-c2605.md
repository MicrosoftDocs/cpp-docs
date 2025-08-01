---
title: "Compiler Error C2605"
description: "Learn more about: Compiler Error C2605"
ms.date: 11/04/2016
f1_keywords: ["C2605"]
helpviewer_keywords: ["C2605"]
---
# Compiler Error C2605

> 'name' : this method is reserved within a managed or WinRT class

## Remarks

Certain names are reserved by the compiler for internal functions.  For more information, see [Destructors and finalizers](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers).

## Example

The following example generates C2605.

```cpp
// C2605.cpp
// compile with: /clr /c
ref class R {
protected:
   void Finalize() {}   // C2605
};
```
