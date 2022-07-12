---
description: "Learn more about: Fatal Error C1020"
title: "Fatal Error C1020"
ms.date: 07/11/2022
f1_keywords: ["C1020"]
helpviewer_keywords: ["C1020"]
ms.assetid: 42f429e2-5e3b-4086-a10d-b99e032e51c5
---
# Fatal Error C1020

> unexpected #endif

## Remarks

The `#endif` directive has no matching `#if`, `#ifdef`, or `#ifndef` directive. Be sure each `#endif` has a matching directive.

This error can occur if you have conditional preprocessor directives before you include a precompiled header file. The compiler ignores everything in the file before the precompiled header, including any `#if`, `#ifdef`, or `#ifndef` directives. For more information, see [`/Yu` (Use precompiled header)](../../build/reference/yu-use-precompiled-header-file.md).

## Examples

The following sample generates C1020:

```cpp
// C1020.cpp
#endif     // C1020
```

Possible resolution:

```cpp
// C1020b.cpp
// compile with: /c
#if 1
#endif
```
