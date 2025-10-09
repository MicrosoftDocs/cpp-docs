---
title: "Compiler Error C2906"
description: "Learn more about: Compiler Error C2906"
ms.date: 11/04/2016
f1_keywords: ["C2906"]
helpviewer_keywords: ["C2906"]
---
# Compiler Error C2906

> 'specialization' : explicit specialization requires 'template <>'

## Remarks

You must use the new syntax for explicit specialization of templates.

## Example

The following example generates C2906:

```cpp
// C2906.cpp
// compile with: /c
template<class T> class X{};   // primary template
class X<int> { }   // C2906
template<> class X<int> { };   // new syntax
```
