---
title: "Compiler Error C2012"
description: "Learn more about: Compiler Error C2012"
ms.date: 11/04/2016
f1_keywords: ["C2012"]
helpviewer_keywords: ["C2012"]
---
# Compiler Error C2012

> missing name following '<'

## Remarks

An `#include` directive lacks the required filename.

## Example

The following example generates C2012:

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
