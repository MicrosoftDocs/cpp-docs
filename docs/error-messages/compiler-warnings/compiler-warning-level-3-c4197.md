---
description: "Learn more about: Compiler Warning (level 3) C4197"
title: "Compiler Warning (level 3) C4197"
ms.date: "11/04/2016"
f1_keywords: ["C4197"]
helpviewer_keywords: ["C4197"]
ms.assetid: f766feef-82b0-4d81-8a65-33628c7db196
---
# Compiler Warning (level 3) C4197

'type' : top-level volatile in cast is ignored

The compiler detected a cast to an r-value type which is qualified with [volatile](../../cpp/volatile-cpp.md), or a cast of an r-value type to some type that is qualified with volatile. According to the C standard (6.5.3), properties associated with qualified types are meaningful only for l-value expressions.

The following sample generates C4197:

```cpp
// C4197.cpp
// compile with: /W3
#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

void sigproc(int);
struct S
{
   int i;
} s;

int main()
{
   signal(SIGINT, sigproc);
   s.i = 1;
   S *pS = &s;
   for ( ; (volatile int)pS->i ; )   // C4197
      break;
   // for ( ; *(volatile int *)&pS->i ; )   // OK
   //    break;
}

void sigproc(int) // ctrl-C
{
   signal(SIGINT, sigproc);
   s.i = 0;
}
```
