---
title: "Compiler Warning (level 1) C4129"
description: "Learn more about: Compiler Warning (level 1) C4129"
ms.date: 11/04/2016
f1_keywords: ["C4129"]
helpviewer_keywords: ["C4129"]
---
# Compiler Warning (level 1) C4129

> 'character' : unrecognized character escape sequence

## Remarks

The `character` following a backslash (\\) in a character or string constant is not recognized as a valid escape sequence. The backslash is ignored and not printed. The character following the backslash is printed.

To print a single backslash, specify a double backslash (\\\\).

The C++ standard, in section 2.13.2 discusses escape sequences.

## Example

The following example generates C4129:

```cpp
// C4129.cpp
// compile with: /W1
int main() {
   char array1[] = "\/709";   // C4129
   char array2[] = "\n709";   // OK
}
```
