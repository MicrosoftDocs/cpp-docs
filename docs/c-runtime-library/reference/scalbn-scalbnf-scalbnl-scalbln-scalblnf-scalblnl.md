---
title: "scalbn, scalbnf, scalbnl, scalbln, scalblnf, scalblnl"
ms.date: "04/05/2018"
apiname: ["scalblnl", "scalbnl", "scalbnf", "scalblnf", "scalbn", "scalbln"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["scalblnf", "scalbnl", "scalblnl", "scalbln", "scalbn", "scalbnf"]
helpviewer_keywords: ["scalbn function", "scalbln function", "scalblnl function", "scalbnl function", "scalbnf function", "scalblnf function"]
ms.assetid: df2f1543-8e39-4af4-a5cf-29307e64807d
---
# scalbn, scalbnf, scalbnl, scalbln, scalblnf, scalblnl

Multiplies a floating-point number by an integral power of FLT_RADIX.

## Syntax

```C
double scalbn(
   double x,
   int exp
);
float scalbn(
   float x,
   int exp
);  // C++ only
long double scalbn(
   long double x,
   int exp
);  // C++ only
float scalbnf(
   float x,
   int exp
);
long double scalbnl(
   long double x,
   int exp
);
double scalbln(
   double x,
   long exp
);
float scalbln(
   float x,
   long exp
);  // C++ only
long double scalbln(
   long double x,
   long exp
);  // C++ only
float scalblnf(
   float x,
   long exp
);
long double scalblnl(
   long double x,
   long exp
);
```

### Parameters

*x*<br/>
Floating-point value.

*exp*<br/>
Integer exponent.

## Return Value

The **scalbn** functions return the value of *x* \* **FLT_RADIX**<sup>exp</sup> when successful. On overflow (depending on the sign of *x*), **scalbn** returns +/- **HUGE_VAL**; the **errno** value is set to **ERANGE**.

For more information about **errno** and possible error return values, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

**FLT_RADIX** is defined in \<float.h> as the native floating-point radix; on binary systems, it has a value of 2, and **scalbn** is equivalent to [ldexp](ldexp.md).

Because C++ allows overloading, you can call overloads of **scalbn** and **scalbln** that take and return **float** or **long** **double** types. In a C program, **scalbn** always takes a **double** and an **int** and returns a **double**, and **scalbln** always takes a **double** and a **long** and returns a **double**.

## Requirements

|Function|C header|C++ header|
|--------------|--------------|------------------|
|**scalbn**, **scalbnf**, **scalbnl**, **scalbln**, **scalblnf**, **scalblnl**|\<math.h>|\<cmath>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_scalbn.c
// Compile using: cl /W4 crt_scalbn.c
#include <math.h>
#include <stdio.h>

int main( void )
{
   double x = 6.4, y;
   int p = 3;

   y = scalbn( x, p );
   printf( "%2.1f times FLT_RADIX to the power of %d is %2.1f\n", x, p, y );
}
```

### Output

```Output
6.4 times FLT_RADIX to the power of 3 is 51.2
```

## See also

- [Floating-Point Support](../../c-runtime-library/floating-point-support.md)
- [frexp](frexp.md)
- [ldexp](ldexp.md)
- [modf, modff, modfl](modf-modff-modfl.md)
