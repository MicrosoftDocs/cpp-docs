---
description: "Learn more about: _cputs, _cputws"
title: "_cputs, _cputws"
ms.date: "4/2/2020"
api_name: ["_cputws", "_cputs", "_o__cputs", "_o__cputws"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-conio-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["cputws", "_cputs", "_cputws"]
helpviewer_keywords: ["strings [C++], writing", "_cputs function", "_cputws function", "putting strings to the console", "cputs function", "console, sending strings to", "cputws function"]
ms.assetid: ec418484-0f8d-43ec-8d8b-198a556c659e
---
# _cputs, _cputws

Puts a string to the console.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
int _cputs(
   const char *str
);
int _cputws(
   const wchar_t *str
);
```

### Parameters

*str*<br/>
Output string.

## Return Value

If successful, **_cputs** returns 0. If the function fails, it returns a nonzero value.

## Remarks

The **_cputs** function writes the null-terminated string that's pointed to by *str* directly to the console. A carriage return-line feed (CR-LF) combination is not automatically appended to the string.

This function validates its parameter. If *str* is **NULL**, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, **errno** is set to **EINVAL** and -1 is returned.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_cputts**|**_cputs**|**_cputs**|**_cputws**|

## Requirements

|Routine|Required header|Optional header|
|-------------|---------------------|---------------------|
|**_cputs**|\<conio.h>|\<errno.h>|
|**_cputws**|\<conio.h>|\<errno.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).

## Example

```C
// crt_cputs.c
// compile with: /c
// This program first displays a string to the console.

#include <conio.h>
#include <errno.h>

void print_to_console(char* buffer)
{
   int retval;
   retval = _cputs( buffer );
   if (retval)
   {
       if (errno == EINVAL)
       {
         _cputs( "Invalid buffer in print_to_console.\r\n");
       }
       else
         _cputs( "Unexpected error in print_to_console.\r\n");
   }
}

void wprint_to_console(wchar_t* wbuffer)
{
   int retval;
   retval = _cputws( wbuffer );
   if (retval)
   {
       if (errno == EINVAL)
       {
         _cputws( L"Invalid buffer in wprint_to_console.\r\n");
       }
       else
         _cputws( L"Unexpected error in wprint_to_console.\r\n");
   }
}

int main()
{

   // String to print at console.
   // Notice the \r (return) character.
   char* buffer = "Hello world (courtesy of _cputs)!\r\n";
   wchar_t *wbuffer = L"Hello world (courtesy of _cputws)!\r\n";
   print_to_console(buffer);
   wprint_to_console( wbuffer );
}
```

```Output
Hello world (courtesy of _cputs)!
Hello world (courtesy of _cputws)!
```

## See also

[Console and Port I/O](../../c-runtime-library/console-and-port-i-o.md)<br/>
[_putch, _putwch](putch-putwch.md)<br/>
