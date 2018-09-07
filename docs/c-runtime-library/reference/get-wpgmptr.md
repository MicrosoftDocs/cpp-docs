---
title: "_get_wpgmptr | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["_get_wpgmptr"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-runtime-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["get_wpgmptr", "_get_wpgmptr"]
dev_langs: ["C++"]
helpviewer_keywords: ["_wpgmptr global variable", "get_wpgmptr function", "wpgmptr global variable", "_get_wpgmptr function"]
ms.assetid: a77cdd13-2303-4b7c-9a60-8debdbef2011
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# _get_wpgmptr

Gets the current value of the **_wpgmptr** global variable.

## Syntax

```C
errno_t _get_wpgmptr( 
   wchar_t **pValue 
);
```

### Parameters

*pValue*<br/>
A pointer to a string to be filled with the current value of the **_wpgmptr** variable.

## Return Value

Returns zero if successful; an error code on failure. If *pValue* is **NULL**, the invalid parameter handler is invoked as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, this function sets **errno** to **EINVAL** and returns **EINVAL**.

## Remarks

Only call **_get_wpgmptr** if your program has a wide entry point, like **wmain()** or **wWinMain()**. The **_wpgmptr** global variable contains the full path to the executable associated with the process as a wide-character string. For more information, see [_pgmptr, _wpgmptr](../../c-runtime-library/pgmptr-wpgmptr.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_get_wpgmptr**|\<stdlib.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[_get_pgmptr](get-pgmptr.md)<br/>
