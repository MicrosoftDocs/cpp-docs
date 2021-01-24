---
description: "Learn more about: Compiler Error C3080"
title: "Compiler Error C3080"
ms.date: "11/04/2016"
f1_keywords: ["C3080"]
helpviewer_keywords: ["C3080"]
ms.assetid: ff62a3f7-9b3b-44bd-b8d9-f3a8e5354560
---
# Compiler Error C3080

'finalizer_function' : a finalizer cannot have a storage-class-specifier

For more information, see [Destructors and finalizers in How to: Define and consume classes and structs (C++/CLI)](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers).

## Example

The following sample generates C3080.

```cpp
// C3080.cpp
// compile with: /clr /c
ref struct rs {
protected:
   static !rs(){}   // C3080
   !rs(){}   // OK
};
```
