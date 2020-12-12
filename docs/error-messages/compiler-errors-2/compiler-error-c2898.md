---
description: "Learn more about: Compiler Error C2898"
title: "Compiler Error C2898"
ms.date: "11/04/2016"
f1_keywords: ["C2898"]
helpviewer_keywords: ["C2898"]
ms.assetid: 68466e11-2541-4f6b-b772-13a642f30dfb
---
# Compiler Error C2898

'declaration' : member function templates cannot be virtual

The following sample generates C2898:

```cpp
// C2898.cpp
// compile with: /c
class X {
public:
   template<typename T> virtual void f(T t) {}   // C2898
};
```
