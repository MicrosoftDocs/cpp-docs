---
title: "noreturn functions"
description: "Describes the `_NoReturn` keyword and `noreturn` macro."
ms.date: 10/16/2020
f1_keywords: ["_Noreturn_c", "Noreturn"]
helpviewer_keywords: ["keywords [C]"]
---

# Noreturn functions and the _NoReturn keyword (C11)

The `_NoReturn` keyword, introduced in C11, tells the compiler that the function it is applied to does not return. The compiler knows that the code following a call to a `_NoReturn` function is unreachable.

A convenience macro, `noreturn`, provided in <stdnoreturn.h>, maps to the `_NoReturn` keyword.

There is a small code gen benefit to using `_NoReturn` (or the equivalent `noreturn`) because the compiler doesn't have to generate code to handle returning from the function. But its primary benefit is making the intention of the function clear in the code for future readers.

## Example using `noreturn` macro and `_Noreturn `keyword

The following example demonstrates the `_Noreturn` keyword and the equivalent `noreturn` macro.

Note that Intellisense generates a spurious error, E0065, that you can ignore. It will not prevent you from running the sample.

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
    return; // warning C465 - function declared with noreturn has a return statement
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
[/W4 (Specify warning level)](../build/reference/compiler-option-warning-level.md)