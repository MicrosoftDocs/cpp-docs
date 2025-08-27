---
description: "Learn more about: Compiler Warning (level 3, off) C4242"
title: "Compiler Warning (level 3, off) C4242"
ms.date: "11/04/2016"
f1_keywords: ["C4242"]
helpviewer_keywords: ["C4242"]
---
# Compiler Warning (level 3, off) C4242

> '*identifier*': conversion from '*type1*' to '*type2*', possible loss of data

## Remarks

The types are different. Type conversion may result in loss of data. The compiler makes the type conversion.

This warning is off by default. For more information, see [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).

For more information on C4242, see [Common Compiler Errors](/windows/win32/WinProg64/common-compiler-errors).

## Example

The following example generates C4242:

```cpp
// C4242.cpp
// compile with: /W4
#pragma warning(4:4242)
int func() {
   return 0;
}

int main() {
   char a;
   a = func();   // C4242, return type and variable type do not match
}
```
