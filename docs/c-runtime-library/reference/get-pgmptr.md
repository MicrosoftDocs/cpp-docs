---
description: "Learn more about: _get_pgmptr"
title: "_get_pgmptr"
ms.date: "4/2/2020"
api_name: ["_get_pgmptr", "_o__get_pgmptr"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-runtime-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["get_pgmptr", "_get_pgmptr"]
helpviewer_keywords: ["get_pgmptr function", "_get_pgmptr function", "pgmptr global variable", "_pgmptr global variable"]
ms.assetid: 29f16a9f-a685-4721-add3-7fad4f67eece
---
# _get_pgmptr

Gets the current value of the **_pgmptr** global variable.

## Syntax

```C
errno_t _get_pgmptr(
   char **pValue
);
```

### Parameters

*pValue*<br/>
A pointer to a string to be filled with the current value of the **_pgmptr** variable.

## Return Value

Returns zero if successful; an error code on failure. If *pValue* is **NULL**, the invalid parameter handler is invoked as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, this function sets **errno** to **EINVAL** and returns **EINVAL**.

## Remarks

Only call **_get_pgmptr** if your program has a narrow entry point, like **main()** or **WinMain()**. The **_pgmptr** global variable contains the full path to the executable associated with the process. For more information, see [_pgmptr, _wpgmptr](../../c-runtime-library/pgmptr-wpgmptr.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_get_pgmptr**|\<stdlib.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[_get_wpgmptr](get-wpgmptr.md)<br/>
