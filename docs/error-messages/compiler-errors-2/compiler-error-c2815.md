---
title: "Compiler Error C2815"
description: "Learn more about: Compiler Error C2815"
ms.date: 11/04/2016
f1_keywords: ["C2815"]
helpviewer_keywords: ["C2815"]
---
# Compiler Error C2815

> 'operator delete' : first formal parameter must be 'void *', but 'param' was used

## Remarks

Any user-defined [operator delete](../../standard-library/new-operators.md#op_delete) function must take a first formal parameter of type `void *`.

## Example

The following example generates C2815:

```cpp
// C2815.cpp
// compile with: /c
class CMyClass {
public:
   void mf1(int *a);
   void operator delete(CMyClass *);   // C2815
   void operator delete(void *);
};
```
