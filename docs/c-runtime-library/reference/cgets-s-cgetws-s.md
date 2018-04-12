---
title: "_cgets_s, _cgetws_s | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
apiname: ["_cgetws_s", "_cgets_s"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-conio-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["_cgets_s", "cgets_s", "cgetws_s", "_cgetws_s"]
dev_langs: ["C++"]
helpviewer_keywords: ["strings [C++], getting from console", "console, getting strings from", "_cgets_s function", "cget_s function", "_cgetws_s function", "cgetws_s function"]
ms.assetid: 38b74897-afe6-4dd9-a43f-36a3c0d72c5c
caps.latest.revision: 31
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# _cgets_s, _cgetws_s

Gets a character string from the console. These versions of [_cgets and _cgetws](../../c-runtime-library/cgets-cgetws.md) have security enhancements, as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```
errno_t _cgets_s(
   char *buffer,
   size_t numberOfElements,
   size_t *pSizeRead
);
errno_t _cgetws_s(
   wchar_t *buffer
   size_t numberOfElements,
   size_t *pSizeRead
);
template <size_t size>
errno_t _cgets_s(
   char (&buffer)[size],
   size_t *pSizeRead
); // C++ only
template <size_t size>
errno_t _cgetws_s(
   wchar_t (&buffer)[size],
   size_t *pSizeRead
); // C++ only
```

### Parameters

[out] *buffer*
Storage location for data.

[in] *numberOfElements*
The size of the buffer in single-byte or wide characters, which is also the maximum number of characters to be read.

[in] *pSizeRead*
The number of characters actually read.

## Return Value

The return value is zero if successful; otherwise, an error code if a failure occurs.

### Error Conditions

|*buffer*|*numberOfElements*|*pSizeRead*|Return|Contents of *buffer*|
|--------------|------------------------|-----------------|------------|--------------------------|
|`NULL`|any|any|`EINVAL`|n/a|
|not `NULL`|zero|any|`EINVAL`|not modified|
|not `NULL`|any|`NULL`|`EINVAL`|zero-length string|

## Remarks

`_cgets_s` and `_cgetws_s` read a string from the console and copy the string (with a null terminator) into *buffer*. `_cgetws_s` is the wide character version of the function; other than the character size, the behavior of these two functions is identical. The maximum size of the string to be read is passed in as the *numberOfElements* parameter. This size should include an extra character for the terminating null. The actual number of characters read is placed in *pSizeRead*.

If an error occurs during the operation or in the validating of the parameters, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md) . If execution is allowed to continue, `errno` is set to `EINVAL` and `EINVAL` is returned.

In C++, the use of these functions is simplified by template overloads; the overloads can infer buffer length automatically, thereby eliminating the need to specify a size argument, and they can automatically replace older, less-secure functions with their newer, more secure counterparts. For more information, see [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|`_cgetts_s`|`_cgets_s`|`_cgets_s`|`_cgetws_s`|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|`_cgets_s`|\<conio.h>|
|`_cgetws_s`|\<conio.h> or \<wchar.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See Also

[Console and Port I/O](../../c-runtime-library/console-and-port-i-o.md)<br/>
[_getch, _getwch](../../c-runtime-library/reference/getch-getwch.md)