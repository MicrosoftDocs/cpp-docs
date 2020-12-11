---
description: "Learn more about: _get_fmode"
title: "_get_fmode"
ms.date: "4/2/2020"
api_name: ["_get_fmode", "_o__get_fmode"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["get_fmode", "_get_fmode"]
helpviewer_keywords: ["_get_fmode function", "file translation [C++], default mode", "get_fmode function"]
ms.assetid: 22ea70e2-b9b5-422d-b514-64f4beaea45c
---
# _get_fmode

Gets the default file translation mode for file I/O operations.

## Syntax

```C
errno_t _get_fmode(
   int * pmode
);
```

### Parameters

*pmode*<br/>
A pointer to an integer to be filled with the current default mode: **_O_TEXT** or **_O_BINARY**.

## Return Value

Returns zero if successful; an error code on failure. If *pmode* is **NULL**, the invalid parameter handler is invoked as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, **errno** is set to **EINVAL** and the function returns **EINVAL**.

## Remarks

The function gets the value of the [_fmode](../../c-runtime-library/fmode.md) global variable. This variable specifies the default file translation mode for both low-level and stream file I/O operations, such as **_open**, **_pipe**, **fopen**, and [freopen](freopen-wfreopen.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|Optional header|
|-------------|---------------------|---------------------|
|**_get_fmode**|\<stdlib.h>|\<fcntl.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

See the example in [_set_fmode](set-fmode.md).

## See also

[_fmode](../../c-runtime-library/fmode.md)<br/>
[_set_fmode](set-fmode.md)<br/>
[_setmode](setmode.md)<br/>
[Text and Binary Mode File I/O](../../c-runtime-library/text-and-binary-mode-file-i-o.md)<br/>
