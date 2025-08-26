---
title: "Compiler Warning (level 4) C4130"
description: "Learn more about: Compiler Warning (level 4) C4130"
ms.date: 11/04/2016
f1_keywords: ["C4130"]
helpviewer_keywords: ["C4130"]
---
# Compiler Warning (level 4) C4130

> 'operator' : logical operation on address of string constant

## Remarks

Using the operator with the address of a string literal produces unexpected code.

## Example

The following example generates C4130:

```cpp
// C4130.cpp
// compile with: /W4
int main()
{
   char *pc;
   pc = "Hello";
   if (pc == "Hello") // C4130
   {
   }
}
```

The **`if`** statement compares the value stored in the pointer `pc` to the address of the string "Hello", which is allocated separately each time the string occurs in code. The **`if`** statement does not compare the string pointed to by `pc` with the string "Hello".

To compare strings, use the `strcmp` function.
