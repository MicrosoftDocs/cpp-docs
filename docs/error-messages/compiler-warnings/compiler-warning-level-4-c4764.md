---
description: "Learn more about: Compiler Warning (level 4) C4764"
title: "Compiler Warning (level 4) C4764"
ms.date: "11/04/2016"
f1_keywords: ["C4764"]
helpviewer_keywords: ["C4764"]
ms.assetid: 7bd4296f-966b-484c-bf73-8dbc8e85b4a9
---
# Compiler Warning (level 4) C4764

Cannot align catch objects to greater than 16 bytes

An alignment greater than 16 was specified, but on some platforms, if the function throws an exception, the stack will force an alignment of not greater than 16.

## Example

The following sample generates C4764:

```cpp
// C4764.cpp
// compile with: /W4 /EHsc
// processor: x64 IPF
#include <stdio.h>

class A
{
public:
    int x;
};

typedef __declspec(align(32)) A ALIGNEDA;

int main()
{
    ALIGNEDA a;
    try
    {
        a.x = 15;
        throw a;
    }
    catch (ALIGNEDA b) // can’t align b to > 16 bytes
    {
        printf_s("%d\n", b.x);
    }
}   // C4764
```
