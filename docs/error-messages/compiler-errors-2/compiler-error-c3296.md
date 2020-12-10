---
description: "Learn more about: Compiler Error C3296"
title: "Compiler Error C3296"
ms.date: "11/04/2016"
f1_keywords: ["C3296"]
helpviewer_keywords: ["C3296"]
ms.assetid: fc4c9dcd-16cf-4eee-a1ac-c43e7c29e443
---
# Compiler Error C3296

'property' : a property with this name already exists

The compiler encountered more than one property with the same name. Each property in a type must have a unique name.

For more information, see [property](../../extensions/property-cpp-component-extensions.md).

## Example

The following sample generates C3296.

```cpp
// C3296.cpp
// compile with: /clr /c
using namespace System;

ref class R {
public:
   property int MyProp[int] { int get(int); }

   property String^ MyProp[int] { void set(int, String^); }   // C3296
};
```
