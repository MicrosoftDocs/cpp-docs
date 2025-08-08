---
title: "Compiler Error C2611"
description: "Learn more about: Compiler Error C2611"
ms.date: 11/04/2016
f1_keywords: ["C2611"]
helpviewer_keywords: ["C2611"]
---
# Compiler Error C2611

> 'token' : illegal following '~' (expected identifier)

## Remarks

The token is not an identifier.

## Example

The following example generates C2611:

```cpp
// C2611.cpp
// compile with: /c
class C {
   C::~operator int();   // C2611
   ~C();   // OK
};
```
