---
title: "Compiler Error C2380"
description: "Learn more about: Compiler Error C2380"
ms.date: 11/04/2016
f1_keywords: ["C2380"]
helpviewer_keywords: ["C2380"]
---
# Compiler Error C2380

> type(s) preceding 'identifier' (constructor with return type, or illegal redefinition of current class-name?)

## Remarks

A constructor returns a value or redefines the class name.

## Example

The following example generates C2326:

```cpp
// C2380.cpp
// compile with: /c
class C {
public:
   int C();   // C2380, specifies an int return
   int C;   // C2380, redefinition of i
   C();   // OK
};
```
