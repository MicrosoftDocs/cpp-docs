---
description: "Learn more about: Compiler Error C3084"
title: "Compiler Error C3084"
ms.date: "11/04/2016"
f1_keywords: ["C3084"]
helpviewer_keywords: ["C3084"]
ms.assetid: 0362cb70-e24e-476f-a24d-8f5bb97c3afd
---
# Compiler Error C3084

'function': a finalizer/destructor cannot be 'keyword'

A finalizer or destructor was declared incorrectly.

For example, a destructor should not be marked as sealed.  The destructor will be inaccessible to derived types.  For more information, see [Explicit Overrides](../../extensions/explicit-overrides-cpp-component-extensions.md) and [Destructors and finalizers in How to: Define and consume classes and structs (C++/CLI)](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers).

## Example

The following sample generates C3084.

```cpp
// C3084.cpp
// compile with: /clr /c
ref struct R {
protected:
   !R() sealed;   // C3084
   !R() abstract;   // C3084
   !R();
};
```
