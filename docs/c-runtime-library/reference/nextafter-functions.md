---
title: "nextafter, nextafterf, nextafterl, _nextafter, _nextafterf, nexttoward, nexttowardf, nexttowardl | Microsoft Docs"
ms.custom: ""
ms.date: "04/05/2018"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["nextafterf", "_nextafterf", "nextafter", "nextafterl", "_nextafter", "nexttoward", "nexttowardf", "nexttowardl"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["nextafter", "_nextafter", "nextafterf", "nextafterl", "_nextafterf", "math/nextafter", "math/nextafterf", "math/nextafterl", "nexttoward", "nexttowardf", "nexttowardl", "math/nexttoward", "math/nexttowardf", "math/nexttowardl"]
dev_langs: ["C++"]
helpviewer_keywords: ["_nextafter function", "nextafter function", "_nextafterf function", "nextafterf function", "nextafterl function", "nexttoward function", "nexttowardf function", "nexttowardl function"]
ms.assetid: 9785bfb9-de53-4bd0-9637-f05fa0c1f6ab
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# nextafter, nextafterf, nextafterl, _nextafter, _nextafterf, nexttoward, nexttowardf, nexttowardl

Returns the next representable floating-point value.

## Syntax

```C
double nextafter( double x, double y );
float nextafterf( float x, float y );
long double nextafterl( long double x, long double y );

double _nextafter( double x, double y );
float _nextafterf( float x, float y ); /* x64 only */

double nexttoward( double x, long double y );
float nexttowardf( float x, long double y );
long double nexttowardl( long double x, long double y );
```

```cpp
float nextafter( float x, float y ); /* C++ only, requires <cmath> */
long double nextafter( long double x, long double y ); /* C++ only, requires <cmath> */

float nexttoward( float x, long double y ); /* C++ only, requires <cmath> */
long double nexttoward( long double x, long double y ); /* C++ only, requires <cmath> */
```

### Parameters

*x*<br/>
The floating-point value to start from.

*y*<br/>
The floating-point value to go towards.

## Return Value

Returns the next representable floating-point value of the return type after *x* in the direction of *y*. If *x* and *y* are equal, the function returns *y*, converted to the return type, with no exception triggered. If *x* is not equal to *y*, and the result is a denormal or zero, the **FE_UNDERFLOW** and **FE_INEXACT** floating-point exception states are set, and the correct result is returned. If either *x* or *y* is a NAN, then the return value is one of the input NANs. If *x* is finite and the result is infinite or not representable in the type, a correctly signed infinity or NAN is returned, the **FE_OVERFLOW** and **FE_INEXACT** floating-point exception states are set, and **errno** is set to **ERANGE**.

## Remarks

The **nextafter** and **nexttoward** function families are equivalent, except for the parameter type of *y*. If *x* and *y* are equal, the value returned is *y* converted to the return type.

Because C++ allows overloading, if you include \<cmath> you can call overloads of **nextafter** and **nexttoward** that return **float** and **long** **double** types. In a C program, **nextafter** and **nexttoward** always return **double**.

The **_nextafter** and **_nextafterf** functions are Microsoft specific. The **_nextafterf** function is only available when compiling for x64.

## Requirements

|Routine|Required header (C)|Required header (C++)|
|-------------|---------------------------|-------------------------------|
|**nextafter**, **nextafterf**, **nextafterl**, **_nextafterf**, **nexttoward**, **nexttowardf**, **nexttowardl**|\<math.h>|\<math.h> or \<cmath>|
|**_nextafter**|\<float.h>|\<float.h> or \<cfloat>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
[isnan, _isnan, _isnanf](isnan-isnan-isnanf.md)<br/>
