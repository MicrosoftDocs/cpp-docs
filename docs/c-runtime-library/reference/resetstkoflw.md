---
description: "Learn more about: _resetstkoflw"
title: "_resetstkoflw"
ms.date: "4/2/2020"
api_name: ["_resetstkoflw", "_o__resetstkoflw"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["resetstkoflw", "_resetstkoflw"]
helpviewer_keywords: ["resetstkoflw function", "stack overflow", "stack, recovering", "_resetstkoflw function"]
ms.assetid: 319529cd-4306-4d22-810b-2063f3ad9e14
---
# _resetstkoflw

Recovers from stack overflow.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
int _resetstkoflw( void );
```

## Return Value

Nonzero if the function succeeds, zero if it fails.

## Remarks

The **_resetstkoflw** function recovers from a stack overflow condition, allowing a program to continue instead of failing with a fatal exception error. If the **_resetstkoflw** function is not called, there are no guard pages after the previous exception. The next time that there is a stack overflow, there are no exceptions at all and the process terminates without warning.

If a thread in an application causes an **EXCEPTION_STACK_OVERFLOW** exception, the thread has left its stack in a damaged state. This is in contrast to other exceptions such as **EXCEPTION_ACCESS_VIOLATION** or **EXCEPTION_INT_DIVIDE_BY_ZERO**, where the stack is not damaged. The stack is set to an arbitrarily small value when the program is first loaded. The stack then grows on demand to meet the needs of the thread. This is implemented by placing a page with PAGE_GUARD access at the end of the current stack. For more information, see [Creating Guard Pages](/windows/win32/Memory/creating-guard-pages).

When the code causes the stack pointer to point to an address on this page, an exception occurs and the system does the following three things:

- Removes the PAGE_GUARD protection on the guard page so that the thread can read and write data to the memory.

- Allocates a new guard page that is located one page below the last one.

- Reruns the instruction that raised the exception.

In this way, the system can increase the size of the stack for the thread automatically. Each thread in a process has a maximum stack size. The stack size is set at compile time by the [/STACK (Stack Allocations)](../../build/reference/stack-stack-allocations.md), or by the [STACKSIZE](../../build/reference/stacksize.md) statement in the .def file for the project.

When this maximum stack size is exceeded, the system does the following three things:

- Removes the PAGE_GUARD protection on the guard page, as previously described.

- Tries to allocate a new guard page below the last one. However, this fails because the maximum stack size has been exceeded.

- Raises an exception so that the thread can handle it in the exception block.

Note that, at that point, the stack no longer has a guard page. The next time that the program grows the stack all the way to the end, where there should be a guard page, the program writes beyond the end of the stack and causes an access violation.

Call **_resetstkoflw** to restore the guard page whenever recovery is done after a stack overflow exception. This function can be called from inside the main body of an **`__except`** block or outside an **`__except`** block. However, there are some restrictions on when it should be used. **_resetstkoflw** should never be called from:

- A filter expression.

- A filter function.

- A function called from a filter function.

- A **`catch`** block.

- A **`__finally`** block.

At these points, the stack is not yet sufficiently unwound.

Stack overflow exceptions are generated as structured exceptions, not C++ exceptions, so **_resetstkoflw** is not useful in an ordinary **`catch`** block because it will not catch a stack overflow exception. However, if [_set_se_translator](set-se-translator.md) is used to implement a structured exception translator that throws C++ exceptions (as in the second example), a stack overflow exception results in a C++ exception that can be handled by a C++ catch block.

It is not safe to call **_resetstkoflw** in a C++ catch block that is reached from an exception thrown by the structured exception translator function. In this case, the stack space is not freed and the stack pointer is not reset until outside the catch block, even though destructors have been called for any destructible objects before the catch block. This function should not be called until the stack space is freed and the stack pointer has been reset. Therefore, it should be called only after exiting the catch block. As little stack space as possible should be used in the catch block because a stack overflow that occurs in the catch block that is itself attempting to recover from a previous stack overflow is not recoverable and can cause the program to stop responding as the overflow in the catch block triggers an exception that itself is handled by the same catch block.

There are situations where **_resetstkoflw** can fail even if used in a correct location, such as within an **`__except`** block. If, even after unwinding the stack, there is still not enough stack space left to execute **_resetstkoflw** without writing into the last page of the stack, **_resetstkoflw** fails to reset the last page of the stack as the guard page and returns 0, indicating failure. Therefore, safe usage of this function should include checking the return value instead of assuming that the stack is safe to use.

Structured exception handling will not catch a **STATUS_STACK_OVERFLOW** exception when the application is compiled with **/clr** (see [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md)).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_resetstkoflw**|\<malloc.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

**Libraries:** All versions of the [CRT Library Features](../../c-runtime-library/crt-library-features.md).

## Example

The following example shows the recommended usage of the **_resetstkoflw** function.

```C
// crt_resetstkoflw.c
// Launch program with and without arguments to observe
// the difference made by calling _resetstkoflw.

#include <malloc.h>
#include <stdio.h>
#include <windows.h>

void recursive(int recurse)
{
   _alloca(2000);
   if (recurse)
      recursive(recurse);
}

// Filter for the stack overflow exception.
// This function traps the stack overflow exception, but passes
// all other exceptions through.
int stack_overflow_exception_filter(int exception_code)
{
   if (exception_code == EXCEPTION_STACK_OVERFLOW)
   {
       // Do not call _resetstkoflw here, because
       // at this point, the stack is not yet unwound.
       // Instead, signal that the handler (the __except block)
       // is to be executed.
       return EXCEPTION_EXECUTE_HANDLER;
   }
   else
       return EXCEPTION_CONTINUE_SEARCH;
}

int main(int ac)
{
   int i = 0;
   int recurse = 1, result = 0;

   for (i = 0 ; i < 10 ; i++)
   {
      printf("loop #%d\n", i + 1);
      __try
      {
         recursive(recurse);

      }

      __except(stack_overflow_exception_filter(GetExceptionCode()))
      {
         // Here, it is safe to reset the stack.

         if (ac >= 2)
         {
            puts("resetting stack overflow");
            result = _resetstkoflw();
         }
      }

      // Terminate if _resetstkoflw failed (returned 0)
      if (!result)
         return 3;
   }

   return 0;
}
```

Sample output with no program arguments:

```Output
loop #1
```

The program stops responding without executing further iterations.

With program arguments:

```Output
loop #1
resetting stack overflow
loop #2
resetting stack overflow
loop #3
resetting stack overflow
loop #4
resetting stack overflow
loop #5
resetting stack overflow
loop #6
resetting stack overflow
loop #7
resetting stack overflow
loop #8
resetting stack overflow
loop #9
resetting stack overflow
loop #10
resetting stack overflow
```

### Description

The following example shows the recommended use of **_resetstkoflw** in a program where structured exceptions are converted to C++ exceptions.

### Code

```cpp
// crt_resetstkoflw2.cpp
// compile with: /EHa
// _set_se_translator requires the use of /EHa
#include <malloc.h>
#include <stdio.h>
#include <windows.h>
#include <eh.h>

class Exception { };

class StackOverflowException : Exception { };

// Because the overflow is deliberate, disable the warning that
// this function will cause a stack overflow.
#pragma warning (disable: 4717)
void CauseStackOverflow (int i)
{
    // Overflow the stack by allocating a large stack-based array
    // in a recursive function.
    int a[10000];
    printf("%d ", i);
    CauseStackOverflow (i + 1);
}

void __cdecl SEHTranslator (unsigned int code, _EXCEPTION_POINTERS*)
{
    // For stack overflow exceptions, throw our own C++
    // exception object.
    // For all other exceptions, throw a generic exception object.
    // Use minimal stack space in this function.
    // Do not call _resetstkoflw in this function.

    if (code == EXCEPTION_STACK_OVERFLOW)
        throw StackOverflowException ( );
    else
        throw Exception( );
}

int main ( )
{
    bool stack_reset = false;
    bool result = false;

    // Set up a function to handle all structured exceptions,
    // including stack overflow exceptions.
    _set_se_translator (SEHTranslator);

    try
    {
        CauseStackOverflow (0);
    }
    catch (StackOverflowException except)
    {
        // Use minimal stack space here.
        // Do not call _resetstkoflw here.
        printf("\nStack overflow!\n");
        stack_reset = true;
    }
    catch (Exception except)
    {
        // Do not call _resetstkoflw here.
        printf("\nUnknown Exception!\n");
    }
    if (stack_reset)
    {
        result = _resetstkoflw();
        // If stack reset failed, terminate the application.
        if (result == 0)
            exit(1);
    }

    void* pv = _alloca(100000);
    printf("Recovered from stack overflow and allocated 100,000 bytes"
           " using _alloca.");

    return 0;
}
```

```Output
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24
Stack overflow!
Recovered from stack overflow and allocated 100,000 bytes using _alloca.
```

## See also

[_alloca](alloca.md)<br/>
