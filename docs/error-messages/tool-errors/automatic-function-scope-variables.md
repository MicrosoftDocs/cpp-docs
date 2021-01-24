---
description: "Learn more about: Automatic (function scope) variables"
title: "Automatic (function scope) variables"
ms.date: "04/22/2019"
helpviewer_keywords: ["automatic variables", "variables, automatic", "functions [C++], scope", "scope, declared within functions"]
ms.assetid: 6e1a14c2-1fb0-4937-8628-8d963cc35ed4
---
# Automatic (function scope) variables

A variable declared within a function can only be used within the scope of that function.

```cpp
// LNK2019_AV.cpp
// compile with: /c
void test(void);

static int lnktest3 = 3;
int lnktest4 = 4;

int main() {
   static int lnktest1 = 1;
   int lnktest2 = 2;
   test();
}
```

and then,

```cpp
// LNK2019_AV_2.cpp
// compile with: LNK2019_AV.cpp
// LNK2019 expected
extern int lnktest1;
extern int lnktest2;
extern int lnktest3;
extern int lnktest4;

void test(void) {
   int i = 0;
   i = lnktest1;
   i = lnktest2;
   i = lnktest3;
   i = lnktest4;   // OK
}
```

## See also

[Linker tools error LNK2019](../../error-messages/tool-errors/linker-tools-error-lnk2019.md)
