---
description: "Learn more about: Compiler Warning (level 1) C4033"
title: "Compiler Warning (level 1) C4033"
ms.date: "11/04/2016"
f1_keywords: ["C4033"]
helpviewer_keywords: ["C4033"]
ms.assetid: 189a9ec3-ff6d-49dd-b9b2-530b28bbb7c9
---
# Compiler Warning (level 1) C4033

'function' must return a value

The function does not return a value. An undefined value is returned.

Functions that use **`return`** without a return value must be declared as type **`void`**.

This error is for C language code.

The following sample generates C4033:

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
