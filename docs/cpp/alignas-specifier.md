---
description: "Learn more about: alignas specifier"
title: "alignas (C++)"
ms.date: 11/01/2023
f1_keywords: ["alignas"]
helpviewer_keywords: ["alignas [C++]", "__alignof keyword [C++]", "alignof [C++]", "types [C++], alignment requirements"]
---
# `alignas` (C++)

The **`alignas`** specifier changes the alignment of a type or object in memory.

## Syntax

```cpp
alignas(expression)
alignas(type-id)
alignas(pack...)
```

## Remarks

You can use **`alignas`** specifier on a **`struct`**, **`class`**, **`union`**, or variable declaration.

For `alignas(expression)`, the expression must be an integral constant expression that is 0 or a power of 2 (1, 2, 4, 8, 16, ...). All other expressions are ill-formed.

Use **`alignas`** instead of [`__declspec(align(#))`](align-cpp.md) for code portability.

A common use of `alignas` is to control the alignment of a user-defined type, as shown in the following example:

```cpp
struct alignas(8) S1
{
    int x;
};

static_assert(alignof(S1) == 8, "alignof(S1) should be 8");
```

When multiple **`alignas`** are applied to the same declaration, the one with the largest value is used. An **`alignas`** value of `0` is ignored.

The following example shows how to use `alignas` with a user-defined type:

```cpp
class alignas(4) alignas(16) C1 {};

// `alignas(0)` ignored
union alignas(0) U1
{
    int i;
    float f;
};

union U2
{
    int i;
    float f;
};

static_assert(alignof(C1) == 16, "alignof(C1) should be 16");
static_assert(alignof(U1) == alignof(U2), "alignof(U1) should be equivalent to alignof(U2)");
```

You can supply a type as the alignment value. The type's default alignment is used as the alignment value, as shown in the following example:

```cpp
struct alignas(double) S2
{
    int x;
};

static_assert(alignof(S2) == alignof(double), "alignof(S2) should be equivalent to alignof(double)");
```

A template parameter pack (`alignas (pack...)`) can be used for the alignment value. The largest alignment value of all the elements in the pack is used.

```cpp
template <typename... Ts>
class alignas(Ts...) C2
{
    char c;
};

static_assert(alignof(C2<>) == 1, "alignof(C2<>) should be 1");
static_assert(alignof(C2<short, int>) == 4, "alignof(C2<short, int>) should be 4");
static_assert(alignof(C2<int, float, double>) == 8, "alignof(C2<int, float, double>) should be 8");
```

If multiple **`alignas`** are applied, the resulting alignment is the largest of all the **`alignas`** values, and can't be less than the natural alignment of the type it's applied to.

The declaration and definition of user-defined types must have the same alignment value.

```cpp
// Declaration of `C3`
class alignas(16) C3;

// Definition of `C3` with differing alignment value
class alignas(32) C3 {}; // Error: C2023 'C3': Alignment (32) different from prior declaration (16)

int main()
{
    alignas(2) int x; // ill-formed because the natural alignment of int is 4
}
```

## See also

[`#pragma pack`](../preprocessor/pack.md)\
[Alignment](../cpp/alignment-cpp-declarations.md)\
[`alignof`](alignof-operator.md)\
[Compiler error C2023](../error-messages/compiler-errors-1/compiler-error-c2023.md)\
[Compiler warning C4359](../error-messages/compiler-warnings/compiler-warning-level-3-c4359.md)
