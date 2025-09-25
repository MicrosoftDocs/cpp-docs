---
title: "Generic selection (C11)"
description: "Describes the C11 _Generic keyword used in the Microsoft Visual C compiler"
ms.date: "6/29/2021"
helpviewer_keywords: ["_Generic keyword [C]"]
---

# Generic selection (C11)

Use the **`_Generic`** keyword to write code that selects an expression at compile time based on the type of the argument. It's similar to overloading in C++ where the type of the argument selects which function to call. In this case, the type of the argument selects which expression to evaluate.

For example, the expression `_Generic(42, int: "integer", char: "character", default: "unknown");` evaluates the type of `42` and looks for the matching type, `int`, in the list. It finds it and returns `"integer"`.

## Syntax

*`generic-selection`*:\
&emsp;**`_Generic`** **(** *`assignment-expression`, `assoc-list`* **)**

*`assoc-list`*:\
&emsp;*`association`*\
&emsp;*`assoc-list`, `association`*

*`association`*:\
&emsp;*`type-name`* : *`assignment-expression`*\
&emsp;**`default`** : *`assignment-expression`*

The first *`assignment-expression`* is called the controlling expression. The type of the controlling expression is determined at compile time and matched against the *`assoc-list`* to find which expression to evaluate and return. The controlling expression isn't evaluated. For example, `_Generic(intFunc(), int: "integer", default: "error");` doesn't result in a call at runtime to `intFunc`.

When the type of the controlling expression is determined, `const`, `volatile`, and `restrict` are removed before matching against *`assoc-list`*.

Entries in the `assoc-list` that aren't chosen aren't evaluated.

## Constraints

- The *`assoc-list`* can't specify the same type more than once.
- The *`assoc-list`* can't specify types that are compatible with each other, such as an enumeration and the underlying type of that enumeration.
- If a generic selection doesn't have a default, the controlling expression must have only one compatible type name in the generic association list.

## Example

One way to use **`_Generic`** is in a macro. The \<tgmath.h> header file uses **`_Generic`** to call the right math function depending on the type of argument. For example, the macro for `cos` maps a call with a float to `cosf`, while mapping a call with a complex double to `ccos`.

The following example shows how to write a macro that identifies the type of the argument you pass to it. It produces `"unknown"` if no entry in the *`assoc-list`* matches the controlling expression:

```C
// Compile with /std:c11

#include <stdio.h>

/* Get a type name string for the argument x */
#define TYPE_NAME(X) _Generic((X), \
      int: "int", \
      char: "char", \
      double: "double", \
      default: "unknown")

int main()
{
    printf("Type name: %s\n", TYPE_NAME(42.42));

    // The following would result in a compile error because 
    // 42.4 is a double, doesn't match anything in the list, 
    // and there is no default.
    // _Generic(42.4, int: "integer", char: "character"));
}

/* Output:
Type name: double
*/
```

## Requirements

Compile with [`/std:c11`](../build/reference/std-specify-language-standard-version.md).

Windows SDK 10.0.20348.0 (version 2104) or later. See [Windows SDK](https://developer.microsoft.com/windows/downloads/windows-sdk/) to download the latest SDK. For instructions to install and use the SDK for C11 and C17 development, see [Install C11 and C17 support in Visual Studio](../overview/install-c17-support.md).

## See also

[`/std` (Specify language standard version)](../build/reference/std-specify-language-standard-version.md)\
[Type-generic math](../c-runtime-library/tgmath.md)
