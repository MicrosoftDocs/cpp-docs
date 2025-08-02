---
title: "Compiler Error C2636"
description: "Learn more about: Compiler Error C2636"
ms.date: 11/04/2016
f1_keywords: ["C2636"]
helpviewer_keywords: ["C2636"]
---
# Compiler Error C2636

> 'identifier' : pointer to reference member is illegal

## Remarks

A pointer to a reference member was declared.

## Example

The following example generates C2636:

```cpp
// C2636.cpp
struct S {};
int main() {
   int &S::*prs;   // C2636
   int S::*prs1;   // OK
   int *S::*prs2;   // OK
}
```
