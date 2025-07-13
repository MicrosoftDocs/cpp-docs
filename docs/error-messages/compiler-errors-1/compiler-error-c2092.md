---
title: "Compiler Error C2092"
description: "Learn more about: Compiler Error C2092"
ms.date: 11/04/2016
f1_keywords: ["C2092"]
helpviewer_keywords: ["C2092"]
---
# Compiler Error C2092

> 'array name' array element type cannot be function

## Remarks

Arrays of functions are not allowed. Use an array of pointers to functions.

## Example

The following example generates C2092:

```cpp
// C2092.cpp
typedef void (F) ();
typedef F AT[10];   // C2092
```

Possible resolution:

```cpp
// C2092b.cpp
// compile with: /c
typedef void (F) ();
typedef F * AT[10];
```
