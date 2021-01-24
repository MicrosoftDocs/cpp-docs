---
description: "Learn more about: Compiler Warning (level 1) C4533"
title: "Compiler Warning (level 1) C4533"
ms.date: "11/04/2016"
f1_keywords: ["C4533"]
helpviewer_keywords: ["C4533"]
ms.assetid: 359fecda-d540-46e5-b214-dbabe9ef50d2
---
# Compiler Warning (level 1) C4533

initialization of 'variable' is skipped by 'instruction'

An instruction in your program changed the flow of control, such that, an instruction that initialized a variable was not executed. The following sample generates C4533:

```cpp
// C4533.cpp
// compile with: /W1
#include <stdio.h>

struct A
{
   int m_data;
};

int main()
{
   if (1)
   {
      goto Label;
   }

   A a = { 100 };

   Label:   // C4533
      printf("\n%d", a.m_data);   // prints an uninitialized value
}
```
