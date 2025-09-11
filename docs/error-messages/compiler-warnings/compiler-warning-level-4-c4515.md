---
title: "Compiler Warning (level 4) C4515"
description: "Learn more about: Compiler Warning (level 4) C4515"
ms.date: 11/04/2016
f1_keywords: ["C4515"]
helpviewer_keywords: ["C4515"]
---
# Compiler Warning (level 4) C4515

> 'namespace' : namespace uses itself

## Remarks

A namespace is used recursively.

## Example

The following example generates C4515:

```cpp
// C4515.cpp
// compile with: /W4
namespace A
{
   using namespace A; // C4515
}

int main()
{
}
```
