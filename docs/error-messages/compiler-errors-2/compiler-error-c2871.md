---
title: "Compiler Error C2871"
description: "Learn more about: Compiler Error C2871"
ms.date: 11/04/2016
f1_keywords: ["C2871"]
helpviewer_keywords: ["C2871"]
---
# Compiler Error C2871

> 'name' : a namespace with this name does not exist

## Remarks

This error will occur when you pass an identifier that is not a namespace to a [using](../../cpp/namespaces-cpp.md#using_directives) directive.

## Example

The following example generates C2871:

```cpp
// C2871.cpp
// compile with: /c
namespace a {
   int fn(int i) { return i; }
}
namespace b {
   using namespace d;   // C2871 because d is not a namespace
   using namespace a;   // OK
}
```
