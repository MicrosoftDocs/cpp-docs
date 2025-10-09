---
title: "Compiler Error C2236"
description: "Learn more about: Compiler Error C2236"
ms.date: 11/04/2016
f1_keywords: ["C2236"]
helpviewer_keywords: ["C2236"]
---
# Compiler Error C2236

> unexpected token 'identifier'. Did you forget a ';'?

## Remarks

The identifier is already defined as a type and cannot be overridden by a user-defined type.

## Example

The following example generates C2236:

```cpp
// C2236.cpp
// compile with: /c
int class A {};  // C2236 "int class" is unexpected
int i;
class B {};
```
