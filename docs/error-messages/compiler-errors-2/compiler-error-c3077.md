---
description: "Learn more about: Compiler Error C3077"
title: "Compiler Error C3077"
ms.date: "11/04/2016"
f1_keywords: ["C3077"]
helpviewer_keywords: ["C3077"]
ms.assetid: d9f3c619-d1e2-4656-81a5-a35a9586a7d4
---
# Compiler Error C3077

'finalizer' : a finalizer can only be a member of a reference type

You cannot declare a finalizer in a native or value type.

For more information, see [Destructors and finalizers in How to: Define and consume classes and structs (C++/CLI)](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers).

## Example

The following sample generates C3077.

```cpp
// C3077.cpp
// compile with: /clr /c
value struct vs {
   !vs(){}   // C3077
};

ref struct rs {
protected:
   !rs(){}   // OK
};
```
