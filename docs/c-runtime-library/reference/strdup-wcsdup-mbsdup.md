---
description: "Learn more about: _strdup, _wcsdup, _mbsdup"
title: "_strdup, _wcsdup, _mbsdup"
ms.date: "4/2/2020"
api_name: ["_strdup", "_mbsdup", "_wcsdup", "_o__strdup", "_o__wcsdup"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-string-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_tcsdup", "mbsdup", "_mbsdup", "_strdup", "_ftcsdup", "_wcsdup"]
helpviewer_keywords: ["wcsdup function", "ftcsdup function", "_ftcsdup function", "mbsdup function", "strdup function", "_strdup function", "_wcsdup function", "copying strings", "duplicating strings", "strings [C++], copying", "_mbsdup function", "strings [C++], duplicating", "tcsdup function", "_tcsdup function"]
ms.assetid: 8604f8bb-95e9-45d3-93ef-20397ebf247a
---
# _strdup, _wcsdup, _mbsdup

Duplicates strings.

> [!IMPORTANT]
> **_mbsdup** cannot be used in applications that execute in the                  Windows Runtime. For more information, see                  [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
char *_strdup(
   const char *strSource
);
wchar_t *_wcsdup(
   const wchar_t *strSource
);
unsigned char *_mbsdup(
   const unsigned char *strSource
);
```

### Parameters

*strSource*<br/>
Null-terminated source string.

## Return Value

Each of these functions returns a pointer to the storage location for the copied string or **NULL** if storage cannot be allocated.

## Remarks

The **_strdup** function calls [malloc](malloc.md) to allocate storage space for a copy of *strSource* and then copies *strSource* to the allocated space.

**_wcsdup** and **_mbsdup** are wide-character and multibyte-character versions of **_strdup**. The arguments and return value of **_wcsdup** are wide-character strings; those of **_mbsdup** are multibyte-character strings. These three functions behave identically otherwise.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcsdup**|**_strdup**|**_mbsdup**|**_wcsdup**|

Because **_strdup** calls **malloc** to allocate storage space for the copy of *strSource*, it is good practice always to release this memory by calling the [free](free.md) routine on the pointer that's returned by the call to **_strdup**.

If **_DEBUG** and **_CRTDBG_MAP_ALLOC** are defined, **_strdup** and **_wcsdup** are replaced by calls to **_strdup_dbg** and **_wcsdup_dbg** to allow for debugging memory allocations. For more information, see [_strdup_dbg, _wcsdup_dbg](strdup-dbg-wcsdup-dbg.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_strdup**|\<string.h>|
|**_wcsdup**|\<string.h> or \<wchar.h>|
|**_mbsdup**|\<mbstring.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_strdup.c

#include <string.h>
#include <stdio.h>

int main( void )
{
   char buffer[] = "This is the buffer text";
   char *newstring;
   printf( "Original: %s\n", buffer );
   newstring = _strdup( buffer );
   printf( "Copy:     %s\n", newstring );
   free( newstring );
}
```

```Output
Original: This is the buffer text
Copy:     This is the buffer text
```

## See also

[String Manipulation](../../c-runtime-library/string-manipulation-crt.md)<br/>
[memset, wmemset](memset-wmemset.md)<br/>
[strcat, wcscat, _mbscat](strcat-wcscat-mbscat.md)<br/>
[strcmp, wcscmp, _mbscmp](strcmp-wcscmp-mbscmp.md)<br/>
[strncat, _strncat_l, wcsncat, _wcsncat_l, _mbsncat, _mbsncat_l](strncat-strncat-l-wcsncat-wcsncat-l-mbsncat-mbsncat-l.md)<br/>
[strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)<br/>
[strncpy, _strncpy_l, wcsncpy, _wcsncpy_l, _mbsncpy, _mbsncpy_l](strncpy-strncpy-l-wcsncpy-wcsncpy-l-mbsncpy-mbsncpy-l.md)<br/>
[_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l](strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)<br/>
[strrchr, wcsrchr, _mbsrchr, _mbsrchr_l](strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)<br/>
[strspn, wcsspn, _mbsspn, _mbsspn_l](strspn-wcsspn-mbsspn-mbsspn-l.md)<br/>
