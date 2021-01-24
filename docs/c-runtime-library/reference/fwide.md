---
description: "Learn more about: fwide"
title: "fwide"
ms.date: "11/04/2016"
api_name: ["fwide"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["fwide"]
helpviewer_keywords: ["fwide function"]
ms.assetid: a4641f5b-d74f-4946-95d5-53a64610d28d
---
# fwide

Unimplemented.

## Syntax

```C
int fwide(
   FILE *stream,
   int mode;
);
```

### Parameters

*stream*<br/>
Pointer to **FILE** structure (ignored).

*mode*<br/>
The new width of the stream: positive for wide character, negative for byte, zero to leave unchanged. (This value is ignored.)

## Return Value

This function currently just returns *mode*.

## Remarks

The current version of this function does not comply with the Standard.

## Requirements

|Function|Required header|
|--------------|---------------------|
|**fwide**|\<wchar.h>|

For more information, see [Compatibility](../../c-runtime-library/compatibility.md).
