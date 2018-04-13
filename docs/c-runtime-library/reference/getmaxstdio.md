---
title: "_getmaxstdio | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
apiname: ["_getmaxstdio"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["_getmaxstdio", "getmaxstdio"]
dev_langs: ["C++"]
helpviewer_keywords: ["files [C++], number open", "_getmaxstdio function", "getmaxstdio function", "open files, getting number"]
ms.assetid: 700ca8ce-4a8c-4e00-9467-dfa9d6b831a0
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# _getmaxstdio

Returns the number of simultaneously open files permitted at the stream I/O level.

## Syntax

```C
int _getmaxstdio( void );
```

## Return Value

Returns a number that represents the number of simultaneously open files currently permitted at the `stdio` level.

## Remarks

Use [_setmaxstdio](setmaxstdio.md) to configure the number of simultaneously open files permitted at the `stdio` level.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|`_getmaxstdio`|\<stdio.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.

## Example

```C
// crt_setmaxstdio.c
// The program retrieves the maximum number
// of open files and prints the results
// to the console.

#include <stdio.h>

int main()
{
   printf( "%d\n", _getmaxstdio());

   _setmaxstdio(2048);

   printf( "%d\n", _getmaxstdio());
}
```

```Output
512
2048
```

## See also

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
