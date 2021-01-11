---
description: "Learn more about: _cabs"
title: "_cabs"
ms.date: "4/2/2020"
api_name: ["_cabs", "_o__cabs"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_cabs"]
helpviewer_keywords: ["cabs function", "absolute values", "_cabs function", "calculating absolute values"]
ms.assetid: fea292ee-1a39-4a0a-b416-4a189346ff26
---
# _cabs

Calculates the absolute value of a complex number.

## Syntax

```C
double _cabs(
   struct _complex z
);
```

### Parameters

*z*<br/>
Complex number.

## Return Value

**_cabs** returns the absolute value of its argument if successful. On overflow, **_cabs** returns **HUGE_VAL** and sets **errno** to **ERANGE**. You can change error handling with [_matherr](matherr.md).

## Remarks

The **_cabs** function calculates the absolute value of a complex number, which must be a structure of type [_complex](../../c-runtime-library/standard-types.md). The structure *z* is composed of a real component *x* and an imaginary component *y*. A call to **_cabs** produces a value equivalent to that of the expression `sqrt( z.x * z.x + z.y * z.y )`.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_cabs**|\<math.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_cabs.c
// Using _cabs, this program calculates
// the absolute value of a complex number.

#include <math.h>
#include <stdio.h>

int main( void )
{
   struct _complex number = { 3.0, 4.0 };
   double d;

   d = _cabs( number );
   printf( "The absolute value of %f + %fi is %f\n",
           number.x, number.y, d );
}
```

```Output
The absolute value of 3.000000 + 4.000000i is 5.000000
```

## See also

[Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
[abs, labs, llabs, _abs64](abs-labs-llabs-abs64.md)<br/>
[fabs, fabsf, fabsl](fabs-fabsf-fabsl.md)
