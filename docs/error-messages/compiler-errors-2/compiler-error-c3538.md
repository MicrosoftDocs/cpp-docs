---
description: "Learn more about: Compiler Error C3538"
title: "Compiler Error C3538"
ms.date: "11/04/2016"
f1_keywords: ["C3538"]
helpviewer_keywords: ["C3538"]
ms.assetid: ef3698a5-7356-4c62-b9af-5d3a4baed958
---
# Compiler Error C3538

in a declarator-list 'auto' must always deduce to the same type

All the declared variables in a declaration list do not resolve to the same type.

### To correct this error

1. Ensure that all **`auto`** declarations in the list deduce to the same type.

## Example

The following statements yield C3538. Each statement declares multiple variables, but each use of the **`auto`** keyword does not deduce to the same type.

```cpp
// C3538.cpp
// Compile with /Zc:auto
// C3538 expected
int main()
{
// Variable x1 is a pointer to char, but y1 is a double.
   auto * x1 = "a", y1 = 3.14;
// Variable c is a char and c1 is char*, but c2, and c3 are pointers to pointers.
   auto c = 'a', *c1 = &c, * c2 = &c1, * c3 = &c2;
// Variable x2 is an int, but y2 is a double and z is a char.
   auto x2(1), y2(0.0), z = 'a';
// Variable a is a pointer to int, but b is a pointer to double.
   auto *a = new auto(1), *b = new auto(2.0);
   return 0;
}
```

## See also

[auto Keyword](../../cpp/auto-cpp.md)
