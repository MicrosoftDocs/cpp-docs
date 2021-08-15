---
description: "Learn more about: _set_errno"
title: "_set_errno"
ms.date: "4/2/2020"
api_name: ["_set_errno", "_o__set_errno"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-runtime-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["set_errno", "_set_errno"]
helpviewer_keywords: ["errno global variable", "set_errno function", "_set_errno function"]
ms.assetid: d338914a-1894-4cf3-ae45-f2c4eb26590b
---
# _set_errno

Set the value of the **errno** global variable.

## Syntax

```C
errno_t _set_errno( int error_value );
```

### Parameters

*error_value*<br/>
The new value of **errno**.

## Return Value

Returns zero if successful.

## Remarks

Possible values are defined in Errno.h. Also, see [errno Constants](../../c-runtime-library/errno-constants.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Example

```C
// crt_set_errno.c
#include <stdio.h>
#include <errno.h>

int main()
{
   _set_errno( EILSEQ );
   perror( "Oops" );
}
```

```Output
Oops: Illegal byte sequence
```

## Requirements

|Routine|Required header|Optional header|
|-------------|---------------------|---------------------|
|**_set_errno**|\<stdlib.h>|\<errno.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[_get_errno](get-errno.md)<br/>
[errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md)<br/>
