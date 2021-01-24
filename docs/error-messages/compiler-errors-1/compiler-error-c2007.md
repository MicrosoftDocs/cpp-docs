---
description: "Learn more about: Compiler Error C2007"
title: "Compiler Error C2007"
ms.date: "11/04/2016"
f1_keywords: ["C2007"]
helpviewer_keywords: ["C2007"]
ms.assetid: ecd09d99-5036-408b-9e46-bc15488f049e
---
# Compiler Error C2007

\#define syntax

No identifier appears after a `#define`. To resolve the error, use an identifier.

The following sample generates C2007:

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
