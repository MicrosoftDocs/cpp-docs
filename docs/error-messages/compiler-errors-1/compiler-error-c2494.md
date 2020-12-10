---
description: "Learn more about: Compiler Error C2494"
title: "Compiler Error C2494"
ms.date: "11/04/2016"
f1_keywords: ["C2494"]
helpviewer_keywords: ["C2494"]
ms.assetid: 5dfd07ab-351d-49c9-b54e-f0a104776ab8
---
# Compiler Error C2494

> '*keyword*' cannot be called from within a filter expression or __finally/finally block

You cannot use *keyword* in a **`__finally`** or **`finally`** block.

The following sample generates C2494:

```cpp
// C2494.cpp
#include <malloc.h>

int main() {
   __try {}
   __except ( _alloca(100), 1 ) {}   // C2494
   __try {}
   __finally {
      _alloca(100);   // C2494
   }
}
```

C2494 can also occur when using **/clr**.

```cpp
// C2494b.cpp
// compile with: /clr
#include <malloc.h>

int main() {
   char * buf;
   try {}
   catch (char * buf2) {}
   finally {
      _alloca(100);   // C2494
   }
}
```
