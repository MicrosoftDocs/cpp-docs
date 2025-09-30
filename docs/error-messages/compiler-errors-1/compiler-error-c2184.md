---
title: "Compiler Error C2184"
description: "Learn more about: Compiler Error C2184"
ms.date: 11/04/2016
f1_keywords: ["C2184"]
helpviewer_keywords: ["C2184"]
---
# Compiler Error C2184

> 'type' : illegal type for __except expression, must be an integral

## Remarks

A type was used in an [__except](../../c-language/try-except-statement-c.md) statement, but the type is not allowed.

## Example

The following example generates C2184:

```cpp
// C2184.cpp
void f() {
   int * p;
   __try{}
   __except(p){};   // C2184
}
```

Possible resolution:

```cpp
// C2184b.cpp
// compile with: /c
void f() {
   int i = 0;
   __try{}
   __except(i){};
}
```
