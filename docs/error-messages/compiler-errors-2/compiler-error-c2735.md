---
description: "Learn more about: Compiler Error C2735"
title: "Compiler Error C2735"
ms.date: "11/04/2016"
f1_keywords: ["C2735"]
helpviewer_keywords: ["C2735"]
ms.assetid: 6ce45600-7148-4bc0-8699-af0ef137571e
---
# Compiler Error C2735

'keyword' keyword is not permitted in formal parameter type specifier

The keyword is invalid in this context.

The following sample generates C2735:

```cpp
// C2735.cpp
void f(inline int){}   // C2735
```
