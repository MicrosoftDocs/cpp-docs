---
title: "Compiler Error C2648"
description: "Learn more about: Compiler Error C2648"
ms.date: 11/04/2016
f1_keywords: ["C2648"]
helpviewer_keywords: ["C2648"]
---
# Compiler Error C2648

> 'identifier' : use of member as default parameter requires static member

## Remarks

A non-static member is used as a default parameter.

## Example

The following example generates C2648:

```cpp
// C2648.cpp
// compile with: /c
class C {
public:
   int i;
   static int j;
   void func1( int i = i );  // C2648  i is not static
   void func2( int i = j );  // OK
};
```
