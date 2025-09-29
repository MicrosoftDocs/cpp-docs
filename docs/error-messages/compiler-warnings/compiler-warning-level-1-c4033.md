---
title: "Compiler Warning (level 1) C4033"
description: "Learn more about: Compiler Warning (level 1) C4033"
ms.date: 11/04/2016
f1_keywords: ["C4033"]
helpviewer_keywords: ["C4033"]
---
# Compiler Warning (level 1) C4033

> 'function' must return a value

## Remarks

The function does not return a value. An undefined value is returned.

Functions that use **`return`** without a return value must be declared as type **`void`**.

This error is for C language code.

## Example

The following example generates C4033:

```c
// C4033.c
// compile with: /W1 /LD
int test_1(int x)   // C4033 expected
{
   if (x)
   {
      return;   // C4033
   }
}
```
