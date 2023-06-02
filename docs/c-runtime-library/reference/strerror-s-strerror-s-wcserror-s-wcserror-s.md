---
title: "strerror_s, _strerror_s, _wcserror_s, __wcserror_s"
description: "Functions with security enhancements to get a system error message or print a user-supplied error message."
ms.date: 05/31/2023
api_name: ["__wcserror_s", "_strerror_s", "_wcserror_s", "strerror_s", "_o__strerror_s", "_o__wcserror_s", "_o_strerror_s"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-runtime-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["wcserror_s", "__wcserror_s", "_tcserror_s", "_wcserror_s", "tcserror_s", "strerror_s", "_strerror_s"]
helpviewer_keywords: ["__wcserror_s function", "error messages, printing", "tcserror_s function", "printing error messages", "strerror_s function", "_wcserror_s function", "_tcserror_s function", "_strerror_s function", "wcserror_s function", "error messages, getting"]
---
# `strerror_s`, `_strerror_s`, `_wcserror_s`, `__wcserror_s`

Get a system error message (**`strerror_s`**, **`_wcserror_s`**) or print a user-supplied error message (**`_strerror_s`**, **`__wcserror_s`**). These functions are versions of [`strerror`, `_strerror`, `_wcserror`, `__wcserror`](strerror-strerror-wcserror-wcserror.md) with security enhancements as described in [Security features in the CRT](../security-features-in-the-crt.md).

## Syntax

```C
errno_t strerror_s(
   char *buffer,
   size_t sizeInBytes,
   int errnum
);
errno_t _strerror_s(
   char *buffer,
   size_t sizeInBytes,
   const char *strErrMsg
);
errno_t _wcserror_s(
   wchar_t *buffer,
   size_t sizeInWords,
   int errnum
);
errno_t __wcserror_s(
   wchar_t *buffer,
   size_t sizeInWords,
   const wchar_t *strErrMsg
);
```

```cpp
template <size_t size>
errno_t strerror_s(
   char (&buffer)[size],
   int errnum
); // C++ only
template <size_t size>
errno_t _strerror_s(
   char (&buffer)[size],
   const char *strErrMsg
); // C++ only
template <size_t size>
errno_t _wcserror_s(
   wchar_t (&buffer)[size],
   int errnum
); // C++ only
template <size_t size>
errno_t __wcserror_s(
   wchar_t (&buffer)[size],
   const wchar_t *strErrMsg
); // C++ only
```

### Parameters

*`buffer`*\
Buffer to hold error string.

*`sizeInBytes`*\
The number of bytes in the buffer.

*`sizeInWords`*\
The number of words in the buffer.

*`errnum`*\
Error number.

*`strErrMsg`*\
User-supplied message.

## Return value

Zero if successful, an error code on failure.

### Error conditions

| *`buffer`* | *`sizeInBytes`*/*`sizeInWords`* | *`strErrMsg`* | Contents of *`buffer`* |
|---|---|---|---|
| `NULL` | any | any | n/a |
| any | 0 | any | not modified |

## Remarks

The **`strerror_s`** function is thread-safe.

The **`strerror_s`** function maps *`errnum`* to an error-message string, returning the string in *`buffer`*. **`_strerror_s`** doesn't take the error number; it uses the current value of `errno` to determine the appropriate message. The message isn't printed or displayed by **`strerror_s`** or **`_strerror_s`**. To output the message, you need to call an output function such as [`fprintf`](fprintf-fprintf-l-fwprintf-fwprintf-l.md):

```C
if (( _access( "datafile",2 )) == -1 )
{
   _strerror_s(buffer, 80, NULL);
   fprintf( stderr, buffer );
}
```

If *`strErrMsg`* is `NULL`, **`_strerror_s`** returns a string in *`buffer`* that contains the system error message for the last library call that produced an error. If *`strErrMsg`* isn't equal to `NULL`, then **`_strerror_s`** returns a string in *`buffer`* that contains (in order) your string message, a colon, a space, the system error message for the last library call that produced an error. Your string message can be, at most, 94 characters long.

These functions truncate the error message if its length exceeds the size of the buffer - 1. The resulting string in *`buffer`* is always null-terminated.

The actual error number for **`_strerror_s`** is stored in the variable [`errno`](../errno-doserrno-sys-errlist-and-sys-nerr.md). The system error messages are accessed through the variable [`_sys_errlist`](../errno-doserrno-sys-errlist-and-sys-nerr.md), which is an array of messages ordered by error number. **`_strerror_s`** accesses the appropriate error message by using the `errno` value as an index to the variable `_sys_errlist`. The value of the variable [`_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md) is defined as the maximum number of elements in the `_sys_errlist` array. To produce accurate results, call **`_strerror_s`** immediately after a library routine return with an error. Otherwise, subsequent calls to **`strerror_s`** or **`_strerror_s`** can overwrite the `errno` value.

**`_wcserror_s`** and **`__wcserror_s`** are wide-character versions of **`strerror_s`** and **`_strerror_s`**, respectively.

These functions validate their parameters. If buffer is `NULL` or if the size parameter is 0, the invalid parameter handler is invoked, as described in [Parameter validation](../parameter-validation.md) . If execution is allowed to continue, the functions return `EINVAL` and set `errno` to `EINVAL`.

**`_strerror_s`**, **`_wcserror_s`**, and **`__wcserror_s`** aren't part of the ANSI definition but are instead Microsoft extensions to it. Don't use them where portability is desired; for ANSI compatibility, use **`strerror_s`** instead.

In C++, using these functions is simplified by template overloads; the overloads can infer buffer length automatically, eliminating the need to specify a size argument. For more information, see [Secure template overloads](../secure-template-overloads.md).

The debug library versions of these functions first fill the buffer with 0xFE. To disable this behavior, use [`_CrtSetDebugFillThreshold`](crtsetdebugfillthreshold.md).

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

### Generic-text routine mappings

| TCHAR.H routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_tcserror_s` | **`strerror_s`** | **`strerror_s`** | **`_wcserror_s`** |

## Requirements

| Routine | Required header |
|---|---|
| **`strerror_s`**, **`_strerror_s`** | \<string.h> |
| **`_wcserror_s`**, **`__wcserror_s`** | \<string.h> or \<wchar.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

See the example for [`perror`](perror-wperror.md).

## See also

[String manipulation](../string-manipulation-crt.md)\
[`clearerr`](clearerr.md)\
[`ferror`](ferror.md)\
[`perror`, `_wperror`](perror-wperror.md)
