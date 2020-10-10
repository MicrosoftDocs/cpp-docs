---
title: "static_assert (C11)"
description: "Describes the C11 static_assert keyword"
ms.date: "10/9/2020"
f1_keywords: ["static_assert_c"]
helpviewer_keywords: ["assertions [C], static_assert"]
---

# static_assert (C11)

New in C11. Tests an assertion at compile time. If the specified constant expression is **`false`**, the compiler displays the specified message and the compilation fails with error E1754; otherwise, the declaration has no effect.

## Syntax

```C
static_assert(constant-expression, string-literal);
```

### Parameters

*constant-expression*\
An integral constant expression that can be evaluated at compile time. If the evaluated expression is zero (false), the *string-literal* parameter is displayed and the compilation fails with an error. If the expression is nonzero (true), the **`static_assert`** declaration has no effect.

*string-literal*\
The message to displayif the *constant-expression* evaluates to zero (false). The message is a string of characters using the [base character set](../c-language/ascii-character-set.md) of the compiler; that is, not [multibyte or wide characters](../c-language/multibyte-and-wide-characters.md).

## Remarks

The **`static_assert`** declaration tests a software assertion at compile time. In contrast, the [assert macro and _assert and _wassert functions](../c-runtime-library/reference/assert-macro-assert-wassert.md) test a software assertion at runtime and incur a runtime cost.

You can use the **`static_assert`** keyword at global or function scope.

## Example of `static_assert` at global scope

In the following example, the **`static_assert`** is at global scope. Because the compiler knows the value of the enum elements, the expression can be evaluated at compile time.

```c
// requires /std:c17
enum
{
    A=0,
    B,
    C,
    Last
};

static_assert( Last==3, "Expected enum to have three elements");
```

## Example of `static_assert` in a function

In the following example, the **`static_assert`** declaration is at function scope and verifies that the size of the integer parameter is 32 bits.

```c
// requires /std:c17
void test(int x)
{
    static_assert(sizeof(x)==4, "Expecting 32 bit integers");
}
```

## See also

[_STATIC_ASSERT Macro](../c-runtime-library/reference/static-assert-macro.md) 
[assert macro and _assert and _wassert functions](../c-runtime-library/reference/assert-macro-assert-wassert.md)