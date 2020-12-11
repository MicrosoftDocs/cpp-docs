---
description: "Learn more about: Compiler Error C2012"
title: "Compiler Error C2012"
ms.date: "11/04/2016"
f1_keywords: ["C2012"]
helpviewer_keywords: ["C2012"]
ms.assetid: 9f0d8162-c0b3-4234-a41f-836fdb75c84e
---
# Compiler Error C2012

missing name following '<'

An `#include` directive lacks the required filename.

The following sample generates C2012:

```cpp
// C2012.cpp
#include <   // C2012 include the filename to resolve
```

Possible resolution:

```cpp
// C2012b.cpp
// compile with: /c
#include <stdio.h>
```
