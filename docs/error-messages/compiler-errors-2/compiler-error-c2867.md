---
title: "Compiler Error C2867"
description: "Learn more about: Compiler Error C2867"
ms.date: 11/04/2016
f1_keywords: ["C2867"]
helpviewer_keywords: ["C2867"]
---
# Compiler Error C2867

> 'identifier' : is not a namespace

## Remarks

A **`using`** directive is applied to something other than a namespace.

## Example

The following example generates C2867:

```cpp
// C2867.cpp
// compile with: /c
namespace N {
   class X {};
}
using namespace N::X;   // C2867
```
