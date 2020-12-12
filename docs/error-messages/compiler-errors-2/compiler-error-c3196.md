---
description: "Learn more about: Compiler Error C3196"
title: "Compiler Error C3196"
ms.date: "11/04/2016"
f1_keywords: ["C3196"]
helpviewer_keywords: ["C3196"]
ms.assetid: d9c38a13-191d-472d-aa2b-f61a6459d16c
---
# Compiler Error C3196

'keyword' : used more than once

A keyword was used more than once.

The following sample generates C3196:

```cpp
// C3196.cpp
// compile with: /clr
ref struct R abstract abstract {};   // C3196
ref struct S abstract {};   // OK
```
