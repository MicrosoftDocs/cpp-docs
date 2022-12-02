---
description: "Learn more about: _alloca"
title: "_alloca"
ms.date: 01/05/2022
api_name: ["_alloca"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_alloca", "alloca"]
helpviewer_keywords: ["memory allocation, stack", "alloca function", "_alloca function"]
---
# `_alloca`

Allocates memory on the stack. This function is deprecated because a more secure version is available; see [`_malloca`](malloca.md).

## Syntax

```C
void *_alloca(
   size_t size
);
```

### Parameters

*`size`*\
Bytes to be allocated from the stack.

## Return value

The **`_alloca`** routine returns a **`void`** pointer to the allocated space, which is suitably aligned for storage of any type of object. If *`size`* is 0, **`_alloca`** allocates a zero-length item and returns a valid pointer to that item.

A stack overflow exception is generated if the space can't be allocated. The stack overflow exception isn't a C++ exception; it's a structured exception. Instead of using C++ exception handling, you must use [Structured exception handling](../../cpp/structured-exception-handling-c-cpp.md) (SEH).

## Remarks

**`_alloca`** allocates *`size`* bytes from the program stack. The allocated space is automatically freed when the calling function exits (not when the allocation merely passes out of scope). Therefore, don't pass the pointer value returned by **`_alloca`** as an argument to [`free`](free.md).

There are restrictions to explicitly calling **`_alloca`** in an exception handler (EH). EH routines that run on x86-class processors operate in their own memory frame: They perform their tasks in memory space that isn't based on the current location of the stack pointer of the enclosing function. The most common implementations include Windows structured exception handling (SEH) and C++ catch clause expressions. Therefore, explicitly calling **`_alloca`** in any of the following scenarios results in program failure during the return to the calling EH routine:

- Windows SEH exception filter expression: `__except ( _alloca() )`

- Windows SEH final exception handler: `__finally { _alloca() }`

- C++ EH catch clause expression

However, **`_alloca`** can be called directly from within an EH routine or from an application-supplied callback that gets invoked by one of the EH scenarios previously listed.

> [!IMPORTANT]
> If **`_alloca`** is called inside a try block, you must call [`_resetstkoflw`](resetstkoflw.md) in the catch block.

In addition to the above restrictions, when using the[`/clr` (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md) option, **`_alloca`** can't be used in **`__except`** blocks. For more information, see [`/clr` Restrictions](../../build/reference/clr-restrictions.md).

## Requirements

| Routine | Required header |
|---|---|
| **`_alloca`** | `<malloc.h>` |

## Example

```C
// crt_alloca.c
// This program demonstrates the use of
// _alloca and trapping any exceptions
// that may occur.

#include <windows.h>
#include <stdio.h>
#include <malloc.h>

int main()
{
    int     size = 1000;
    int     errcode = 0;
    void    *pData = NULL;

    // Note: Do not use try/catch for _alloca,
    // use __try/__except, since _alloca throws
    // Structured Exceptions, not C++ exceptions.

    __try {
        // An unbounded _alloca can easily result in a
        // stack overflow.
        // Checking for a size < 1024 bytes is recommended.
        if (size > 0 && size < 1024)
        {
            pData = _alloca( size );
            printf_s( "Allocated %d bytes of stack at 0x%p",
                      size, pData);
        }
        else
        {
            printf_s("Tried to allocate too many bytes.\n");
        }
    }

    // If an exception occurred with the _alloca function
    __except( GetExceptionCode() == STATUS_STACK_OVERFLOW )
    {
        printf_s("_alloca failed!\n");

        // If the stack overflows, use this function to restore.
        errcode = _resetstkoflw();
        if (errcode == 0) //  _resetstkoflw() returns 0 on failure
        {
            printf_s("Could not reset the stack!\n");
            _exit(1);
        }
    };
}
```

```Output
Allocated 1000 bytes of stack at 0x0012FB50
```

## See also

[Memory allocation](../memory-allocation.md)\
[`calloc`](calloc.md)\
[`malloc`](malloc.md)\
[`realloc`](realloc.md)\
[`_resetstkoflw`](resetstkoflw.md)\
[`_malloca`](malloca.md)
