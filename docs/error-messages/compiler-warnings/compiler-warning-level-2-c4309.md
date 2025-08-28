---
title: "Compiler Warning (level 2) C4309"
description: "Learn more about: Compiler Warning (level 2) C4309"
ms.date: 11/04/2016
f1_keywords: ["C4309"]
helpviewer_keywords: ["C4309"]
---
# Compiler Warning (level 2) C4309

> 'conversion' : truncation of constant value

## Remarks

The type conversion causes a constant to exceed the space allocated for it. You may need to use a larger type for the constant.

## Example

The following example generates C4309:

```cpp
// C4309.cpp
// compile with: /W2
int main()
{
   char c = 128;   // C4309
}
```
