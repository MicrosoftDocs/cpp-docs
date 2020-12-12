---
description: "Learn more about: _STATIC_ASSERT Macro"
title: "_STATIC_ASSERT Macro"
ms.date: "11/04/2016"
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_STATIC_ASSERT"]
helpviewer_keywords: ["_STATIC_ASSERT macro"]
ms.assetid: 89b0350c-2c2f-4be6-9786-8b1f0780a5da
---
# _STATIC_ASSERT Macro

Evaluate an expression at compile time and generate an error when the result is **FALSE**.

## Syntax

```C
_STATIC_ASSERT(
    booleanExpression
);
```

### Parameters

*booleanExpression*<br/>
Expression (including pointers) that evaluates to nonzero (**TRUE**) or 0 (**FALSE**).

## Remarks

This macro resembles the [_ASSERT and _ASSERTE macros](assert-asserte-assert-expr-macros.md), except that *booleanExpression* is evaluated at compile time instead of at runtime. If *booleanExpression* evaluates to **FALSE** (0), [Compiler Error C2466](../../error-messages/compiler-errors-1/compiler-error-c2466.md) is generated.

## Example

In this example, we check whether the [sizeof](../../c-language/sizeof-operator-c.md) an **`int`** is larger than or equal to 2 bytes and whether the [sizeof](../../c-language/sizeof-operator-c.md) a **`long`** is 1 byte. The program will not compile and it will generate [Compiler Error C2466](../../error-messages/compiler-errors-1/compiler-error-c2466.md) because a **`long`** is larger than 1 byte.

```C
// crt__static_assert.c

#include <crtdbg.h>
#include <stdio.h>

_STATIC_ASSERT(sizeof(int) >= 2);
_STATIC_ASSERT(sizeof(long) == 1);  // C2466

int main()
{
    printf("I am sure that sizeof(int) will be >= 2: %d\n",
        sizeof(int));
    printf("I am not so sure that sizeof(long) == 1: %d\n",
        sizeof(long));
}
```

## Requirements

|Macro|Required header|
|-----------|---------------------|
|**_STATIC_ASSERT**|\<crtdbg.h>|

## See also

[Alphabetical Function Reference](crt-alphabetical-function-reference.md)<br/>
[_ASSERT, _ASSERTE, _ASSERT_EXPR Macros](assert-asserte-assert-expr-macros.md)<br/>
