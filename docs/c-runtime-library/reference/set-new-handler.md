---
description: "Learn more about: _set_new_handler"
title: "_set_new_handler"
ms.date: 05/21/2022
api_name: ["_set_new_handler", "_o__set_new_handler"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-runtime-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_set_new_handler", "set_new_handler"]
helpviewer_keywords: ["_set_new_handler function", "set_new_handler function", "error handling", "transferring control to error handler"]
ms.assetid: 1d1781b6-5cf8-486a-b430-f365e0bb023f
---
# `_set_new_handler`

Transfers control to your error-handling mechanism if the **`new`** operator fails to allocate memory. The Microsoft C++ compiler uses this function to implement [`std::set_new_handler`](../../standard-library/new-functions.md#set_new_handler) in the standard library.

## Syntax

```cpp
_PNH _set_new_handler( _PNH pNewHandler );
```

### Parameters

*`pNewHandler`*\
Pointer to the application-supplied memory handling function. An argument of 0 or `nullptr` causes the new handler to be removed.

## Return value

Returns a pointer to the previous exception handling function registered by **`_set_new_handler`**, so that the previous function can be restored later. If no previous function has been set, the return value can be used to restore the default behavior. This value can be `nullptr` or 0.

## Remarks

The C++ **`_set_new_handler`** function specifies an exception-handling function that gains control if the **`new`** operator fails to allocate memory. If **`new`** fails, the run-time system automatically calls the exception-handling function that was passed as an argument to **`_set_new_handler`**. `_PNH`, defined in `<new.h>`, is a pointer to a function that returns type **`int`** and takes an argument of type **`size_t`**. Use **`size_t`** to specify the amount of space to be allocated.

There's no default handler.

**`_set_new_handler`** is essentially a garbage-collection scheme. The run-time system retries allocation each time your function returns a nonzero value and fails if your function returns 0.

An occurrence of the **`_set_new_handler`** function in a program registers the exception-handling function specified in the argument list with the run-time system:

```cpp
// _set_new_handler1.cpp
#include <new.h>

int handle_program_memory_depletion( size_t )
{
   // Your code
}

int main( void )
{
   _set_new_handler( handle_program_memory_depletion );
   int *pi = new int[BIG_NUMBER];
}
```

By default, the **`_set_new_handler`** function's global state is scoped to the application. To change it, see [Global state in the CRT](../global-state.md).

You can save the function address that was last passed to the **`_set_new_handler`** function and reinstate it later:

```cpp
   _PNH old_handler = _set_new_handler( my_handler );
   // Code that requires my_handler
   // . . .
   _set_new_handler( old_handler )
   // Code that requires old_handler
   // . . .
```

The C++ [`_set_new_mode`](set-new-mode.md) function sets the new handler mode for [`malloc`](malloc.md). The new handler mode indicates whether, on failure, **`malloc`** is to call the new handler routine as set by **`_set_new_handler`**. By default, **`malloc`** doesn't call the new handler routine on failure to allocate memory. You can override this default behavior so that, when **`malloc`** fails to allocate memory, **`malloc`** calls the new handler routine in the same way that the **`new`** operator does when it fails for the same reason. To override the default, call `_set_new_mode(1);` early in your program or link with *`newmode.obj`*.

If a user-defined `operator new` is provided, the new handler functions aren't automatically called on failure.

For more information, see [`new`](../../cpp/new-operator-cpp.md) and [`delete`](../../cpp/delete-operator-cpp.md) in the *C++ Language Reference*.

There's a single **`_set_new_handler`** handler for all dynamically linked DLLs or executables in a single process. Even if you call **`_set_new_handler`**, your handler might be replaced by another. Or, your new handler may replace a handler set by another DLL or executable in your process.

## Requirements

| Function | Required header |
|--|--|
| **`_set_new_handler`** | `<new.h>` |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

In this example, when the allocation fails, control is transferred to `MyNewHandler`. The argument passed to `MyNewHandler` is the number of bytes requested. The value returned from `MyNewHandler` is a flag indicating whether allocation should be retried: a nonzero value indicates that allocation should be retried, and a zero value indicates that allocation has failed.

```cpp
// crt_set_new_handler.cpp
// Build for x86. 
// WARNING: This code intentionally allocates memory until an allocation fails.
// Running this code can cause your system to become non-responsive.
#include <iostream>
#include <new>
#include <new.h>

static const int Big_number = 0x03FFFFFF;

struct MemoryHog {
    int pork[Big_number];
};

class MemoryReserve {
    MemoryHog* reserved = nullptr;
public:
    MemoryReserve() {
        reserved = new MemoryHog();
    }
    ~MemoryReserve() noexcept {
        if (reserved != nullptr)
            delete reserved;
    }
    bool free_reserve() noexcept {
        if (reserved != nullptr) {
            delete reserved;
            reserved = nullptr;
            return true; // return true if memory freed
        }
        return false; // reserved memory exhausted.
    }
};

// Global singleton for a MemoryReserve object
static MemoryReserve reserve{};

// Define a function to be called if new fails to allocate memory.
int MyNewHandler(size_t /* unused */)
{
    // Call a function to recover some heap space. Return 1 on success.
    if (reserve.free_reserve()) {
        std::cerr << "MyNewHandler: Released reserved memory.\n";
        return 1;
    }
    std::cerr << "MyNewHandler: Reserved memory exhausted.\n";
    return 0;
}

static const int max_depth = 16; // recursion depth limiter
static int depth = 0;

void RecurseAlloc() {
    MemoryHog* piggy = new MemoryHog{};
    if (++depth < max_depth) // Recurse until memory exhausted or max_depth
        RecurseAlloc();
    depth--;
    delete piggy;
    return;
}

int main()
{
    try {
        _set_new_handler(MyNewHandler); // Set handler for new.
        RecurseAlloc();
    }
    catch (std::bad_alloc& ex) {
        std::cerr << "bad_alloc caught: " << ex.what() << '\n';
    }
}

/* Output:
MyNewHandler: Released reserved memory.
MyNewHandler: Reserved memory exhausted.
bad_alloc caught: bad allocation
*/
```

## See also

[Memory allocation](../memory-allocation.md)\
[`calloc`](calloc.md)\
[`free`](free.md)\
[`realloc`](realloc.md)
