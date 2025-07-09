---
title: "Compiler Error C2013"
description: "Learn more about: Compiler Error C2013"
ms.date: 11/04/2016
f1_keywords: ["C2013"]
helpviewer_keywords: ["C2013"]
---
# Compiler Error C2013

> missing '>'

## Remarks

An `#include` directive lacks a closing angle bracket. Add the closing bracket to resolve the error.

## Example

The following example generates C2013:

```cpp
// C2013.cpp
#include <stdio.h    // C2013
```

Possible resolution:

```cpp
// C2013b.cpp
// compile with: /c
#include <stdio.h>
```
