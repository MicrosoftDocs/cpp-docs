---
title: "_putch_nolock, _putwch_nolock | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["_putwch_nolock", "_putch_nolock"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-conio-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["_putch_nolock", "_puttch_nolock", "putch_nolock", "putwch_nolock", "_putwch_nolock"]
dev_langs: ["C++"]
helpviewer_keywords: ["putwch_nolock function", "puttch_nolock function", "characters, writing", "putch_nolock function", "_putch_nolock function", "_puttch_nolock function", "console, writing characters to", "_putwch_nolock function"]
ms.assetid: edbc811d-bac6-47fa-a872-fe4f3a1590b0
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# _putch_nolock, _putwch_nolock

Writes a character to the console without locking the thread.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
int _putch_nolock(
int c
);
wint_t _putwch_nolock(
wchar_t c
);
```

### Parameters

*c*<br/>
Character to be output.

## Return Value

Returns *c* if successful. If **_putch_nolock** fails, it returns **EOF**; if **_putwch_nolock** fails, it returns **WEOF**.

## Remarks

**_putch_nolock** and **_putwch_nolock** are identical to **_putch** and **_putwch**, respectively, except that they are not protected from interference by other threads. They might be faster because they do not incur the overhead of locking out other threads. Use these functions only in thread-safe contexts such as single-threaded applications or where the calling scope already handles thread isolation.

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_puttch_nolock**|**_putch_nolock**|**_putch_nolock**|**_putwch_nolock**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_putch_nolock**|\<conio.h>|
|**_putwch_nolock**|\<conio.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).

## See also

[Console and Port I/O](../../c-runtime-library/console-and-port-i-o.md)<br/>
[_cprintf, _cprintf_l, _cwprintf, _cwprintf_l](cprintf-cprintf-l-cwprintf-cwprintf-l.md)<br/>
[_getch, _getwch](getch-getwch.md)<br/>
