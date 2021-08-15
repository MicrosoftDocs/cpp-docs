---
description: "Learn more about: _set_new_handler"
title: "_set_new_handler"
ms.date: "4/2/2020"
api_name: ["_set_new_handler", "_o__set_new_handler"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-runtime-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_set_new_handler", "set_new_handler"]
helpviewer_keywords: ["_set_new_handler function", "set_new_handler function", "error handling", "transferring control to error handler"]
ms.assetid: 1d1781b6-5cf8-486a-b430-f365e0bb023f
---
# _set_new_handler

Transfers control to your error-handling mechanism if the **`new`** operator fails to allocate memory.

## Syntax

```cpp
_PNH _set_new_handler( _PNH pNewHandler );
```

### Parameters

*pNewHandler*<br/>
Pointer to the application-supplied memory handling function. An argument of 0 causes the new handler to be removed.

## Return Value

Returns a pointer to the previous exception handling function registered by **_set_new_handler**, so that the previous function can be restored later. If no previous function has been set, the return value can be used to restore the default behavior; this value can be **NULL**.

## Remarks

The C++ **_set_new_handler** function specifies an exception-handling function that gains control if the **`new`** operator fails to allocate memory. If **`new`** fails, the run-time system automatically calls the exception-handling function that was passed as an argument to **_set_new_handler**. **_PNH**, defined in New.h, is a pointer to a function that returns type **`int`** and takes an argument of type **size_t**. Use **size_t** to specify the amount of space to be allocated.

There is no default handler.

**_set_new_handler** is essentially a garbage-collection scheme. The run-time system retries allocation each time your function returns a nonzero value and fails if your function returns 0.

An occurrence of the **_set_new_handler** function in a program registers the exception-handling function specified in the argument list with the run-time system:

```cpp
// set_new_handler1.cpp
By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

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

You can save the function address that was last passed to the **_set_new_handler** function and reinstate it later:

```cpp
   _PNH old_handler = _set_new_handler( my_handler );
   // Code that requires my_handler
   // . . .
   _set_new_handler( old_handler )
   // Code that requires old_handler
   // . . .
```

The C++ [_set_new_mode](set-new-mode.md) function sets the new handler mode for [malloc](malloc.md). The new handler mode indicates whether, on failure, **malloc** is to call the new handler routine as set by **_set_new_handler**. By default, **malloc** does not call the new handler routine on failure to allocate memory. You can override this default behavior so that, when **malloc** fails to allocate memory, **malloc** calls the new handler routine in the same way that the **`new`** operator does when it fails for the same reason. To override the default, call:

```cpp
_set_new_mode(1);
```

early in your program or link with Newmode.obj.

If a user-defined `operator new` is provided, the new handler functions are not automatically called on failure.

For more information, see [new](../../cpp/new-operator-cpp.md) and [delete](../../cpp/delete-operator-cpp.md) in the *C++ Language Reference*.

There is a single **_set_new_handler** handler for all dynamically linked DLLs or executables; even if you call **_set_new_handler** your handler might be replaced by another or that you are replacing a handler set by another DLL or executable.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_set_new_handler**|\<new.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

In this example, when the allocation fails, control is transferred to MyNewHandler. The argument passed to MyNewHandler is the number of bytes requested. The value returned from MyNewHandler is a flag indicating whether allocation should be retried: a nonzero value indicates that allocation should be retried, and a zero value indicates that allocation has failed.

```cpp
// crt_set_new_handler.cpp
// compile with: /c
#include <stdio.h>
#include <new.h>
#define BIG_NUMBER 0x1fffffff

int coalesced = 0;

int CoalesceHeap()
{
   coalesced = 1;  // Flag RecurseAlloc to stop
   // do some work to free memory
   return 0;
}
// Define a function to be called if new fails to allocate memory.
int MyNewHandler( size_t size )
{
   printf("Allocation failed. Coalescing heap.\n");

   // Call a function to recover some heap space.
   return CoalesceHeap();
}

int RecurseAlloc() {
   int *pi = new int[BIG_NUMBER];
   if (!coalesced)
      RecurseAlloc();
   return 0;
}

int main()
{
   // Set the failure handler for new to be MyNewHandler.
   _set_new_handler( MyNewHandler );
   RecurseAlloc();
}
```

```Output
Allocation failed. Coalescing heap.

This application has requested the Runtime to terminate it in an unusual way.
Please contact the application's support team for more information.
```

## See also

[Memory Allocation](../../c-runtime-library/memory-allocation.md)<br/>
[calloc](calloc.md)<br/>
[free](free.md)<br/>
[realloc](realloc.md)<br/>
