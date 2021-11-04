---
title: "_Static_assert keyword and static_assert macro (C11)"
description: "Describes the C11 _Static_assert keyword and the C11 static_assert macro."
ms.date: 06/29/2021
f1_keywords: ["static_assert_c", "_Static_assert"]
helpviewer_keywords: ["assertions [C], _Static_assert, static_assert"]
---

# `_Static_assert` keyword and `static_assert` macro (C11)

Tests an assertion at compile time. If the specified constant expression is **`false`**, the compiler displays the specified message and the compilation fails with error C2338; otherwise, there's no effect. New in C11.

**`_Static_assert`** is a keyword introduced in C11. **`static_assert`** is a macro, introduced in C11, that maps to the **`_Static_assert`** keyword.

## Syntax

```C
_Static_assert(constant-expression, string-literal);
static_assert(constant-expression, string-literal);
```

### Parameters

*`constant-expression`*\
An integral constant expression that can be evaluated at compile time. If the expression is zero (false), displays the *`string-literal`* parameter and the compilation fails with an error. If the expression is nonzero (true), then there's no effect.

*`string-literal`*\
The message displayed if *`constant-expression`* evaluates to zero (false). The message must be made using the [base character set](../c-language/ascii-character-set.md) of the compiler. The characters can't be [multibyte or wide characters](../c-language/multibyte-and-wide-characters.md).

## Remarks

The **`_Static_assert`** keyword, and the **`static_assert`** macro, both test a software assertion at compile time. They can be used at global or function scope.

In contrast, the [`assert` macro and `_assert` and `_wassert` functions](../c-runtime-library/reference/assert-macro-assert-wassert.md) test a software assertion at runtime and incur a runtime cost.

**Microsoft-specific behavior**

In C, when you don't include `<assert.h>`, the Microsoft compiler treats **`static_assert`** as a keyword that maps to **`_Static_assert`**. Using **`static_assert`** is preferred because the same code will work in both C and C++.

## Example of a compile-time assert

In the following example, **`static_assert`** and **`_Static_assert`** are used to verify how many elements are in an enum and that integers are 32 bits wide.

```C
// requires /std:c11 or higher
#include <assert.h>

enum Items
{
    A,
    B,
    C,
    LENGTH
};

int main()
{
    // _Static_assert is a C11 keyword
    _Static_assert(LENGTH == 3, "Expected Items enum to have three elements");

    // Preferred: static_assert maps to _Static_assert and is compatible with C++
    static_assert(sizeof(int) == 4, "Expecting 32 bit integers"); 

    return 0;
}
```

## Requirements

|Macro|Required header|
|-------------|---------------------|
|**`static_assert`**|\<assert.h>|

Compile with [`/std:c11`](../build/reference/std-specify-language-standard-version.md).

Windows SDK 10.0.20348.0 (version 2104) or later. For more information on installing the Windows SDK for C11 and C17 development, see [Install C11 and C17 support in Visual Studio](../overview/install-c17-support.md).

## See also

[`_STATIC_ASSERT` Macro](../c-runtime-library/reference/static-assert-macro.md)\
[`assert` macro and `_assert` and `_wassert` functions](../c-runtime-library/reference/assert-macro-assert-wassert.md)
[`/std` (Specify language standard version)](../build/reference/std-specify-language-standard-version.md)
