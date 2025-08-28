---
title: "Compiler Warning (level 3) C4280"
description: "Learn more about: Compiler Warning (level 3) C4280"
ms.date: 11/04/2016
f1_keywords: ["C4280"]
helpviewer_keywords: ["C4280"]
---
# Compiler Warning (level 3) C4280

> 'operator ->' was self recursive through type 'type'

## Remarks

Your code incorrectly allows **operator->** to call itself.

## Example

The following example generates C4280:

```cpp
// C4280.cpp
// compile with: /W3 /WX
struct A
{
   int z;
   A& operator ->();
};

void f(A y)
{
   int i = y->z; // C4280
}
```
