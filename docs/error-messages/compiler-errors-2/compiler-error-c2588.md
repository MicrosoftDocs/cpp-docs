---
description: "Learn more about: Compiler Error C2588"
title: "Compiler Error C2588"
ms.date: "11/04/2016"
f1_keywords: ["C2588"]
helpviewer_keywords: ["C2588"]
ms.assetid: 19a0cabd-ca13-44a5-9be3-ee676abf9bc4
---
# Compiler Error C2588

'::~identifier' : illegal global destructor

The destructor is defined for something other than a class, structure, or union. This is not allowed.

This error can be caused by a missing class, structure, or union name on the left side of the scope resolution (`::`) operator.

The following sample generates C2588:

```cpp
// C2588.cpp
~F();   // C2588
```
