---
description: "Learn more about: Compiler Warning (level 4) C4295"
title: "Compiler Warning (level 4) C4295"
ms.date: "01/09/2018"
f1_keywords: ["C4295"]
helpviewer_keywords: ["C4295"]
ms.assetid: 20dbff85-9f62-4ca3-8fe9-079d4512006d
---
# Compiler Warning (level 4) C4295

> '*array*' : array is too small to include a terminating null character

An array was initialized but the last character in the array is not a null; accessing the array as a string may produce unexpected results.

## Example

The following sample generates C4295. To fix this issue, you could declare the array size larger, to hold a terminating null from the initializer string, or you could use an array initializer list to make the intent clear that this is an array of **`char`**, not a null-terminated string.

```C
// C4295.c
// compile with: /W4

int main() {
   char a[3] = "abc";           // C4295
   char b[3] = {'d', 'e', 'f'}; // No warning
   a[0] = b[2];
}
```
