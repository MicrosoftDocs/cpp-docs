---
title: "Compiler Error C2238"
description: "Learn more about: Compiler Error C2238"
ms.date: 11/04/2016
f1_keywords: ["C2238"]
helpviewer_keywords: ["C2238"]
---
# Compiler Error C2238

> unexpected token(s) preceding 'token'

## Remarks

An incorrect token was found.

## Example

The following example generates C2238:

```cpp
// C2238.cpp
// compile with: /c
class v {
virtual: int vvv;   // C2238
};
```
