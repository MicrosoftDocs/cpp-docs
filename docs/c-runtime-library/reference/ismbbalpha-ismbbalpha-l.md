---
description: "Learn more about: _ismbbalpha, _ismbbalpha_l"
title: "_ismbbalpha, _ismbbalpha_l"
ms.date: "4/2/2020"
api_name: ["_ismbbalpha", "_ismbbalpha_l", "_o__ismbbalpha", "_o__ismbbalpha_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["ismbbalpha", "ismbbalpha_l", "_ismbbalpha", "_ismbbalpha_l"]
helpviewer_keywords: ["ismbbalpha function", "ismbbalpha_l function", "_ismbbalpha function", "_ismbbalpha_l function"]
ms.assetid: 8e54cb92-fc2b-41f5-8ab4-b22ac8aa9ad0
---
# _ismbbalpha, _ismbbalpha_l

Determines whether a specified multibyte character is alpha.

## Syntax

```C
int _ismbbalpha(
   unsigned int c
);
int _ismbbalpha_l(
   unsigned int c
);
```

### Parameters

*c*<br/>
Integer to be tested.

*locale*<br/>
Locale to use.

## Return Value

**_ismbbalpha** returns a nonzero value if the expression:

`isalpha(c) || _ismbbkalnum(c)`

is nonzero for *c*, or 0 if it is not. **_ismbbalpha** uses the current locale for any locale-dependent character settings. **_ismbbalpha_l** is identical except that it uses the locale passed in.

## Remarks

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_ismbbalpha**|\<mbctype.h>|
|**_ismbbalpha_l**|\<mbctype.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).

## See also

[Byte Classification](../../c-runtime-library/byte-classification.md)<br/>
[_ismbb Routines](../../c-runtime-library/ismbb-routines.md)<br/>
