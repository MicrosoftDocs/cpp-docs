---
title: CRT debugging techniques
description: There are various techniques you can use to debug a program that uses the C run-time (CRT) library. Use this article and its links to learn about such techniques. 
ms.custom: SEO-VS-2020
ms.date: 02/03/2023
f1_keywords:
  - "c.runtime.debugging"
helpviewer_keywords:
  - "debugging [CRT]"
  - "CRT, debugging"
  - "debugging [C++], CRT debug support"
---
# CRT debugging techniques

When you debug a program that uses the C run-time library, these debugging techniques might be useful.

## CRT debug library use

The C runtime (CRT) library provides extensive debugging support. To use one of the CRT debug libraries, you must link with [`/DEBUG`](/cpp/build/reference/debug-generate-debug-info) and compile with [`/MDd`, `/MTd`, or `/LDd`](../build/reference/md-mt-ld-use-run-time-library.md).

The main definitions and macros for CRT debugging can be found in the`<crtdbg.h>` header file.

The functions in the CRT debug libraries are compiled with debug information ([/Z7, /Zd, /Zi, /ZI (Debug Information Format)](../build/reference/z7-zi-zi-debug-information-format.md)) and without optimization. Some functions contain assertions to verify parameters that are passed to them, and source code is provided. With this source code, you can step into CRT functions to confirm that the functions are working as you expect and check for bad parameters or memory states. (Some CRT technology is proprietary and doesn't provide source code for exception handling, floating point, and a few other routines.)

For more information on the various run-time libraries you can use, see [C Run-Time Libraries](./crt-library-features.md).

## Macros for reporting

For debugging, you can use the `_RPTn` and `_RPTFn` macros, defined in`<crtdbg.h>`, to replace the use of `printf` statements. You don't need to enclose them in `#ifdef` directives, because they automatically disappear in your release build when `_DEBUG` isn't defined.

| Macro | Description |
|---|---|
| `_RPT0`, `_RPT1`, `_RPT2`, `_RPT3`, `_RPT4` | Outputs a message string and zero to four arguments. For `_RPT1` through `_RPT4`, the message string serves as a printf-style formatting string for the arguments. |
| `_RPTF0`, `_RPTF1`, `_RPTF2`, `_RPTF3`, `_RPTF4` | Same as `_RPTn`, but these macros also output the file name and line number where the macro is located. |

Consider the following example:

```cpp
#ifdef _DEBUG
    if ( someVar > MAX_SOMEVAR )
        printf( "OVERFLOW! In NameOfThisFunc( ),
               someVar=%d, otherVar=%d.\n",
               someVar, otherVar );
#endif
```

This code outputs the values of `someVar` and `otherVar` to `stdout`. You can use the following call to `_RPTF2` to report these same values and, additionally, the file name and line number:

```cpp
if (someVar > MAX_SOMEVAR) _RPTF2(_CRT_WARN, "In NameOfThisFunc( ), someVar= %d, otherVar= %d\n", someVar, otherVar );
```

Some applications may need debug reporting that the macros supplied with the C run-time library don't provide. For these cases, you can write a macro designed specifically to fit your own requirements. In one of your header files, for example, you could include code like the following to define a macro called `ALERT_IF2`:

```cpp
#ifndef _DEBUG                  /* For RELEASE builds */
#define  ALERT_IF2(expr, msg, arg1, arg2)  do {} while (0)
#else                           /* For DEBUG builds   */
#define  ALERT_IF2(expr, msg, arg1, arg2) \
    do { \
        if ((expr) && \
            (1 == _CrtDbgReport(_CRT_ERROR, \
                __FILE__, __LINE__, msg, arg1, arg2))) \
            _CrtDbgBreak( ); \
    } while (0)
#endif
```

One call to `ALERT_IF2` could do all the functions of the `printf` code:

```cpp
ALERT_IF2(someVar > MAX_SOMEVAR, "OVERFLOW! In NameOfThisFunc( ),
someVar=%d, otherVar=%d.\n", someVar, otherVar );
```

You can easily change a custom macro to report more or less information to different destinations. This approach is useful as your debugging requirements evolve.

## Debug hook function writing

You can write several kinds of custom debug hook functions that allow you to insert your code into some predefined points inside the debugger's normal processing.

### Client block hook functions

If you want to validate or report the contents of the data stored in `_CLIENT_BLOCK` blocks, you can write a function specifically for this purpose. The function that you write must have a prototype similar to the following, as defined in`<crtdbg.h>`:

```cpp
void YourClientDump(void *, size_t)
```

In other words, your hook function should accept a `void` pointer to the beginning of the allocation block, together with a `size_t` type value indicating the size of the allocation, and return `void`. Otherwise, its contents are up to you.

Once you've installed your hook function using [_CrtSetDumpClient](./reference/crtsetdumpclient.md), it will be called every time a `_CLIENT_BLOCK` block is dumped. You can then use [_CrtReportBlockType](./reference/crtreportblocktype.md) to get information on the type or subtype of dumped blocks.

The pointer to your function that you pass to `_CrtSetDumpClient` is of type `_CRT_DUMP_CLIENT`, as defined in`<crtdbg.h>`:

```cpp
typedef void (__cdecl *_CRT_DUMP_CLIENT)
   (void *, size_t);
```

### Allocation hook functions

An allocation hook function, installed using [`_CrtSetAllocHook`](./reference/crtsetallochook.md), is called every time memory is allocated, reallocated, or freed. You can use this type of hook for many different purposes. Use it to test how an application handles insufficient memory situations, such as to examine allocation patterns, or log allocation information for later analysis.

> [!NOTE]
> Be aware of the restriction about using C runtime library functions in an allocation hook function, described in [Allocation hooks and crt memory allocations](#allocation-hooks-and-crt-memory-allocations).

An allocation hook function should have a prototype like the following example:

```cpp
int YourAllocHook(int nAllocType, void *pvData,
        size_t nSize, int nBlockUse, long lRequest,
        const unsigned char * szFileName, int nLine )
```

The pointer that you pass to [`_CrtSetAllocHook`](./reference/crtsetallochook.md) is of type `_CRT_ALLOC_HOOK`, as defined in`<crtdbg.h>`:

```cpp
typedef int (__cdecl * _CRT_ALLOC_HOOK)
    (int, void *, size_t, int, long, const unsigned char *, int);
```

When the run-time library calls your hook, the *`nAllocType`* argument indicates what allocation operation is about to be made (`_HOOK_ALLOC`, `_HOOK_REALLOC`, or `_HOOK_FREE`). In a free or in a reallocation, `pvData` has a pointer to the user article of the block about to be freed. However for an allocation, this pointer is null, because the allocation hasn't occurred. The remaining arguments contain the size of the allocation, its block type, a sequential request number, and a pointer to the file name. If available, the arguments also include the line number in which the allocation was made. After the hook function performs whatever analysis and other tasks its author wants, it must return either `TRUE`, indicating that the allocation operation can continue, or `FALSE`, indicating that the operation should fail. A simple hook of this type might check the amount of memory allocated so far, and return `FALSE` if that amount exceeded a small limit. The application would then experience the kind of allocation errors that would normally occur only when available memory was low. More complex hooks might keep track of allocation patterns, analyze memory use, or report when specific situations occur.

### Allocation hooks and CRT memory allocations

An important restriction on allocation hook functions is that they must explicitly ignore `_CRT_BLOCK` blocks. These blocks are the memory allocations made internally by C run-time library functions if they make any calls to C run-time library functions that allocate internal memory. You can ignore `_CRT_BLOCK` blocks by including the following code at the beginning of your allocation hook function:

```cpp
if ( nBlockUse == _CRT_BLOCK )
    return( TRUE );
```

If your allocation hook doesn't ignore `_CRT_BLOCK` blocks, then any C run-time library function called in your hook can trap the program in an endless loop. For example, `printf` makes an internal allocation. If your hook code calls `printf`, then the resulting allocation will cause your hook to be called again, which will call `printf` again, and so on, until the stack overflows. If you need to report `_CRT_BLOCK` allocation operations, one way to circumvent this restriction is to use Windows API functions, rather than C run-time functions, for formatting and output. Because the Windows APIs don't use the C run-time library heap, they won't trap your allocation hook in an endless loop.

If you examine the run-time library source files, you'll see that the default allocation hook function, `_CrtDefaultAllocHook` (which simply returns `TRUE`), is located in a separate file of its own, *`debug_heap_hook.cpp`*. If you want your allocation hook to be called even for the allocations made by the run-time startup code that is executed before your application's `main` function, you can replace this default function with one of your own, instead of using [`_CrtSetAllocHook`](./reference/crtsetallochook.md).

### Report hook functions

A report hook function, installed using [`_CrtSetReportHook`](./reference/crtsetreporthook.md), is called every time [`_CrtDbgReport`](./reference/crtdbgreport-crtdbgreportw.md) generates a debug report. You can use it, among other things, for filtering reports to focus on specific types of allocations. A report hook function should have a prototype like this example:

```cpp
int AppReportHook(int nRptType, char *szMsg, int *retVal);
```

The pointer that you pass to `_CrtSetReportHook` is of type `_CRT_REPORT_HOOK`, as defined in `<crtdbg.h>`:

```cpp
typedef int (__cdecl *_CRT_REPORT_HOOK)(int, char *, int *);
```

When the run-time library calls your hook function, the *`nRptType`* argument contains the category of the report (`_CRT_WARN`, `_CRT_ERROR`, or `_CRT_ASSERT`), *`szMsg`* contains a pointer to a fully assembled report message string, and *`retVal`* specifies whether `_CrtDbgReport` should continue normal execution after generating the report or start the debugger. (A *`retVal`* value of zero continues execution, a value of 1 starts the debugger.)

If the hook handles the message in question completely, so that no further reporting is required, it should return `TRUE`. If it returns `FALSE`, `_CrtDbgReport` will report the message normally.

## In this section

- [Debug versions of heap allocation functions](./debug-versions-of-heap-allocation-functions.md)

  Discusses the special Debug versions of the heap allocation functions, including: how the CRT maps calls, the benefits of calling them explicitly, how to avoid conversion, tracking the separate types of allocations in client blocks, and the results of not defining `_DEBUG`.

- [CRT debug heap details](./crt-debug-heap-details.md)

  Describes memory management and the debug heap, the types of blocks on the debug heap, heap state reporting functions, and how to use the debug heap to track allocation requests.

- [Find memory leaks using the CRT library](./find-memory-leaks-using-the-crt-library.md)

  Covers techniques for detecting and isolating memory leaks by using the debugger and the C Run-Time Library.

## See also

- [Debugging Native Code](/visualstudio/debugger/debugging-native-code.md)
- [Debugger Security](/visualstudio/debugger/debugger-security.md)
