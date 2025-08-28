---
title: "Compiler Warning (level 2) C4308"
description: "Learn more about: Compiler Warning (level 2) C4308"
ms.date: 08/30/2022
f1_keywords: ["C4308"]
helpviewer_keywords: ["C4308"]
---
# Compiler Warning (level 2) C4308

> negative integral constant converted to unsigned type

## Remarks

An expression converts a negative integer constant to an unsigned type. The result of the expression is probably meaningless.

The [`/sdl` (Enable Additional Security Checks)](../../build/reference/sdl-enable-additional-security-checks.md) compiler option elevates this warning to an error.

## Example

The following example generates C4308:

```cpp
// C4308.cpp
// compile with: /W2
unsigned int u = (-5 + 3U);   // C4308

int main()
{
}
```
