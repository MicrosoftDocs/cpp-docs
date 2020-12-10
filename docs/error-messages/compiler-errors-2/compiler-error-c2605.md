---
description: "Learn more about: Compiler Error C2605"
title: "Compiler Error C2605"
ms.date: "11/04/2016"
f1_keywords: ["C2605"]
helpviewer_keywords: ["C2605"]
ms.assetid: a0e6f132-5acf-4e19-b277-ddf196d182bf
---
# Compiler Error C2605

'name' : this method is reserved within a managed or WinRT class

Certain names are reserved by the compiler for internal functions.  For more information, see [Destructors and finalizers](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers).

## Example

The following sample generates C2605.

```cpp
// C2605.cpp
// compile with: /clr /c
ref class R {
protected:
   void Finalize() {}   // C2605
};
```
