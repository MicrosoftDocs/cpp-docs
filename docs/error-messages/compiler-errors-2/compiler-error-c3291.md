---
description: "Learn more about: Compiler Error C3291"
title: "Compiler Error C3291"
ms.date: "11/04/2016"
f1_keywords: ["C3291"]
helpviewer_keywords: ["C3291"]
ms.assetid: ed2e9f89-8dbc-4387-bc26-cc955e840858
---
# Compiler Error C3291

'default' : cannot be the name of a trivial property

A trivial property cannot be named **`default`**. See [property](../../extensions/property-cpp-component-extensions.md) for more information.

## Example

The following sample generates C3291.

```cpp
// C3291.cpp
// compile with: /clr /c
ref struct C {
   property System::String ^ default;   // C3291
   property System::String ^ Default;   // OK
};
```
