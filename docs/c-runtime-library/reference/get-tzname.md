---
description: "Learn more about: _get_tzname"
title: "_get_tzname"
ms.date: 08/23/2022
api_name: ["_get_tzname", "_o__get_tzname"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-time-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_get_tzname", "get_tzname"]
helpviewer_keywords: ["_get_tzname function", "time zones", "get_tzname function"]
---
# `_get_tzname`

Retrieves the character string representation of the time zone name or the daylight standard time (DST) zone name.

## Syntax

```C
errno_t _get_tzname(
    size_t* pReturnValue,
    char* timeZoneName,
    size_t sizeInBytes,
    int index
);
```

### Parameters

*`pReturnValue`*\
The string length of *`timeZoneName`* including a `NULL` terminator.

*`timeZoneName`*\
The address of a character string for the representation of the time zone name or the daylight standard time zone name (DST), depending on *`index`*.

*`sizeInBytes`*\
The size of the *`timeZoneName`* character string in bytes.

*`index`*\
The *`index`* of one of the two time zone names to retrieve.

| *`index`* | Contents of *`timeZoneName`* | *`timeZoneName`* default value |
|---|---|---|
| 0 | Time zone name | `"PST"` |
| 1 | Daylight standard time zone name | `"PDT"` |
| > 1 or < 0 | `errno` set to `EINVAL` | not modified |

Unless explicitly updated during runtime, `"PST"` is returned for the standard time zone and `"PDT"` for the daylight standard time zone. For more information, see the [Remarks](#remarks).

The time zone string isn't guaranteed to be the same between OS releases. Official time zone names can and do change.

## Return value

Zero if successful, otherwise an `errno` type value.

If either *`timeZoneName`* is `NULL`, or *`sizeInBytes`* is zero or less than zero (but not both), an invalid parameter handler is invoked, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, this function sets `errno` to `EINVAL` and returns `EINVAL`.

### Error conditions

| *`pReturnValue`* | *`timeZoneName`* | *`sizeInBytes`* | *`index`* | Return value | Contents of *`timeZoneName`* |
|---|---|---|---|---|---|
| size of TZ name | `NULL` | 0 | 0 or 1 | 0 | not modified |
| size of TZ name | any | > 0 | 0 or 1 | 0 | TZ name |
| not modified | `NULL` | > 0 | any | `EINVAL` | not modified |
| not modified | any | zero | any | `EINVAL` | not modified |
| not modified | any | > 0 | > 1 | `EINVAL` | not modified |

## Remarks

The `_get_tzname` function retrieves the character string representation of the current time zone name or the daylight standard time zone name (DST) into the address of *`timeZoneName`* depending on the *`index`* value, along with the size of the string in *`pReturnValue`*. If *`timeZoneName`* is `NULL` and *`sizeInBytes`* is zero, the size of the string in bytes required to hold both the specified time zone, and a terminating `NULL`, is returned in *`pReturnValue`*.

The *`index`* values must be either 0 for standard time zone or 1 for daylight standard time zone; any other values have undetermined results.

By default, `"PST"` is returned for the standard time zone and `"PDT"` for the daylight standard time zone. The true time zone name is updated the first time it's needed by a function that requires time zone information, such as [`strftime`](strftime-wcsftime-strftime-l-wcsftime-l.md), [`ftime`](ftime-ftime32-ftime64.md), [`ftime_s`](ftime-s-ftime32-s-ftime64-s.md), [`mktime`](mktime-mktime32-mktime64.md), [`localtime`](localtime-localtime32-localtime64.md), and others. If a function that doesn't require time zone information isn't called prior to calling `_get_tzname`, the default values are returned unless you first explicitly update them using one of the functions mentioned, or by a call to [`tzset`](tzset.md). Also, if the `TZ` environment variable is set, it takes precedence over the time zone name reported by the OS. Even in this case, one of the functions mentioned above must be called before `_get_tzname` is called or the default time zone value will be returned. For more information about the `TZ` environment variable and the CRT, see [`_tzset`](tzset.md).

> [!WARNING]
> The time zone string is not guaranteed to be the same between OS releases. Official time zone names can and do change.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Example

This sample calls `_get_tzname` to get the required buffer size to display the current Daylight standard time zone name, allocates a buffer of that size, calls `_get_tzname` again to load the name in the buffer, and prints it to the console.

It also calls `_tzset()` to cause the OS to update the time zone information before calling `_get_tzname()`. Otherwise, the default values are used.

```C
// crt_get_tzname.c
// Compile by using: cl /W4 crt_get_tzname.c
#include <stdio.h>
#include <time.h>
#include <malloc.h>

enum TZindex {
    STD,
    DST
};

int main()
{
    size_t tznameSize = 0;
    char * tznameBuffer = NULL;

    _tzset(); // Update the time zone information

    // Get the size of buffer required to hold DST time zone name
    if (_get_tzname(&tznameSize, NULL, 0, DST))
    {
        return 1;    // Return an error value if it failed
    }

    // Allocate a buffer for the name
    if (NULL == (tznameBuffer = (char *)(malloc(tznameSize))))
    {
        return 2;    // Return an error value if it failed
    }

    // Load the name in the buffer
    if (_get_tzname(&tznameSize, tznameBuffer, tznameSize, DST))
    {
        return 3;    // Return an error value if it failed
    }

    printf_s("The current Daylight standard time zone name is %s.\n", tznameBuffer);
    return 0;
}
```

### Output

```Output
The current Daylight standard time zone name is Pacific Daylight Time.
```

## Requirements

| Routine | Required header |
|---|---|
| `_get_tzname` | `<time.h>` |

For more information, see [Compatibility](../compatibility.md).

## See also

[Time management](../time-management.md)\
[`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md)\
[`_get_daylight`](get-daylight.md)\
[`_get_dstbias`](get-dstbias.md)\
[`_get_timezone`](get-timezone.md)
