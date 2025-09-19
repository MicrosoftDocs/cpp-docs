---
title: "Compiler Error C2494"
description: "Learn more about: Compiler Error C2494"
ms.date: 11/04/2016
f1_keywords: ["C2494"]
helpviewer_keywords: ["C2494"]
---
# Compiler Error C2494

> '*keyword*' cannot be called from within a filter expression or __finally/finally block

## Remarks

You cannot use *keyword* in a **`__finally`** or **`finally`** block.

## Examples

The following example generates C2494:

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
