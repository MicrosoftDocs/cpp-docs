---
description: "Learn more about: Compiler Warning (level 4) C4242"
title: "Compiler Warning (level 4) C4242"
ms.date: "11/04/2016"
f1_keywords: ["C4242"]
helpviewer_keywords: ["C4242"]
ms.assetid: 8df742e1-fbf1-42f3-8e93-c0e1c222dc7e
---
# Compiler Warning (level 4) C4242

'identifier' : conversion from 'type1' to 'type2', possible loss of data

The types are different. Type conversion may result in loss of data. The compiler makes the type conversion.

This warning is off by default. See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.

For additional information on C4242, see [Common Compiler Errors](/windows/win32/WinProg64/common-compiler-errors).

The following sample generates C4242:

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
