---
title: "Compiler Error C2007"
description: "Learn more about: Compiler Error C2007"
ms.date: 11/04/2016
f1_keywords: ["C2007"]
helpviewer_keywords: ["C2007"]
---
# Compiler Error C2007

> #define syntax

## Remarks

No identifier appears after a `#define`. To resolve the error, use an identifier.

## Example

The following example generates C2007:

```cpp
// C2007.cpp
#define   // C2007
```

Possible resolution:

```cpp
// C2007b.cpp
// compile with: /c
#define true 1
```
