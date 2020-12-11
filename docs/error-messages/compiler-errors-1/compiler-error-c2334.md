---
description: "Learn more about: Compiler Error C2334"
title: "Compiler Error C2334"
ms.date: "11/04/2016"
f1_keywords: ["C2334"]
helpviewer_keywords: ["C2334"]
ms.assetid: 36142855-e00b-4bbf-80f5-a301edeff46e
---
# Compiler Error C2334

unexpected token(s) preceding ': or {'; skipping apparent function body

The following sample generates C2334. This error occurs after error C2059:

```cpp
// C2334.cpp
// compile with: /c
// C2059 expected
struct s1 {
   s1   {}   // C2334
   s1() {}   // OK
};
```
