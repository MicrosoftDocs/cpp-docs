---
description: "Learn more about: Compiler Error C2042"
title: "Compiler Error C2042"
ms.date: "11/04/2016"
f1_keywords: ["C2042"]
helpviewer_keywords: ["C2042"]
ms.assetid: e111788f-41ce-405a-9824-a4c1c26059e6
---
# Compiler Error C2042

signed/unsigned keywords mutually exclusive

The keywords **`signed`** and **`unsigned`** are used in a single declaration.

The following sample generates C2042:

```cpp
// C2042.cpp
unsigned signed int i;   // C2042
```

Possible resolution:

```cpp
// C2042b.cpp
// compile with: /c
unsigned int i;
signed int ii;
```
