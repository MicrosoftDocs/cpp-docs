---
description: "Learn more about: Compiler Error C2021"
title: "Compiler Error C2021"
ms.date: "11/04/2016"
f1_keywords: ["C2021"]
helpviewer_keywords: ["C2021"]
ms.assetid: 064f32e2-3794-48d5-9767-991003dcb36a
---
# Compiler Error C2021

expected exponent value, not 'character'

The character used as the exponent of a floating-point constant is not a valid number. Be sure to use an exponent that is in range.

## Examples

The following sample generates C2021:

```cpp
// C2021.cpp
float test1=1.175494351E;   // C2021
```

Possible resolution:

```cpp
// C2021b.cpp
// compile with: /c
float test2=1.175494351E8;
```
