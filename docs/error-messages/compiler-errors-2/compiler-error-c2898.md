---
title: "Compiler Error C2898"
description: "Learn more about: Compiler Error C2898"
ms.date: 11/04/2016
f1_keywords: ["C2898"]
helpviewer_keywords: ["C2898"]
---
# Compiler Error C2898

> 'declaration' : member function templates cannot be virtual

## Example

The following example generates C2898:

```cpp
// C2898.cpp
// compile with: /c
class X {
public:
   template<typename T> virtual void f(T t) {}   // C2898
};
```
