---
title: "Compiler Warning (level 3) C4281"
description: "Learn more about: Compiler Warning (level 3) C4281"
ms.date: 11/04/2016
f1_keywords: ["C4281"]
helpviewer_keywords: ["C4281"]
---
# Compiler Warning (level 3) C4281

> 'operator ->' recursion occurred through type 'type'

## Remarks

Your code allows **operator->** to call itself.

## Example

The following example generates C4281:

```cpp
// C4281.cpp
// compile with: /W3 /WX
struct A;
struct B;
struct C;

struct A
{
   int z;
   B& operator->();
};

struct B
{
   C& operator->();
};

struct C
{
   A& operator->();
};

void f(A p)
{
   int i = p->z; // C4281
}
```
