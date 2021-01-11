---
description: "Learn more about: Compiler Error C3626"
title: "Compiler Error C3626"
ms.date: "11/04/2016"
f1_keywords: ["C3626"]
helpviewer_keywords: ["C3626"]
ms.assetid: 43926e2b-1ba9-4a43-9343-c58449cbb336
---
# Compiler Error C3626

'keyword': '__event' keyword can only be used on COM interfaces, member functions and data members that are pointers to delegates

A keyword was used incorrectly.

The following sample generates C3626:

```cpp
// C3626.cpp
// compile with: /c
struct A {
   __event int i;   // C3626
// try the following line instead
// __event int i();
};
```
