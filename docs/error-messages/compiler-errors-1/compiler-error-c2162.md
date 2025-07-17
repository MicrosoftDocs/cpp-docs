---
title: "Compiler Error C2162"
description: "Learn more about: Compiler Error C2162"
ms.date: "03/30/2025"
f1_keywords: ["C2162"]
helpviewer_keywords: ["C2162"]
---
# Compiler Error C2162

> expected macro formal parameter

## Remarks

The token following a [stringizing operator (#)](../../preprocessor/stringizing-operator-hash.md) or a [charizing operator (#@)](../../preprocessor/charizing-operator-hash-at.md) is not a formal parameter.

## Example

The following example generates C2162:

```cpp
// C2162.cpp
// compile with: /c
#define make_string1(s) #    // C2162
#define make_string2(s) #s   // OK
```
