---
description: "Learn more about: _get_errno"
title: "_get_errno"
ms.date: "4/2/2020"
api_name: ["_get_errno", "_o__get_errno"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-runtime-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_get_errno"]
helpviewer_keywords: ["get_errno function", "errno global variable", "_get_errno function"]
ms.assetid: b3fd5ebc-f41b-4314-a2f4-2f2d79d6e740
---
# _get_errno

Gets the current value of the errno global variable.

## Syntax

```C
errno_t _get_errno(
   int * pValue
);
```

### Parameters

*pValue*<br/>
A pointer to an integer to be filled with the current value of the **errno** variable.

## Return Value

Returns zero if successful; an error code on failure. If *pValue* is **NULL**, the invalid parameter handler is invoked as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, this function sets **errno** to **EINVAL** and returns **EINVAL**.

## Remarks

Possible values of **errno** are defined in Errno.h. Also, see [errno Constants](../../c-runtime-library/errno-constants.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Example

```C
// crt_get_errno.c
#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <share.h>
#include <errno.h>

int main()
{
   errno_t err;
   int pfh;
   _sopen_s( &pfh, "nonexistent.file", _O_WRONLY, _SH_DENYNO, _S_IWRITE );
   _get_errno( &err );
   printf( "errno = %d\n", err );
   printf( "fyi, ENOENT = %d\n", ENOENT );
}
```

```Output
errno = 2
fyi, ENOENT = 2
```

## Requirements

|Routine|Required header|Optional header|
|-------------|---------------------|---------------------|
|**_get_errno**|\<stdlib.h>|\<errno.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[_set_errno](set-errno.md)<br/>
[errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md)<br/>
