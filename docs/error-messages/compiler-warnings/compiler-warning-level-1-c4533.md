---
title: "Compiler Warning (level 1) C4533"
description: "Learn more about: Compiler Warning (level 1) C4533"
ms.date: 08/30/2022
f1_keywords: ["C4533"]
helpviewer_keywords: ["C4533"]
---
# Compiler Warning (level 1) C4533

> initialization of '*variable*' is skipped by '*instruction*'

## Remarks

An instruction in your program changed the flow of control, so an instruction that initialized a variable wasn't executed.

The [`/sdl` (Enable Additional Security Checks)](../../build/reference/sdl-enable-additional-security-checks.md) compiler option elevates this warning to an error.

## Example

The following example generates C4533. To resolve the issue, move the initialization before the jump instruction or after the target of the jump.

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
