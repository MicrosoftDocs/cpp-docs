---
title: "Compiler Error C2479"
description: "Learn more about: Compiler Error C2479"
ms.date: 11/04/2016
f1_keywords: ["C2479"]
helpviewer_keywords: ["C2479"]
---
# Compiler Error C2479

> 'identifier' : 'allocate( )' is only valid for data items of static extent

## Remarks

The `__declspec( allocate())` syntax can be used for static data only.

## Example

The following example generates C2479:

```cpp
// C2479.cpp
// compile with: /c
#pragma section("mycode", read)
static __declspec(allocate("mycode")) void DoNothing() {}   // C2479
__declspec(allocate("mycode"))  int i = 0;   // OK
```
