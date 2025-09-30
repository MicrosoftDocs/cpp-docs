---
title: "Compiler Error C2275"
description: "Learn more about: Compiler Error C2275"
ms.date: 11/04/2016
f1_keywords: ["C2275"]
helpviewer_keywords: ["C2275"]
---
# Compiler Error C2275

> 'identifier' : illegal use of this type as an expression

## Remarks

An expression uses the `->` operator with a **`typedef`** identifier.

## Example

The following example generates C2275:

```cpp
// C2275.cpp
typedef struct S {
    int mem;
} *S_t;
void func1( int *parm );
void func2() {
    func1( &S_t->mem );   // C2275, S_t is a typedef
}
```
