---
description: "Learn more about: _putch, _putwch"
title: "_putch, _putwch"
ms.date: "4/2/2020"
api_name: ["_putwch", "_putch", "_o__putch", "_o__putwch"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-conio-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_putch", "putwch", "_putwch"]
helpviewer_keywords: ["_putch function", "characters, writing", "putwch function", "_putwch function", "putch function", "console, writing characters to"]
ms.assetid: 3babc7cf-e333-405d-8449-c788d61d51aa
---
# _putch, _putwch

Writes a character to the console.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
int _putch(
   int c
);

wint_t _putwch(
   wchar_t c
);
```

### Parameters

*c*<br/>
Character to be output.

## Return Value

Returns *c* if successful. If **_putch** fails, it returns **EOF**; if **_putwch** fails, it returns **WEOF**.

## Remarks

These functions write the character *c* directly, without buffering, to the console. In Windows NT, **_putwch** writes Unicode characters using the current console locale setting.

The versions with the **_nolock** suffix are identical except that they are not protected from interference by other threads. For more information, see **_putch_nolock**, **_putwch_nolock**.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_puttch**|**_putch**|**_putch**|**_putwch**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_putch**|\<conio.h>|
|**_putwch**|\<conio.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).

## Example

See the example for [_getch](getch-getwch.md).

## See also

[Console and Port I/O](../../c-runtime-library/console-and-port-i-o.md)<br/>
[_cprintf, _cprintf_l, _cwprintf, _cwprintf_l](cprintf-cprintf-l-cwprintf-cwprintf-l.md)<br/>
[_getch, _getwch](getch-getwch.md)<br/>
