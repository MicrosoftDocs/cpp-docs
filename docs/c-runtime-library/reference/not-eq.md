---
description: "Learn more about: not_eq"
title: "not_eq"
ms.date: 08/09/2024
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["ISO646/not_eq", "not_eq", "std::not_eq", "std.not_eq"]
helpviewer_keywords: ["not_eq function"]
---
# `not_eq`

An alternative spelling for the **`!=`** operator.

## Syntax

```C
#define not_eq !=
```

## Remarks

C++:
- **`not_eq`** can be used as alternative to **`!=`**. The [`/permissive-`](../../build/reference/permissive-standards-conformance.md) or [`/Za`](../../build/reference/za-ze-disable-language-extensions.md) compiler option is required.
- Including `<iso646.h>` or `<ciso646>` is deprecated. You can use the alternative spelling without including any header files.
- There's no alternative spelling for **`==`**.

C:
- **`not_eq`** is an alternative spelling for **`!=`**. It is provided as a macro in `<iso646.h>`, which you must `#include`.
- There's no alternative spelling for **`==`**.

## Example

```cpp
// compile with: /EHsc
#include <iostream>
#include <iso646.h>

int main( )
{
   int x = 1, y = 2;
    
    // not_eq is available in C++ and C
    // This example is for C++, so no header file is needed to use not_eq
    // When compiling for C, #include <iso646.h> to use not_eq
    if (x not_eq y)
    {
        std::cout << "Not equal\n";
    }
}
```

```Output
Not equal
```

## Requirements

**Header:** `<iso646.h>` is necessary if you are compiling for C.