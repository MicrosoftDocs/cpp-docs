---
title: "Fatal Error C1016 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C1016"]
dev_langs: ["C++"]
helpviewer_keywords: ["C1016"]
ms.assetid: 33f45c3e-2d8f-43ad-a445-c412d1d54ce1
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Fatal Error C1016

\#ifdef expected an identifier#ifndef expected an identifier

The conditional compilation directive ([#ifdef](../../preprocessor/hash-ifdef-and-hash-ifndef-directives-c-cpp.md) or `#ifndef`) has no identifier to evaluate. To resolve the error, specify an identifier.

The following sample generates C1016:

```
// C1016.cpp
#ifdef   // C1016
#define FC1016
#endif

int main() {}
```

Possible resolution:

```
// C1016b.cpp
#ifdef X
#define FC1016
#endif

int main() {}
```