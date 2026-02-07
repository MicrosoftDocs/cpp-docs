---
title: "Compiler Error C2563"
description: "Learn more about: Compiler Error C2563"
ms.date: 11/04/2016
f1_keywords: ["C2563"]
helpviewer_keywords: ["C2563"]
---
# Compiler Error C2563

> mismatch in formal parameter list

## Remarks

The formal parameter list of a function (or a pointer to a function) does not match those of another function (or pointer to a member function). As a result, the assignment of functions or pointers cannot be made.

## Example

The following example generates C2563:

```cpp
// C2563.cpp
void func( int );
void func( int, int );
int main() {
   void *fp();
   fp = func;   // C2563
}
```
