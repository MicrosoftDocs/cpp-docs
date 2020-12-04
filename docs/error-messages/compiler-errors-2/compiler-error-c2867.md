---
description: "Learn more about: Compiler Error C2867"
title: "Compiler Error C2867"
ms.date: "11/04/2016"
f1_keywords: ["C2867"]
helpviewer_keywords: ["C2867"]
ms.assetid: 63be26b2-d9ab-4f3d-a8b7-981ce3e4d6b9
---
# Compiler Error C2867

'identifier' : is not a namespace

A **`using`** directive is applied to something other than a namespace.

The following sample generates C2867:

```cpp
// C2867.cpp
// compile with: /c
namespace N {
   class X {};
}
using namespace N::X;   // C2867
```
