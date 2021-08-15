---
description: "Learn more about: Compiler Warning (Level 1) C4733"
title: "Compiler Warning (Level 1) C4733"
ms.date: "11/04/2016"
f1_keywords: ["C4733"]
helpviewer_keywords: ["C4733"]
ms.assetid: 7ef4f577-772d-4b66-a7bf-8958a6b250bc
---
# Compiler Warning (Level 1) C4733

Inline asm assigning to 'FS:0' : handler not registered as safe handler

A function modifying the value at FS:0 to add a new exception handler may not work with Safe Exceptions, because the handler may not be registered as a valid exception handler (see [/SAFESEH](../../build/reference/safeseh-image-has-safe-exception-handlers.md)).

To resolve this warning, either remove the FS:0 definition or turn off this warning and use [.SAFESEH](../../assembler/masm/dot-safeseh.md) to specify the safe exception handlers.

The following sample generates C4733:

```cpp
// C4733.cpp
// compile with: /W1 /c
// processor: x86
#include "stdlib.h"
#include "stdio.h"
void my_handler()
{
   printf("Hello from my_handler\n");
   exit(1);
}

int main()
{
   _asm {
      push    my_handler
      mov     eax, DWORD PTR fs:0
      push    eax
      mov     DWORD PTR fs:0, esp   // C4733
   }

   *(int*)0 = 0;
}
```
