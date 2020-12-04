---
description: "Learn more about: imaxdiv"
title: "imaxdiv"
ms.date: "04/05/2018"
api_name: ["imaxdiv"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-utility-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["imaxdiv"]
helpviewer_keywords: ["imaxdiv function"]
ms.assetid: 7d90126f-fdc2-4986-9cdf-94e4c9123d26
---
# imaxdiv

Computes the quotient and the remainder of two integer values of any size as a single operation.

## Syntax

```C
imaxdiv_t imaxdiv(
   intmax_t numer,
   intmax_t denom
);
```

### Parameters

*numer*<br/>
The numerator.

*denom*<br/>
The denominator.

## Return Value

**imaxdiv** called with arguments of type [intmax_t](../../c-runtime-library/standard-types.md) returns a structure of type [imaxdiv_t](../../c-runtime-library/standard-types.md) that comprises the quotient and the remainder.

## Remarks

The **imaxdiv** function divides *numer* by *denom* and thereby computes the quotient and the remainder. The **imaxdiv_t** structure contains the quotient, **intmax_t** **quot**, and the remainder, **intmax_t** **rem**. The sign of the quotient is the same as that of the mathematical quotient. Its absolute value is the largest integer that is less than the absolute value of the mathematical quotient. If the denominator is 0, the program terminates with an error message.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**imaxdiv**|\<inttypes.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_imaxdiv.c
// Build using: cl /W3 /Tc crt_imaxdiv.c
// This example takes two integers as command-line
// arguments and calls imaxdiv to divide the first
// argument by the second, then displays the results.

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int main(int argc, char *argv[])
{
   intmax_t x,y;
   imaxdiv_t div_result;

   x = atoll(argv[1]);
   y = atoll(argv[2]);

   printf("The call to imaxdiv(%lld, %lld)\n", x, y);
   div_result = imaxdiv(x, y);
   printf("results in a quotient of %lld, and a remainder of %lld\n\n",
          div_result.quot, div_result.rem);
}
```

When built and then called with command line parameters of `9460730470000000 8766`, the code generates this output:

```Output
The call to imaxdiv(9460730470000000, 8766)
results in a quotient of 1079252848505, and a remainder of 5170
```

## See also

[Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
[div](div.md)<br/>
[ldiv, lldiv](./div.md)<br/>
