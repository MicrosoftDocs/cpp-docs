---
title: "Fatal Error C1018"
description: "Learn more about: Fatal Error C1018"
ms.date: 11/04/2016
f1_keywords: ["C1018"]
helpviewer_keywords: ["C1018"]
---
# Fatal Error C1018

> unexpected #elif

## Remarks

The `#elif` directive appears outside an `#if`, `#ifdef`, or `#ifndef` construct. Use `#elif` only within one of these constructs.

## Example

The following example generates C1018:

```cpp
// C1018.cpp
#elif      // C1018
#endif

int main() {}
```

Possible resolution:

```cpp
// C1018b.cpp
#if 1
#elif
#endif

int main() {}
```
