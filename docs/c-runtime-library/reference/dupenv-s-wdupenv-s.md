---
description: "Learn more about: _dupenv_s, _wdupenv_s"
title: "_dupenv_s, _wdupenv_s"
ms.date: "4/2/2020"
api_name: ["_dupenv_s", "_wdupenv_s", "_o__dupenv_s", "_o__wdupenv_s"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-environment-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["tdupenv_s", "_dupenv_s", "wdupenv_s", "dupenv_s", "_tdupenv_s", "_wdupenv_s"]
helpviewer_keywords: ["_dupenv_s function", "_tdupenv_s function", "_wdupenv_s function", "environment variables", "wdupenv_s function", "dupenv_s function", "tdupenv_s function"]
ms.assetid: b729ecc2-a31d-4ccf-92a7-5accedb8f8c8
---
# _dupenv_s, _wdupenv_s

Gets a value from the current environment.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
errno_t _dupenv_s(
   char **buffer,
   size_t *numberOfElements,
   const char *varname
);
errno_t _wdupenv_s(
   wchar_t **buffer,
   size_t *numberOfElements,
   const wchar_t *varname
);
```

### Parameters

*buffer*<br/>
Buffer to store the variable's value.

*numberOfElements*<br/>
Size of *buffer*.

*varname*<br/>
Environment variable name.

## Return Value

Zero on success, an error code on failure.

These functions validate their parameters; if *buffer* or *varname* is **NULL**, the invalid parameter handler is invoked as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, the functions set **errno** to **EINVAL** and return **EINVAL**.

If these functions cannot allocate enough memory, they set *buffer* to **NULL** and *numberOfElements* to 0, and return **ENOMEM**.

## Remarks

The **_dupenv_s** function searches the list of environment variables for *varname*. If the variable is found, **_dupenv_s** allocates a buffer and copies the variable's value into the buffer. The buffer's address and length are returned in *buffer* and *numberOfElements*. By allocating the buffer itself, **_dupenv_s** provides a more convenient alternative to [getenv_s, _wgetenv_s](getenv-s-wgetenv-s.md).

> [!NOTE]
> It is the calling program's responsibility to free the memory by calling [free](free.md).

If the variable is not found, then *buffer* is set to **NULL**, *numberOfElements* is set to 0, and the return value is 0 because this situation is not considered to be an error condition.

If you are not interested in the size of the buffer you can pass **NULL** for *numberOfElements*.

**_dupenv_s** is not case sensitive in the Windows operating system. **_dupenv_s** uses the copy of the environment pointed to by the global variable **_environ** to access the environment. See the Remarks in [getenv_s, _wgetenv_s](getenv-s-wgetenv-s.md) for a discussion of **_environ**.

The value in *buffer* is a copy of the environment variable's value; modifying it has no effect on the environment. Use the [_putenv_s, _wputenv_s](putenv-s-wputenv-s.md) function to modify the value of an environment variable.

**_wdupenv_s** is a wide-character version of **_dupenv_s**; the arguments of **_wdupenv_s** are wide-character strings. The **_wenviron** global variable is a wide-character version of **_environ**. See the Remarks in [getenv_s, _wgetenv_s](getenv-s-wgetenv-s.md) for more on **_wenviron**.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tdupenv_s**|**_dupenv_s**|**_dupenv_s**|**_wdupenv_s**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_dupenv_s**|\<stdlib.h>|
|**_wdupenv_s**|\<stdlib.h> or \<wchar.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_dupenv_s.c
#include  <stdlib.h>

int main( void )
{
   char *pValue;
   size_t len;
   errno_t err = _dupenv_s( &pValue, &len, "pathext" );
   if ( err ) return -1;
   printf( "pathext = %s\n", pValue );
   free( pValue );
   err = _dupenv_s( &pValue, &len, "nonexistentvariable" );
   if ( err ) return -1;
   printf( "nonexistentvariable = %s\n", pValue );
   free( pValue ); // It's OK to call free with NULL
}
```

```Output
pathext = .COM;.EXE;.BAT;.CMD;.VBS;.VBE;.JS;.JSE;.WSF;.WSH;.pl
nonexistentvariable = (null)
```

## See also

[Process and Environment Control](../../c-runtime-library/process-and-environment-control.md)<br/>
[Environmental Constants](../../c-runtime-library/environmental-constants.md)<br/>
[_dupenv_s_dbg, _wdupenv_s_dbg](dupenv-s-dbg-wdupenv-s-dbg.md)<br/>
[getenv_s, _wgetenv_s](getenv-s-wgetenv-s.md)<br/>
[_putenv_s, _wputenv_s](putenv-s-wputenv-s.md)<br/>
