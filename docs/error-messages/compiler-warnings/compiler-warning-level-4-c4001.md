---
title: "Compiler Warning (level 4, no longer emitted) C4001"
description: "Learn more about: Compiler Warning (level 4, no longer emitted) C4001"
ms.date: 11/04/2016
f1_keywords: ["C4001"]
helpviewer_keywords: ["C4001"]
---
# Compiler Warning (level 4, no longer emitted) C4001

> nonstandard extension 'single line comment' was used

## Remarks

> [!NOTE]
> This warning is removed in Visual Studio 2017 version 15.5 because single-line comments are standard in C99.

Single-line comments are standard in C++ and standard in C starting with C99.
Under strict ANSI compatibility ([/Za](../../build/reference/za-ze-disable-language-extensions.md)), C files that contain single-line comments, generate C4001 due to the usage of a nonstandard extension. Since single-line comments are standard in C++, C files containing single-line comments don't produce C4001 when compiling with Microsoft extensions (/Ze).

## Example

To disable warning, uncomment [#pragma warning(disable:4001)](../../preprocessor/warning.md).

```cpp
// C4001.cpp
// compile with: /W4 /Za /TC
// #pragma warning(disable:4001)
int main()
{
   // single-line comment in main
   // C4001
}
```
