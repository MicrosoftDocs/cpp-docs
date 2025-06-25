---
title: "Fatal Error C1019"
description: "Learn more about: Fatal Error C1019"
ms.date: 11/04/2016
f1_keywords: ["C1019"]
helpviewer_keywords: ["C1019"]
---
# Fatal Error C1019

> unexpected #else

## Remarks

The `#else` directive appears outside an `#if`, `#ifdef`, or `#ifndef` construct. Use `#else` only within one of these constructs.

## Example

The following example generates C1019:

```cpp
// C1019.cpp
#else   // C1019
#endif

int main() {}
```

Possible resolution:

```cpp
// C1019b.cpp
#if 1
#else
#endif

int main() {}
```
