---
description: "Learn more about: _get_unexpected"
title: "_get_unexpected"
ms.date: "11/04/2016"
api_name: ["_get_unexpected"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["__get_unexpected", "_get_unexpected", "get_unexpected"]
helpviewer_keywords: ["__get_unexpected function", "get_unexpected function", "_get_unexpected function"]
ms.assetid: a5f7a7a0-18e0-485e-953d-db291068a1e8
---
# _get_unexpected

Returns the termination routine to be called by **unexpected**.

## Syntax

```C
unexpected_function _get_unexpected( void );
```

## Return Value

Returns a pointer to the function registered by [set_unexpected](set-unexpected-crt.md). If no function has been set, the return value may be used to restore the default behavior; this value may be **NULL**.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_get_unexpected**|\<eh.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Exception Handling Routines](../../c-runtime-library/exception-handling-routines.md)<br/>
[abort](abort.md)<br/>
[set_terminate](set-terminate-crt.md)<br/>
[terminate](terminate-crt.md)<br/>
[unexpected](unexpected-crt.md)<br/>
