---
description: "Learn more about: Compiler Error C3468"
title: "Compiler Error C3468"
ms.date: "11/04/2016"
f1_keywords: ["C3468"]
helpviewer_keywords: ["C3468"]
ms.assetid: cfd320db-2f6e-4e0d-ba02-e79ece87e1e0
---
# Compiler Error C3468

'type' : you can only forward a type to an assembly:

'`file`' is not an assembly

Only types in an assembly can be forwarded.

For more information, see [Type Forwarding (C++/CLI)](../../extensions/type-forwarding-cpp-cli.md).

## Examples

The following sample creates a module.

```cpp
// C3468.cpp
// compile with: /LN /clr
public ref class R {};
```

The following sample generates C3468.

```cpp
// C3468_b.cpp
// compile with: /clr /c
#using "C3468.netmodule"
[ assembly:TypeForwardedTo(R::typeid) ];   // C3468
```
