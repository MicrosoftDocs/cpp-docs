---
description: "Learn more about: Compiler Error C3851"
title: "Compiler Error C3851"
ms.date: "09/05/2018"
f1_keywords: ["C3851"]
helpviewer_keywords: ["C3851"]
ms.assetid: da30c21c-33aa-4439-8fb3-2f5021ea4985
---
# Compiler Error C3851

> '*char*': a universal-character-name cannot designate a character in the basic character set

## Remarks

In code compiled as C++, you cannot use a universal character name that represents a character in the basic source character set outside of a string or character literal. For more information, see [Character Sets](../../cpp/character-sets.md). In code compiled as C, you cannot use a universal character name for characters in the range 0x20-0x7f, inclusive, except for 0x24 ('$'), 0x40 ('\@'), or 0x60 ('\`').

## Example

The following samples generate C3851, and show how to fix it:

```cpp
// C3851.cpp
int main()
{
   int test1_\u0041 = 0;   // C3851, \u0041 = 'A' in basic character set
   int test2_A = 0;        // OK
}
```
