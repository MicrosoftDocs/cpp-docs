---
description: "Learn more about: Compiler Warning (level 4) C4125"
title: "Compiler Warning (level 4) C4125"
ms.date: "11/04/2016"
f1_keywords: ["C4125"]
helpviewer_keywords: ["C4125"]
ms.assetid: a081d1f4-0789-4915-91df-7ff0b28ca245
---
# Compiler Warning (level 4) C4125

decimal digit terminates octal escape sequence

The compiler evaluates the octal number without the decimal digit and assumes the decimal digit is a character.

## Example

```cpp
// C4125a.cpp
// compile with: /W4
char array1[] = "\709"; // C4125
int main()
{
}
```

If the digit 9 is intended as a character, correct the example as follows:

```cpp
// C4125b.cpp
// compile with: /W4
char array[] = "\0709";  // C4125 String containing "89"
int main()
{
}
```
