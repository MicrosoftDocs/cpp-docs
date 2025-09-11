---
title: "Compiler Warning (level 1) C4550"
description: "Learn more about: Compiler Warning (level 1) C4550"
ms.date: 11/04/2016
f1_keywords: ["C4550"]
helpviewer_keywords: ["C4550"]
---
# Compiler Warning (level 1) C4550

> expression evaluates to a function which is missing an argument list

## Remarks

A dereferenced pointer to a function is missing an argument list.

## Example

The following example generates C4550:

```cpp
// C4550.cpp
// compile with: /W1
bool f()
{
   return true;
}

typedef bool (*pf_t)();

int main()
{
   pf_t pf = f;
   if (*pf) {}  // C4550
   return 0;
}
```
