---
description: "Learn more about: Compiler Error C2791"
title: "Compiler Error C2791"
ms.date: "11/04/2016"
f1_keywords: ["C2791"]
helpviewer_keywords: ["C2791"]
ms.assetid: 938ad1fb-75d9-4ce2-ad92-83d6249005b5
---
# Compiler Error C2791

illegal use of 'super': 'class' does not have any base classes

The keyword [super](../../cpp/super.md) was used within the context of a member function of a class that does not have any base classes.

The following sample generates C2791:

```cpp
// C2791.cpp
struct D {
   void mf() {
      __super::mf();   // C2791
   }
};
```
