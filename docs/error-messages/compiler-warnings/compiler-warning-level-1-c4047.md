---
description: "Learn more about: Compiler Warning (level 1) C4047"
title: "Compiler Warning (level 1) C4047"
ms.date: "11/04/2016"
f1_keywords: ["C4047"]
helpviewer_keywords: ["C4047"]
ms.assetid: b75ad6fb-5c93-4434-a85f-c4083051a5de
---
# Compiler Warning (level 1) C4047

'operator' : 'identifier1' differs in levels of indirection from 'identifier2'

A pointer can point to a variable (one level of indirection), to another pointer that points to a variable (two levels of indirection), and so on.

## Examples

The following sample generates C4047:

```c
// C4047.c
// compile with: /W1

int main() {
   char **p = 0;   // two levels of indirection
   char *q = 0;   // one level of indirection

   char *p2 = 0;   // one level of indirection
   char *q2 = 0;   // one level of indirection

   p = q;   // C4047
   p2 = q2;
}
```

The following sample generates C4047:

```c
// C4047b.c
// compile with: /W1
#include <stdio.h>

int main() {
   int i;
   FILE *myFile = NULL;
   errno_t  err = 0;
   char file_name[256];
   char *cs = 0;

   err = fopen_s(&myFile, "C4047.txt", "r");
   if ((err != 0) || (myFile)) {
      printf_s("fopen_s failed!\n");
      exit(-1);
    }
   i = fgets(file_name, 256, myFile);   // C4047
   cs = fgets(file_name, 256, myFile);   // OK
}
```
