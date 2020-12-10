---
description: "Learn more about: Compiler Warning (level 4) C4816"
title: "Compiler Warning (level 4) C4816"
ms.date: "11/04/2016"
f1_keywords: ["C4816"]
helpviewer_keywords: ["C4816"]
ms.assetid: 60f730ae-d942-4db9-ab97-41d4a874d8da
---
# Compiler Warning (level 4) C4816

'param' : parameter has a zero-sized array which will be truncated (unless the object is passed by reference)

A parameter to an object with a zero-size array was not passed by reference. The array will not get copied when the object is passed.

## Example

The following sample generates C4816:

```cpp
// C4816.cpp
// compile with: /W4
#include <stdio.h>

extern "C" int printf_s(const char *, ...);

#pragma warning(disable : 4200)

struct S1
{
    int i;
    char cArr[];
};

void TestErr(S1 s1)   // C4816 param with zero-array
                      // not passed by reference
{
    printf_s("%d %c %c\n", s1.i, s1.cArr[0], s1.cArr[1]);
}

void TestOk(S1 &s1)
{
    printf_s("%d %c %c\n", s1.i, s1.cArr[0], s1.cArr[1]);
}

int main()
{
    S1 myS_1 = { 6, 'a', 'b', 'c' };
    TestErr(myS_1);
    TestOk(myS_1);
}
```
