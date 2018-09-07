---
title: "towctrans | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["towctrans"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-string-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["towctrans"]
dev_langs: ["C++"]
helpviewer_keywords: ["towctrans function"]
ms.assetid: 1ed1e70d-7b31-490f-a7d9-42564b5924ca
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# towctrans

Transforms a character.

## Syntax

```C
wint_t towctrans(
   wint_t c,
   wctrans_t category
);
```

### Parameters

*c*<br/>
The character you want to transform.

*category*<br/>
An identifier that contains the return value of [wctrans](wctrans.md).

## Return Value

The character *c*, after **towctrans** used the transform rule in *category*.

## Remarks

The value of *category* must have been returned by an earlier successful call to [wctrans](wctrans.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**towctrans**|\<wctype.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

See **wctrans** for a sample that uses **towctrans**.

## See also

[Data Conversion](../../c-runtime-library/data-conversion.md)<br/>
