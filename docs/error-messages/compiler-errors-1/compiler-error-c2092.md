---
description: "Learn more about: Compiler Error C2092"
title: "Compiler Error C2092"
ms.date: "11/04/2016"
f1_keywords: ["C2092"]
helpviewer_keywords: ["C2092"]
ms.assetid: 037e44ae-16c8-489a-a512-dcdf7f7795a6
---
# Compiler Error C2092

'array name' array element type cannot be function

Arrays of functions are not allowed. Use an array of pointers to functions.

## Examples

The following sample generates C2092:

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
