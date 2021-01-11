---
description: "Learn more about: __pctype_func"
title: "__pctype_func"
ms.date: "4/2/2020"
api_name: ["__pctype_func", "_o___pctype_func"]
api_location: ["msvcrt.dll", "msvcr110_clr0400.dll", "msvcr110.dll", "msvcr120.dll", "msvcr90.dll", "msvcr100.dll", "msvcr80.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["__pctype_func"]
helpviewer_keywords: ["__pctype_func"]
ms.assetid: d52b8add-d07d-4516-a22f-e836cde0c57f
---
# __pctype_func

Retrieves a pointer to an array of character classification information.

## Syntax

```cpp
const unsigned short *__pctype_func(
   )
```

## Return Value

A pointer to an array of character classification information.

## Remarks

The information in the character classification table is for internal use only, and is used by various functions that classify characters of type **`char`**. For more information, see the `Remarks` section of [_pctype, _pwctype, _wctype, _mbctype, _mbcasemap](../c-runtime-library/pctype-pwctype-wctype-mbctype-mbcasemap.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|__pctype_func|ctype.h|

## See also

[_pctype, _pwctype, _wctype, _mbctype, _mbcasemap](../c-runtime-library/pctype-pwctype-wctype-mbctype-mbcasemap.md)
