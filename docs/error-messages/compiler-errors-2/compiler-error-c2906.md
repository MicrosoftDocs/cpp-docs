---
description: "Learn more about: Compiler Error C2906"
title: "Compiler Error C2906"
ms.date: "11/04/2016"
f1_keywords: ["C2906"]
helpviewer_keywords: ["C2906"]
ms.assetid: 30f652f1-6af6-4a2f-a69e-a1a4876cc8c6
---
# Compiler Error C2906

'specialization' : explicit specialization requires 'template <>'

You must use the new syntax for explicit specialization of templates.

The following sample generates C2906:

```cpp
// C2906.cpp
// compile with: /c
template<class T> class X{};   // primary template
class X<int> { }   // C2906
template<> class X<int> { };   // new syntax
```
