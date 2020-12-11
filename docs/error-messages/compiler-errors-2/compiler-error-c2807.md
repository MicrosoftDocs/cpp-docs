---
description: "Learn more about: Compiler Error C2807"
title: "Compiler Error C2807"
ms.date: "11/04/2016"
f1_keywords: ["C2807"]
helpviewer_keywords: ["C2807"]
ms.assetid: bd7a207a-f379-4de6-8ee8-c7cab78b3480
---
# Compiler Error C2807

the second formal parameter to postfix 'operator operator' must be 'int'

The second parameter to a postfix operator has the wrong type.

The following sample generates C2807:

```cpp
// C2807.cpp
// compile with: /c
class X {
public:
   X operator++ ( X );   // C2807 nonvoid parameter
   X operator++ ( int );   // OK, int parameter
};
```
