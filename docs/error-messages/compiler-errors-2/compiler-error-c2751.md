---
description: "Learn more about: Compiler Error C2751"
title: "Compiler Error C2751"
ms.date: "11/04/2016"
f1_keywords: ["C2751"]
helpviewer_keywords: ["C2751"]
ms.assetid: 44a3abdf-8a87-4a09-b34b-532c220c310a
---
# Compiler Error C2751

'parameter' : the name of a function parameter cannot be qualified

You cannot use a qualified name as a function parameter.

The following sample generates C2751:

```cpp
// C2751.cpp
namespace std {
   template<typename T>
   class list {};
}

#define list std::list
void f(int &list){}   // C2751
```
