---
title: "typeof_unqual, __typeof_unqual__ (C23)"
description: "Describes Microsoft Visual C23 typeof_unqual operator"
ms.date: 02/06/2024
helpviewer_keywords: ["typeof_unqual keyword [C]", "__typeof_unqual__ keyword [C]"]
---
# `typeof_unqual`, `__typeof_unqual__` (C23)

New in the C23 standard, the **`typeof_unqual`** operator is a unary operator that returns the type of an expression after discarding qualifiers such as `const`, `volatile`, and `restrict`. It can be used in type declarations, type casts, type checks, and so on. It gets the type of a variable, function, or any C expression.

The **`__typeof_unqual__`** keyword is a Microsoft-specific extension that provides the same functionality as **`typeof_unqual`**. The **`__typeof_unqual__`** keyword differs from `typeof_unqual` only in that it's available when compiling for all versions of C (not just `/std:clatest`), and it may ease porting code between other compilers that support `__typeof_unqual__`.

### `typeof_unqual` syntax

```c
typeof_unqual(type)
typeof_unqual(constant-expression)
__typeof__unqual(constant-expression)
```

### `typeof_unqual` example

This example uses `typeof_unqual()`, but the behavior is the same if you use `__typeof_unqual__`.

```c
// Compile with /std:clatest and /experimental:c11atomics
#include <stdatomic.h>

// A function that takes an atomic int pointer, but uses a non-atomic copy of the value
void func(_Atomic(int) * pAtomic)
{
    typeof_unqual(*pAtomic) local = *pAtomic;

    // Use local non-atomic copy of value
}

int main()
{
    int* const cpVar1 = 2;
    typeof_unqual(cpVar1) pVar2 = 3;
    pVar2 = 4; // no error because pi is not const. cpVar1 = 4 would be an error.

    _Atomic(int)i = 42;
    func(&i);

    return 0;
}
```

## Requirements

Requires Visual Studio 17.9 or later, or `cl.exe` version 19.39.33428 or later.
To use `typeof_unqual`, compile with [`/std:clatest`](../build/reference/std-specify-language-standard-version.md).

## See also

[`/std` (Specify Language Standard Version)](../build/reference/std-specify-language-standard-version.md)
