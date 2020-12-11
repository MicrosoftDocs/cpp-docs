---
description: "Learn more about: __security_init_cookie"
title: "__security_init_cookie"
ms.date: "11/04/2016"
api_name: ["__security_init_cookie"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["security_init_cookie", "__security_init_cookie"]
helpviewer_keywords: ["security cookie [C++]", "__security_init_cookie function", "security_init_cookie function", "global security cookie"]
ms.assetid: 32119905-0897-4a1c-84ca-bffd16c9b2af
---
# __security_init_cookie

Initializes the global security cookie.

## Syntax

```C
void __security_init_cookie(void);
```

## Remarks

The global security cookie is used for buffer overrun protection in code compiled with [/GS (Buffer Security Check)](../../build/reference/gs-buffer-security-check.md) and in code that uses exception handling. On entry to an overrun-protected function, the cookie is put on the stack, and on exit, the value on the stack is compared with the global cookie. Any difference between them indicates that a buffer overrun has occurred and causes immediate termination of the program.

Normally, **__security_init_cookie** is called by the CRT when it is initialized. If you bypass CRT initialization—for example, if you use [/ENTRY](../../build/reference/entry-entry-point-symbol.md) to specify an entry-point—then you must call **__security_init_cookie** yourself. If **__security_init_cookie** is not called, the global security cookie is set to a default value and buffer overrun protection is compromised. Because an attacker can exploit this default cookie value to defeat the buffer overrun checks, we recommend that you always call **__security_init_cookie** when you define your own entry point.

The call to **__security_init_cookie** must be made before any overrun-protected function is entered; otherwise a spurious buffer overrun will be detected. For more information, see [C Runtime Error R6035](../../error-messages/tool-errors/c-runtime-error-r6035.md).

## Example

See the examples in [C Runtime Error R6035](../../error-messages/tool-errors/c-runtime-error-r6035.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**__security_init_cookie**|\<process.h>|

**__security_init_cookie** is a Microsoft extension to the standard C Runtime Library. For compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Microsoft Security Response Center](https://www.microsoft.com/msrc?rtc=1)
