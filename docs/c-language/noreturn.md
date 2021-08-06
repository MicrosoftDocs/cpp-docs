---
title: "_Noreturn keyword and noreturn macro (C11)"
description: "Describes the `_Noreturn` keyword and `noreturn` macro."
ms.date: 10/19/2020
f1_keywords: ["_Noreturn_c", "noreturn"]
helpviewer_keywords: ["keywords [C]"]
---

# `_Noreturn` keyword and `noreturn` macro (C11)

The `_Noreturn` keyword was introduced in C11. It tells the compiler that the function it's applied to doesn't return to the caller. The compiler knows that the code following a call to a `_Noreturn` function is unreachable. An example of a function that doesn't return is [abort](../c-runtime-library/reference/abort.md). If there's a possibility for control flow to return to the caller, the function must not have the `_Noreturn` attribute.

The keyword is typically used through the convenience macro, `noreturn`, provided in \<stdnoreturn.h>, which maps to the `_Noreturn` keyword.

The primary benefits for using `_Noreturn` (or the equivalent `noreturn`) are making the intention of the function clear in the code for future readers, and detecting unintentionally unreachable code.

A function marked `noreturn` shouldn't include a return type because it doesn't return a value to the caller. It should be `void`.

## Example using `noreturn` macro and `_Noreturn` keyword

The following example demonstrates the `_Noreturn` keyword and the equivalent `noreturn` macro.

IntelliSense may generate a spurious error, `E0065`, if you use the macro `noreturn` that you can ignore. It doesn't prevent you from running the sample.

```C
// Compile with Warning Level4 (/W4) and /std:c11
#include <stdio.h>
#include <stdlib.h>
#include <stdnoreturn.h>

noreturn void fatal_error(void)
{
    exit(3);
}

_Noreturn void not_coming_back(void)
{
    puts("There's no coming back");
    fatal_error();
    return; // warning C4645 - function declared with noreturn has a return statement
}

void done(void)
{
    puts("We'll never get here");
}

int main(void)
{
    not_coming_back();
    done(); // warning c4702 - unreachable code

    return 0;
}
```

## Requirements

|Macro|Required header|
|-------------|---------------------|
|**`noreturn`**|\<stdnoreturn.h>|

## See also

[/std (Specify language standard version)](../build/reference/std-specify-language-standard-version.md)\
[/W4 (Specify warning level)](../build/reference/compiler-option-warning-level.md)\
[C4702 warning](../error-messages\compiler-warnings\compiler-warning-level-4-c4702.md)\
[__declspec(noreturn)](../cpp/noreturn.md)
