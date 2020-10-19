---
title: "Compiler Warning (level 4) C4389"
description: "Microsoft C/C++ compiler warning C4389, its causes and resolution."
ms.date: 10/16/2020
f1_keywords: ["c4389"]
helpviewer_keywords: ["C4389"]
---
# Compiler Warning (level 4) C4389

> '*equality-operator*' : signed/unsigned mismatch

An **`==`** or **`!=`** operation involved **`signed`** and **`unsigned`** variables. This could result in a loss of data.

## Remarks

One way to fix this warning is if you cast one of the two types when you compare **`signed`** and **`unsigned`** types.

## Example

The following sample generates C4389:

```cpp
// C4389.cpp
// compile with: cl /EHsc /W4 C4389.cpp

int main()
{
   int a = 9;
   unsigned int b = 10;
   int result = 0;

   if (a == b)   // C4389
      result = 1;
   else
      result = 2;

   if (unsigned(a) == b) // OK
      result = 3;
   else
      result = 4;

   return result;
}
```

## See also

[Compiler Warning C4018](compiler-warning-level-3-c4018.md)\
[Compiler Warning (Level 4) C4388](c4388.md)
