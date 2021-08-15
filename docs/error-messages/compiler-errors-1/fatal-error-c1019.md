---
description: "Learn more about: Fatal Error C1019"
title: "Fatal Error C1019"
ms.date: "11/04/2016"
f1_keywords: ["C1019"]
helpviewer_keywords: ["C1019"]
ms.assetid: c4f8968b-bc62-4200-b3ca-69d06c163236
---
# Fatal Error C1019

unexpected #else

The `#else` directive appears outside an `#if`, `#ifdef`, or `#ifndef` construct. Use `#else` only within one of these constructs.

The following sample generates C1019:

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
