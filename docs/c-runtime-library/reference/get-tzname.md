---
description: "Learn more about: _get_tzname"
title: "_get_tzname"
ms.date: "4/2/2020"
api_name: ["_get_tzname", "_o__get_tzname"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-time-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_get_tzname", "get_tzname"]
helpviewer_keywords: ["_get_tzname function", "time zones", "get_tzname function"]
ms.assetid: df0065ff-095f-4237-832c-2fe9ab913875
---
# _get_tzname

Retrieves the character string representation of the time zone name or the daylight standard time zone name (DST).

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

*pReturnValue*<br/>
The string length of *timeZoneName* including a null terminator.

*timeZoneName*<br/>
The address of a character string for the representation of the time zone name or the daylight standard time zone name (DST), depending on *index*.

*sizeInBytes*<br/>
The size of the *timeZoneName* character string in bytes.

*index*<br/>
The index of one of the two time zone names to retrieve.

|*index*|Contents of *timeZoneName*|*timeZoneName* default value|
|-|-|-|
|0|Time zone name|"PST"|
|1|Daylight standard time zone name|"PDT"|
|> 1 or < 0|**errno** set to **EINVAL**|not modified|

Unless the values are explicitly changed during run time, the default values are "PST" and "PDT" respectively.

## Return Value

Zero if successful, otherwise an **errno** type value.

If either *timeZoneName* is **NULL**, or *sizeInBytes* is zero or less than zero (but not both), an invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, this function sets **errno** to **EINVAL** and returns **EINVAL**.

### Error Conditions

|*pReturnValue*|*timeZoneName*|*sizeInBytes*|*index*|Return value|Contents of *timeZoneName*|
|--------------------|--------------------|-------------------|-------------|------------------|--------------------------------|
|size of TZ name|**NULL**|0|0 or 1|0|not modified|
|size of TZ name|any|> 0|0 or 1|0|TZ name|
|not modified|**NULL**|> 0|any|**EINVAL**|not modified|
|not modified|any|zero|any|**EINVAL**|not modified|
|not modified|any|> 0|> 1|**EINVAL**|not modified|

## Remarks

The **_get_tzname** function retrieves the character string representation of the current time zone name or the daylight standard time zone name (DST) into the address of *timeZoneName* depending on the index value, along with the size of the string in *pReturnValue*. If *timeZoneName* is **NULL** and *sizeInBytes* is zero, the size of the string required to hold the specified time zone and a terminating null in bytes is returned in *pReturnValue*. The index values must be either 0 for standard time zone or 1 for daylight standard time zone; any other values of *index* have undetermined results.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Example

This sample calls **_get_tzname** to get the required buffer size to display the current Daylight standard time zone name, allocates a buffer of that size, calls **_get_tzname** again to load the name in the buffer, and prints it to the console.

```C
// crt_get_tzname.c
// Compile by using: cl /W4 crt_get_tzname.c
#include <stdio.h>
#include <time.h>
#include <malloc.h>

enum TZINDEX {
    STD,
    DST
};

int main()
{
    size_t tznameSize = 0;
    char * tznameBuffer = NULL;

    // Get the size of buffer required to hold DST time zone name
    if (_get_tzname(&tznameSize, NULL, 0, DST))
        return 1;    // Return an error value if it failed

    // Allocate a buffer for the name
    if (NULL == (tznameBuffer = (char *)(malloc(tznameSize))))
        return 2;    // Return an error value if it failed

    // Load the name in the buffer
    if (_get_tzname(&tznameSize, tznameBuffer, tznameSize, DST))
        return 3;    // Return an error value if it failed

    printf_s("The current Daylight standard time zone name is %s.\n", tznameBuffer);
    return 0;
}
```

### Output

```Output
The current Daylight standard time zone name is PDT.
```

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_get_tzname**|\<time.h>|

For more information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Time Management](../../c-runtime-library/time-management.md)<br/>
[errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md)<br/>
[_get_daylight](get-daylight.md)<br/>
[_get_dstbias](get-dstbias.md)<br/>
[_get_timezone](get-timezone.md)<br/>
