---
title: "Compiler Error C2458"
description: "Learn more about: Compiler Error C2458"
ms.date: 11/04/2016
f1_keywords: ["C2458"]
helpviewer_keywords: ["C2458"]
---
# Compiler Error C2458

> 'identifier' : redefinition within definition

## Remarks

A class, structure, union, or enumeration is redefined in its own declaration.

## Example

The following example generates C2458:

```cpp
// C2458.cpp
class C {
   enum i { C };   // C2458
};
```
