---
description: "Learn more about: _dupenv_s_dbg, _wdupenv_s_dbg"
title: "_dupenv_s_dbg, _wdupenv_s_dbg"
ms.date: "11/04/2016"
api_name: ["_dupenv_s_dbg", "_wdupenv_s_dbg"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_tdupenv_s_dbg", "_dupenv_s_dbg", "_wdupenv_s_dbg"]
helpviewer_keywords: ["_tdupenv_s_dbg function", "dupenv_s_dbg function", "_wdupenv_s_dbg function", "environment variables", "tdupenv_s_dbg function", "wdupenv_s_dbg function", "_dupenv_s_dbg function"]
ms.assetid: e3d81148-e24e-46d0-a21d-fd87b5e6256c
---
# _dupenv_s_dbg, _wdupenv_s_dbg

Get a value from the current environment.  Versions of [_dupenv_s, _wdupenv_s](dupenv-s-wdupenv-s.md) that allocate memory with [_malloc_dbg](malloc-dbg.md) to provide additional debugging information.

## Syntax

```C
errno_t _dupenv_s_dbg(
   char **buffer,
   size_t *numberOfElements,
   const char *varname,
   int blockType,
   const char *filename,
   int linenumber
);
errno_t _wdupenv_s_dbg(
   wchar_t **buffer,
   size_t * numberOfElements,
   const wchar_t *varname,
   int blockType,
   const char *filename,
   int linenumber
);
```

### Parameters

*buffer*<br/>
Buffer to store the variable's value.

*numberOfElements*<br/>
Size of *buffer*.

*varname*<br/>
Environment variable name.

*blockType*<br/>
Requested type of the memory block: **_CLIENT_BLOCK** or **_NORMAL_BLOCK**.

*filename*<br/>
Pointer to the name of the source file or **NULL**.

*linenumber*<br/>
Line number in source file or **NULL**.

## Return Value

Zero on success, an error code on failure.

These functions validate their parameters; if *buffer* or *varname* is **NULL**, the invalid parameter handler is invoked as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, the functions set **errno** to **EINVAL** and return **EINVAL**.

If these functions cannot allocate enough memory, they set *buffer* to **NULL** and *numberOfElements* to 0, and return **ENOMEM**.

## Remarks

The **_dupenv_s_dbg** and **_wdupenv_s_dbg** functions are identical to **_dupenv_s** and **_wdupenv_s** except that, when **_DEBUG** is defined, these functions use the debug version of [malloc](malloc.md), [_malloc_dbg](malloc-dbg.md), to allocate memory for the value of the environment variable. For information on the debugging features of **_malloc_dbg**, see [_malloc_dbg](malloc-dbg.md).

You do not need to call these functions explicitly in most cases. Instead, you can define the flag **_CRTDBG_MAP_ALLOC**. When **_CRTDBG_MAP_ALLOC** is defined, calls to **_dupenv_s** and **_wdupenv_s** are remapped to **_dupenv_s_dbg** and **_wdupenv_s_dbg**, respectively, with the *blockType* set to **_NORMAL_BLOCK**. Thus, you do not need to call these functions explicitly unless you want to mark the heap blocks as **_CLIENT_BLOCK**. For more information on block types, see [Types of blocks on the debug heap](/visualstudio/debugger/crt-debug-heap-details).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tdupenv_s_dbg**|**_dupenv_s_dbg**|**_dupenv_s_dbg**|**_wdupenv_s_dbg**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_dupenv_s_dbg**|\<crtdbg.h>|
|**_wdupenv_s_dbg**|\<crtdbg.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_dupenv_s_dbg.c
#include  <stdlib.h>
#include <crtdbg.h>

int main( void )
{
   char *pValue;
   size_t len;
   errno_t err = _dupenv_s_dbg( &pValue, &len, "pathext",
      _NORMAL_BLOCK, __FILE__, __LINE__ );
   if ( err ) return -1;
   printf( "pathext = %s\n", pValue );
   free( pValue );
   err = _dupenv_s_dbg( &pValue, &len, "nonexistentvariable",
      _NORMAL_BLOCK, __FILE__, __LINE__ );
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
[getenv_s, _wgetenv_s](getenv-s-wgetenv-s.md)<br/>
[_putenv_s, _wputenv_s](putenv-s-wputenv-s.md)<br/>
