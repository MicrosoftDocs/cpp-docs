---
description: "Learn more about: Compiler Warning (level 1) C4042"
title: "Compiler Warning (level 1) C4042"
ms.date: "11/04/2016"
f1_keywords: ["C4042"]
helpviewer_keywords: ["C4042"]
ms.assetid: e4bd861b-1194-426b-bf79-68c5b021eb0a
---
# Compiler Warning (level 1) C4042

'identifier' : has bad storage class

The specified storage class cannot be used with this identifier in this context. The compiler uses the default storage class instead:

- **`extern`**, if *identifier* is a function.

- **`auto`**, if *identifier* is a formal parameter or local variable.

- No storage class, if *identifier* is a global variable.

This warning can be caused by specifying a storage class other than **`register`** in a parameter declaration.

The following sample generates C4042

```cpp
// C4042.cpp
// compile with: /W1 /LD
int func2( __declspec( thread ) int tls_i )    // C4042
// try the following line instead
// int func2( int tls_i )
{
   return tls_i;
}
```
