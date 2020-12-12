---
description: "Learn more about: Fatal Error C1016"
title: "Fatal Error C1016"
ms.date: "11/04/2016"
f1_keywords: ["C1016"]
helpviewer_keywords: ["C1016"]
ms.assetid: 33f45c3e-2d8f-43ad-a445-c412d1d54ce1
---
# Fatal Error C1016

\#ifdef expected an identifier#ifndef expected an identifier

The conditional compilation directive ([#ifdef](../../preprocessor/hash-ifdef-and-hash-ifndef-directives-c-cpp.md) or `#ifndef`) has no identifier to evaluate. To resolve the error, specify an identifier.

The following sample generates C1016:

```cpp
// C1016.cpp
#ifdef   // C1016
#define FC1016
#endif

int main() {}
```

Possible resolution:

```cpp
// C1016b.cpp
#ifdef X
#define FC1016
#endif

int main() {}
```
