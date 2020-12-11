---
description: "Learn more about: Debug routines"
title: "Debug routines"
ms.date: "04/10/2018"
f1_keywords: ["c.debug"]
helpviewer_keywords: ["debugging [CRT], using macros", "macros, debugging with", "debug routines", "debug macros", "debugging [CRT], runtime routines"]
ms.assetid: cb4d2664-10f3-42f7-a516-595558075471
---
# Debug routines

The debug version of the C runtime library supplies many diagnostic services that make debugging programs easier and allow developers to:

- Step directly into run-time functions during debugging

- Resolve assertions, errors, and exceptions

- Trace heap allocations and prevent memory leaks

- Report debug messages to the user

## Debug versions of the C runtime library routines

To use these routines, the [_DEBUG](../c-runtime-library/debug.md) flag must be defined. All of these routines do nothing in a retail build of an application. For more information on how to use the new debug routines, see [CRT Debugging Techniques](/visualstudio/debugger/crt-debugging-techniques).

| Routine | Use |
|--|--|
| [`_ASSERT`](../c-runtime-library/reference/assert-asserte-assert-expr-macros.md) | Evaluate an expression and generates a debug report when the result is FALSE |
| [`_ASSERTE`](../c-runtime-library/reference/assert-asserte-assert-expr-macros.md) | Similar to **`_ASSERT`**, but includes the failed expression in the generated report |
| [`_CrtCheckMemory`](../c-runtime-library/reference/crtcheckmemory.md) | Confirm the integrity of the memory blocks allocated on the debug heap |
| [`_CrtDbgBreak`](../c-runtime-library/reference/crtdbgbreak.md) | Sets a break point. |
| [`_CrtDbgReport`, `_CrtDbgReportW`](../c-runtime-library/reference/crtdbgreport-crtdbgreportw.md) | Generate a debug report with a user message and send the report to three possible destinations |
| [`_CrtDoForAllClientObjects`](../c-runtime-library/reference/crtdoforallclientobjects.md) | Call an application-supplied function for all `_CLIENT_BLOCK` types on the heap |
| [`_CrtDumpMemoryLeaks`](../c-runtime-library/reference/crtdumpmemoryleaks.md) | Dump all of the memory blocks on the debug heap when a significant memory leak has occurred |
| [`_CrtIsMemoryBlock`](../c-runtime-library/reference/crtismemoryblock.md) | Verify that a specified memory block is located within the local heap and that it has a valid debug heap block type identifier |
| [`_CrtIsValidHeapPointer`](../c-runtime-library/reference/crtisvalidheappointer.md) | Verifies that a specified pointer is in the local heap |
| [`_CrtIsValidPointer`](../c-runtime-library/reference/crtisvalidpointer.md) | Verify that a specified memory range is valid for reading and writing |
| [`_CrtMemCheckpoint`](../c-runtime-library/reference/crtmemcheckpoint.md) | Obtain the current state of the debug heap and store it in an application-supplied `_CrtMemState` structure |
| [`_CrtMemDifference`](../c-runtime-library/reference/crtmemdifference.md) | Compare two memory states for significant differences and return the results |
| [`_CrtMemDumpAllObjectsSince`](../c-runtime-library/reference/crtmemdumpallobjectssince.md) | Dump information about objects on the heap since a specified checkpoint was taken or from the start of program execution |
| [`_CrtMemDumpStatistics`](../c-runtime-library/reference/crtmemdumpstatistics.md) | Dump the debug header information for a specified memory state in a user-readable form |
| [`_CrtReportBlockType`](../c-runtime-library/reference/crtreportblocktype.md) | Returns the block type/subtype associated with a given debug heap block pointer. |
| [`_CrtSetAllocHook`](../c-runtime-library/reference/crtsetallochook.md) | Install a client-defined allocation function by hooking it into the C run-time debug memory allocation process |
| [`_CrtSetBreakAlloc`](../c-runtime-library/reference/crtsetbreakalloc.md) | Set a breakpoint on a specified object allocation order number |
| [`_CrtSetDbgFlag`](../c-runtime-library/reference/crtsetdbgflag.md) | Retrieve or modify the state of the `_crtDbgFlag` flag to control the allocation behavior of the debug heap manager |
| [`_CrtSetDumpClient`](../c-runtime-library/reference/crtsetdumpclient.md) | Install an application-defined function that is called every time a debug dump function is called to dump `_CLIENT_BLOCK` type memory blocks |
| [`_CrtSetReportFile`](../c-runtime-library/reference/crtsetreportfile.md) | Identify the file or stream to be used as a destination for a specific report type by `_CrtDbgReport` |
| [`_CrtSetReportHook`](../c-runtime-library/reference/crtsetreporthook.md) | Install a client-defined reporting function by hooking it into the C run-time debug reporting process |
| [`_CrtSetReportHook2`, `_CrtSetReportHookW2`](../c-runtime-library/reference/crtsetreporthook2-crtsetreporthookw2.md) | Installs or uninstalls a client-defined reporting function by hooking it into the C run-time debug reporting process. |
| [`_CrtSetReportMode`](../c-runtime-library/reference/crtsetreportmode.md) | Specify the general destination(s) for a specific report type generated by `_CrtDbgReport` |
| [_RPT&#91;0,1,2,3,4&#93;](../c-runtime-library/reference/rpt-rptf-rptw-rptfw-macros.md) | Track the application's progress by generating a debug report by calling `_CrtDbgReport` with a format string and a variable number of arguments. Provides no source file and line number information. |
| [_RPTF&#91;0,1,2,3,4&#93;](../c-runtime-library/reference/rpt-rptf-rptw-rptfw-macros.md) | Similar to the `_RPTn` macros, but provides the source file name and line number where the report request originated |
| [`_calloc_dbg`](../c-runtime-library/reference/calloc-dbg.md) | Allocate a specified number of memory blocks on the heap with additional space for a debugging header and overwrite buffers |
| [`_expand_dbg`](../c-runtime-library/reference/expand-dbg.md) | Resize a specified block of memory on the heap by expanding or contracting the block |
| [`_free_dbg`](../c-runtime-library/reference/free-dbg.md) | Free a block of memory on the heap |
| [`_fullpath_dbg`, `_wfullpath_dbg`](../c-runtime-library/reference/fullpath-dbg-wfullpath-dbg.md) | Create an absolute or full path name for the specified relative path name, using [`_malloc_dbg`](../c-runtime-library/reference/malloc-dbg.md) to allocate memory. |
| [`_getcwd_dbg`, `_wgetcwd_dbg`](../c-runtime-library/reference/getcwd-dbg-wgetcwd-dbg.md) | Get the current working directory, using [`_malloc_dbg`](../c-runtime-library/reference/malloc-dbg.md) to allocate memory. |
| [`_malloc_dbg`](../c-runtime-library/reference/malloc-dbg.md) | Allocate a block of memory on the heap with additional space for a debugging header and overwrite buffers |
| [`_msize_dbg`](../c-runtime-library/reference/msize-dbg.md) | Calculate the size of a block of memory on the heap |
| [`_realloc_dbg`](../c-runtime-library/reference/realloc-dbg.md) | Reallocate a specified block of memory on the heap by moving and/or resizing the block |
| [`_strdup_dbg`, `_wcsdup_dbg`](../c-runtime-library/reference/strdup-dbg-wcsdup-dbg.md) | Duplicates a string, using [`_malloc_dbg`](../c-runtime-library/reference/malloc-dbg.md) to allocate memory. |
| [`_tempnam_dbg`, `_wtempnam_dbg`](../c-runtime-library/reference/tempnam-dbg-wtempnam-dbg.md) | Generate names you can use to create temporary files, using [`_malloc_dbg`](../c-runtime-library/reference/malloc-dbg.md) to allocate memory. |

## C runtime routines that are not available in source code form

The debugger can be used to step through the source code for most of the C runtime routines during the debugging process. However, Microsoft considers some technology to be proprietary and, therefore, does not provide the source code for a subset of these routines. Most of these routines belong to either the exception handling or floating-point processing groups, but a few others are included as well. The following table lists these routines.

:::row:::
   :::column span="":::
      [`acos`](../c-runtime-library/reference/acos-acosf-acosl.md)\
      [`acosh`](../c-runtime-library/reference/acosh-acoshf-acoshl.md)\
      [`asin`](../c-runtime-library/reference/asin-asinf-asinl.md)\
      [`asinh`](../c-runtime-library/reference/asinh-asinhf-asinhl.md)\
      [`atan`, `atan2`](../c-runtime-library/reference/atan-atanf-atanl-atan2-atan2f-atan2l.md)\
      [`atanh`](../c-runtime-library/reference/atanh-atanhf-atanhl.md)\
      [`Bessel functions`](../c-runtime-library/reference/bessel-functions-j0-j1-jn-y0-y1-yn.md)\
      [`_cabs`](../c-runtime-library/reference/cabs.md)\
      [`ceil`](../c-runtime-library/reference/ceil-ceilf-ceill.md)\
      [`_chgsign`](../c-runtime-library/reference/chgsign-chgsignf-chgsignl.md)\
      [`_clear87`, `_clearfp`](../c-runtime-library/reference/clear87-clearfp.md)\
      [`_control87`, `_controlfp`](../c-runtime-library/reference/control87-controlfp-control87-2.md)
   :::column-end:::
   :::column span="":::
      [`copysign`](../c-runtime-library/reference/copysign-copysignf-copysignl-copysign-copysignf-copysignl.md)\
      [`cos`](../c-runtime-library/reference/cos-cosf-cosl.md)\
      [`cosh`](../c-runtime-library/reference/cosh-coshf-coshl.md)\
      [`Exp`](../c-runtime-library/reference/exp-expf.md)\
      [`fabs`](../c-runtime-library/reference/fabs-fabsf-fabsl.md)\
      [`_finite`](../c-runtime-library/reference/finite-finitef.md)\
      [`floor`](../c-runtime-library/reference/floor-floorf-floorl.md)\
      [`fmod`](../c-runtime-library/reference/fmod-fmodf.md)\
      [`_fpclass`](../c-runtime-library/reference/fpclass-fpclassf.md)\
      [`_fpieee_flt`](../c-runtime-library/reference/fpieee-flt.md)\
      [`_fpreset`](../c-runtime-library/reference/fpreset.md)\
      [`frexp`](../c-runtime-library/reference/frexp.md)
   :::column-end:::
   :::column span="":::
      [`_hypot`](../c-runtime-library/reference/hypot-hypotf-hypotl-hypot-hypotf-hypotl.md)\
      [`_isnan`](../c-runtime-library/reference/isnan-isnan-isnanf.md)\
      [`ldexp`](../c-runtime-library/reference/ldexp.md)\
      [`log`](../c-runtime-library/reference/log-logf-log10-log10f.md)\
      [`_logb`](../c-runtime-library/reference/logb-logbf-logbl-logb-logbf.md)\
      [`log10`](../c-runtime-library/reference/log-logf-log10-log10f.md)\
      [`longjmp`](../c-runtime-library/reference/longjmp.md)\
      [`_matherr`](../c-runtime-library/reference/matherr.md)\
      [`modf`](../c-runtime-library/reference/modf-modff-modfl.md)\
      [`_nextafter`](../c-runtime-library/reference/nextafter-functions.md)\
      [`pow`](../c-runtime-library/reference/pow-powf-powl.md)\
      [`printf_s`](../c-runtime-library/reference/printf-s-printf-s-l-wprintf-s-wprintf-s-l.md)
   :::column-end:::
   :::column span="":::
      [`printf`](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)\
      [`_scalb`](../c-runtime-library/reference/scalb.md)\
      [`scanf_s`](../c-runtime-library/reference/scanf-s-scanf-s-l-wscanf-s-wscanf-s-l.md)\
      [`scanf`](../c-runtime-library/reference/scanf-scanf-l-wscanf-wscanf-l.md)\
      [`setjmp`](../c-runtime-library/reference/setjmp.md)\
      [`sin`](../c-runtime-library/reference/sin-sinf-sinl.md)\
      [`sinh`](../c-runtime-library/reference/sinh-sinhf-sinhl.md)\
      [`sqrt`](../c-runtime-library/reference/sqrt-sqrtf-sqrtl.md)\
      [`_status87`, `_statusfp`](../c-runtime-library/reference/status87-statusfp-statusfp2.md)\
      [`tan`](../c-runtime-library/reference/tan-tanf-tanl.md)\
      [`tanh`](../c-runtime-library/reference/tanh-tanhf-tanhl.md)
   :::column-end:::
:::row-end:::

Although source code is available for most of the **printf** and **scanf** routines, they make an internal call to another routine for which source code is not provided.

## Routines that behave differently in a debug build of an application

Some C run-time functions and C++ operators behave differently when called from a debug build of an application. (Note that a debug build of an application can be done by either defining the `_DEBUG` flag or by linking with a debug version of the C run-time library.) The behavioral differences usually consist of extra features or information provided by the routine to support the debugging process. The following table lists these routines.

:::row:::
   :::column span="":::
      C [`abort`](../c-runtime-library/reference/abort.md) routine
   :::column-end:::
   :::column span="":::
      C [`assert`](../c-runtime-library/reference/assert-macro-assert-wassert.md) routine
   :::column-end:::
   :::column span="":::
      C++ [`delete`](../cpp/delete-operator-cpp.md) operator
   :::column-end:::
   :::column span="":::
      C++ [`new`](../cpp/new-operator-cpp.md) operator
   :::column-end:::
:::row-end:::

## See also

[Universal C runtime routines by category](../c-runtime-library/run-time-routines-by-category.md)<br/>
[Run-Time Error Checking](../c-runtime-library/run-time-error-checking.md)<br/>
