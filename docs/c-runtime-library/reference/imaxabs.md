---
title: "imaxabs | Microsoft Docs"
ms.custom: ""
ms.date: "04/05/2018"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["imaxabs"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-utility-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["imaxabs"]
dev_langs: ["C++"]
helpviewer_keywords: ["imaxabs function"]
ms.assetid: de2566a3-1415-4e9a-91b5-7ac3a49ebf5e
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# imaxabs

Calculates the absolute value of an integer of any size.

## Syntax

```C
intmax_t imaxabs(
   intmax_t n
);
```

### Parameters

*n*<br/>
Integer value.

## Return Value

The **imaxabs** function returns the absolute value of the argument. There is no error return.

> [!NOTE]
> Because the range of negative integers that can be represented by using **intmax_t** is larger than the range of positive integers that can be represented, it's possible to supply an argument to **imaxabs** that can’t be converted. If the absolute value of the argument cannot be represented by the return type, the behavior of **imaxabs** is undefined.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**imaxabs**|\<inttypes.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).

## Example

```C
// crt_imaxabs.c
// Build using: cl /W3 /Tc crt_imaxabs.c
// This example calls imaxabs to compute an
// absolute value, then displays the results.

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int main(int argc, char *argv[])
{
   intmax_t x = LLONG_MIN + 2;

   printf("The absolute value of %lld is %lld\n", x, imaxabs(x));
}
```

```Output
The absolute value of -9223372036854775806 is 9223372036854775806
```

## See also

[Data Conversion](../../c-runtime-library/data-conversion.md)<br/>
[Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
[abs, labs, llabs, _abs64](abs-labs-llabs-abs64.md)<br/>
[_cabs](cabs.md)<br/>
[fabs, fabsf, fabsl](fabs-fabsf-fabsl.md)<br/>
