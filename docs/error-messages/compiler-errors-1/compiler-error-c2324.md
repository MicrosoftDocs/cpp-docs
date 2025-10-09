---
title: "Compiler Error C2324"
description: "Learn more about: Compiler Error C2324"
ms.date: 11/04/2016
f1_keywords: ["C2324"]
helpviewer_keywords: ["C2324"]
---
# Compiler Error C2324

> 'identifier' : unexpected to the right of 'name'

## Remarks

A destructor is called using an incorrect identifier.

## Example

The following example generates C2324:

```cpp
// C2324.cpp
class A {};
typedef A* pA_t;
int i;

int main() {
   pA_t * ppa = new pA_t;
   ppa->~i;   // C2324
   ppa->~pA_t();   // OK
}
```
