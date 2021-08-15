---
title: "`__restrict`"
description: "Describes the Microsoft Visual C++ `__restrict` keyword." 
ms.date: "11/6/2020"
f1_keywords: ["__restrict_cpp", "__restrict", "_restrict"]
helpviewer_keywords: ["__restrict keyword [C++]"]
---
# `__restrict`

Like the **`__declspec` ( [`restrict`](../cpp/restrict.md) )** modifier, the **`__restrict`** keyword (two leading underscores '_') indicates that a symbol isn't aliased in the current scope. The **`__restrict`** keyword differs from the `__declspec (restrict)` modifier in the following ways:

- The **`__restrict`** keyword is valid only on variables, and `__declspec (restrict)` is only valid on function declarations and definitions.

- **`__restrict`** is similar to [`restrict`](../c-language/type-qualifiers.md#restrict) for C starting in C99 and available in [`/std:c11` or `/std:c17`](../build/reference/std-specify-language-standard-version.md) mode, but **`__restrict`** can be used in both C++ and C programs.

- When **`__restrict`** is used, the compiler won't propagate the no-alias property of a variable. That is, if you assign a **`__restrict`** variable to a non-**`__restrict`** variable, the compiler will still allow the non-__restrict variable to be aliased. This is different from the behavior of the C99 C language **`restrict`** keyword.

Generally, if you want to affect the behavior of an entire function, use **`__declspec (restrict)`** instead of the keyword.

For compatibility with previous versions, **`_restrict`** is a synonym for **`__restrict`** unless compiler option [`/Za` \(Disable language extensions)](../build/reference/za-ze-disable-language-extensions.md) is specified.

In Visual Studio 2015 and later, **`__restrict`** can be used on C++ references.

> [!NOTE]
> When used on a variable that also has the [`volatile`](../cpp/volatile-cpp.md) keyword, **`volatile`** will take precedence.

## Example

```cpp
// __restrict_keyword.c
// compile with: /LD
// In the following function, declare a and b as disjoint arrays
// but do not have same assurance for c and d.
void sum2(int n, int * __restrict a, int * __restrict b,
          int * c, int * d) {
   int i;
   for (i = 0; i < n; i++) {
      a[i] = b[i] + c[i];
      c[i] = b[i] + d[i];
    }
}

// By marking union members as __restrict, tell compiler that
// only z.x or z.y will be accessed in any given scope.
union z {
   int * __restrict x;
   double * __restrict y;
};
```

## See also

[Keywords](../cpp/keywords-cpp.md)
