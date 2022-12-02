---
title: "setjmp"
description: "API reference for setjmp; which saves the current state of the program."
ms.date: "1/14/2021"
api_name: ["setjmp"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "ntoskrnl.exe"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["setjmp"]
helpviewer_keywords: ["programs [C++], saving states", "current state", "setjmp function"]
ms.assetid: 684a8b27-e8eb-455b-b4a8-733ca1cbd7d2
---
# `setjmp`

Saves the current state of the program.

## Syntax

```C
int setjmp(
   jmp_buf env
);
```

### Parameters

*`env`*\
Variable in which environment is stored.

## Return value

Returns 0 after saving the stack environment. If **`setjmp`** returns because of a `longjmp` call, it returns the *`value`* argument of `longjmp`, or if the *`value`* argument of `longjmp` is 0, **`setjmp`** returns 1. There's no error return.

## Remarks

The **`setjmp`** function saves a stack environment, which you can subsequently restore, using `longjmp`. When used together, **`setjmp`** and `longjmp` provide a way to execute a non-local **`goto`**. They're typically used to pass execution control to error-handling or recovery code in a previously called routine without using the normal calling or return conventions.

A call to **`setjmp`** saves the current stack environment in *`env`*. A subsequent call to `longjmp` restores the saved environment and returns control to the point just after the corresponding **`setjmp`** call. All variables (except register variables) accessible to the routine receiving control contain the values they had when `longjmp` was called.

It isn't possible to use **`setjmp`** to jump from native to managed code.

**Microsoft Specific**

In Microsoft C++ code on Windows, **`longjmp`** uses the same stack-unwinding semantics as exception-handling code. It is safe to use in the same places that C++ exceptions can be raised. However, this usage isn't portable, and comes with some important caveats. For details, see [`longjmp`](longjmp.md).

**END Microsoft Specific**

> [!NOTE]
> In portable C++ code, you can't assume `setjmp` and `longjmp` support C++ object semantics. Specifically, a `setjmp`/`longjmp` call pair has undefined behavior if replacing the `setjmp` and `longjmp` by **`catch`**
and **`throw`** would invoke any non-trivial destructors for any automatic objects. In C++ programs, we recommend you use the C++ exception-handling mechanism.

For more information, see [Using `setjmp` and `longjmp`](../../cpp/using-setjmp-longjmp.md).

## Requirements

| Routine | Required header |
|---|---|
| **`setjmp`** | \<setjmp.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

See the example for [`_fpreset`](fpreset.md).

## See also

[Process and environment control](../process-and-environment-control.md)\
[`longjmp`](longjmp.md)
