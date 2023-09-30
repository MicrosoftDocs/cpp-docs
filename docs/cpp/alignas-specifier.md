---
description: "Learn more about: alignas Specifier"
title: "alignas Specifier"
ms.date: "09/30/2023" 
f1_keywords: ["alignas"]
helpviewer_keywords: ["alignas [C++]", "alignment of structures", "__alignof keyword [C++]", "alignof [C++]", "types [C++], alignment requirements"]
---
# `alignas` Specifier

The **`alignas`** specifier changes the alignment of a type or object. You should prefer usage of **`alignas`** over [`__declspec(align(#))`](align-cpp.md) for code portability.

## Syntax

```cpp
alignas( type-id )
alignas( expression )
alignas( pack... )
```

## Remarks

You can use **`alignas`** specifier on a **`struct`**, **`class`**, **`union`**, or variable declaration. For `alignas( expression )`, the expression must be an integral constant expression that are powers of 2 (1, 2, 4, 8, 16, 32, 64...) or equal to `0`. All other expressions are ill-formed. A common use-case would be to control the alignment of a user-defined type as follows:

```cpp
struct alignas(8) S1
{
    int x;
};

static_assert(alignof(S1) == 8, "alignof(S1) should be 8");
```

See [`alignof`](alignof-operator.md) for more infomation about how to get the alignment value. When multiple **`alignas`** target the same declaration, the strictest alignment requirement will be taken (largest value). When the integral constant expression is `0`, the **`alignas`** will be ignored.

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

Instead of using an integral constant for the alignment value, you may also choose to supply a type:

```cpp
struct alignas(double) S2
{
    int x;
};

static_assert(alignof(S2) == alignof(double), "alignof(S2) should be equivalent to alignof(double)");
```

As seen from the [`static_assert`](static-assert.md), `alignas( type-id )` is analogous to `alignas(alignof( type ))` (identical to using an integral constant expression of the result).

A template parameter pack can also be used (`alignas ( pack... )`). It functions on the same concept where only the strictest alignment is effective.

```cpp
template <typename... Ts>
class alignas(Ts...) C2
{
    char c;
};

static_assert(alignof(C2<>) == 1, "alignof(C2<>) should be 1");
// Empty angle brackets can be omitted since C++17
// static_assert(alignof(C2) == 1, "alignof(C2) should be 1");
static_assert(alignof(C2<short, int>) == 4, "alignof(C2<short, int>) should be 4");
static_assert(alignof(C2<int, float, double>) == 8, "alignof(C2<int, float, double>) should be 8");
```

The resulting alignment (largest) of all the **`alignas`** (if more than 1) cannot be less than the natural alignment (without having any **`alignas`** specifier). Declaration and definition of user-defined types must match in alignment requirement.

```cpp
// Declaration of `C3`
class alignas(16) C3;

// Definition of `C3` (with differing alignment requirement)
class alignas(32) C3 {}; // C2023, 'C3': Alignment (32) different from prior declaration (16)

int main()
{
    alignas(2) int x; // ill-formed, since the natural alignment of `int` is 4
}
```

For more information, see error [C2023](../error-messages/compiler-errors-1/compiler-error-c2023.md) and warning [C4359](../error-messages/compiler-warnings/compiler-warning-level-3-c4359.md).