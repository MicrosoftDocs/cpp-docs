---
title: "Compiler Error C2459"
description: "Learn more about: Compiler Error C2459"
ms.date: 11/04/2016
f1_keywords: ["C2459"]
helpviewer_keywords: ["C2459"]
---
# Compiler Error C2459

> 'identifier' : is being defined; cannot add as an anonymous member

## Remarks

A class, structure, or union is redefined in its own scope by a member of an anonymous union.

## Example

The following example generates C2459:

```cpp
// C2459.cpp
// compile with: /c
class C {
   union { int C; };   // C2459
   union { int D; };
};
```
