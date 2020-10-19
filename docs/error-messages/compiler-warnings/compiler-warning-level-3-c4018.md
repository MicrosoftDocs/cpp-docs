---
title: "Compiler Warning (level 3) C4018"
description: "Microsoft C/C++ compiler warning C4018, its causes and resolution."
ms.date: 10/16/2020
f1_keywords: ["C4018"]
helpviewer_keywords: ["C4018"]
---
# Compiler Warning (level 3) C4018

> '*token*' : signed/unsigned mismatch

Using the *token* operator to compare **`signed`** and **`unsigned`** numbers required the compiler to convert the **`signed`** value to **`unsigned`**.

## Remarks

One way to fix this warning is if you cast one of the two types when you compare **`signed`** and **`unsigned`** types.

## Example

This sample generates C4018 and shows how to fix it:

```cpp
// C4018.cpp
// compile with: cl /EHsc /W4 C4018.cpp
int main() {
    unsigned int uc = 0;
    int c = 0;
    unsigned int c2 = c; // implicit conversion

    if (uc < c)           // C4018
        uc = 0;

    if (uc < unsigned(c)) // OK
        uc = 0;

    if (uc < c2)          // Also OK
       uc = 0;
}
```

## See also

[Compiler Warning (Level 4) C4388](c4388.md)\
[Compiler Warning (Level 4) C4389](compiler-warning-level-4-c4389.md)
