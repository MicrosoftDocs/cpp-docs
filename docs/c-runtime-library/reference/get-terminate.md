---
title: "_get_terminate"
ms.date: "11/04/2016"
apiname: ["_get_terminate"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-runtime-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["get_terminate", "_get_terminate", "__get_terminate"]
helpviewer_keywords: ["__get_terminate function", "get_terminate function", "_get_terminate function"]
ms.assetid: c8f168c4-0ad5-4832-a522-dd1ef383c208
---
# _get_terminate

Returns the termination routine to be called by **terminate**.

## Syntax

```C
terminate_function _get_terminate( void );
```

## Return Value

Returns a pointer to the function registered by [set_terminate](set-terminate-crt.md). If no function has been set, the return value may be used to restore the default behavior; this value may be **NULL**.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_get_terminate**|\<eh.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

- [Exception Handling Routines](../../c-runtime-library/exception-handling-routines.md)
- [abort](abort.md)
- [set_unexpected](set-unexpected-crt.md)
- [terminate](terminate-crt.md)
- [unexpected](unexpected-crt.md)
