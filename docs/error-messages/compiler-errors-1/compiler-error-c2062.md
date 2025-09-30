---
title: "Compiler Error C2062"
description: "Learn more about: Compiler Error C2062"
ms.date: 11/04/2016
f1_keywords: ["C2062"]
helpviewer_keywords: ["C2062"]
---
# Compiler Error C2062

> type 'type' unexpected

## Remarks

The compiler did not expect a type name.

## Example

The following example generates C2062:

```cpp
// C2062.cpp
// compile with: /c
struct A {  : int l; };   // C2062
struct B { private: int l; };   // OK
```

C2062 can also occur due to the way the compiler handles undefined types in a constructor's parameter list. If the compiler encounters an undefined (misspelled?) type, it assumes the constructor is an expression, and issues C2062. To resolve, only use defined types in a constructor parameter list.
