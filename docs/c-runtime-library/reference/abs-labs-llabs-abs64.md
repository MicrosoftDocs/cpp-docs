---
title: "abs, labs, llabs, _abs64"
description: "API reference for abs, labs, llabs, and _abs64; which calculates the absolute value of a value."
ms.date: "04/05/2018"
api_name: ["abs", "_abs64", "labs", "llabs"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-utility-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_abs64", "STDLIB/_abs64", "abs", "CORECRT_MATH/abs", "STDLIB/abs", "CSTDLIB/abs", "labs", "CORECRT_MATH/labs", "llabs", "CORECRT_MATH/llabs"]
helpviewer_keywords: ["absolute values", "abs function", "abs64 function", "_abs64 function", "calculating absolute values"]
---
# `abs`, `labs`, `llabs`, `_abs64`

Calculates the absolute value of the argument.

## Syntax

```C
int abs( int n );
long labs( long n );
long long llabs( long long n );
__int64 _abs64( __int64 n );
```

```cpp
long abs( long n );   // C++ only
long long abs( long long n );   // C++ only
double abs( double n );   // C++ only
long double abs( long double n );   // C++ only
float abs( float n );   // C++ only
```

### Parameters

*`n`*\
Numeric value.

## Return value

The **`abs`**, **`labs`**, **`llabs`**, and **`_abs64`** functions return the absolute value of the parameter *`n`*. There's no error return.

## Remarks

Because C++ allows overloading, you can call overloads of **`abs`** that take and return **`long`**, **`long long`**, **`float`**, **`double`**, and **`long double`** values. These overloads are defined in the `<cmath>` header. In a C program, **`abs`** always takes and returns an **`int`**.

**Microsoft-specific**: The range of negative integers representable in any integral type is larger than the range of positive integers representable in that type. So, it's possible to supply an argument to these functions that can't be converted. If the absolute value of the argument can't be represented by the return type, the **`abs`** functions return the argument value unchanged. Specifically, `abs(INT_MIN)` returns `INT_MIN`, `labs(LONG_MIN)` returns `LONG_MIN`, `llabs(LLONG_MIN)` returns `LLONG_MIN`, and `_abs64(_I64_MIN)` returns `_I64_MIN`. Effectively, the **`abs`** functions can't be used to guarantee a positive value.

## Requirements

| Routine | Required C header | Required C++ header |
|---|---|---|
| **`abs`**, **`labs`**, **`llabs`** | `<math.h>` or `<stdlib.h>` | `<cmath>`, `<cstdlib>`, `<stdlib.h>` or `<math.h>` |
| **`_abs64`** | `<stdlib.h>` | `<cstdlib>` or `<stdlib.h>` |

To use the overloaded versions of **`abs`** in C++, you must include the `<cmath>` header.

## Example

This program computes and displays the absolute values of several numbers.

```C
// crt_abs.c
// Build: cl /W3 /TC crt_abs.c
// This program demonstrates the use of the abs function
// by computing and displaying the absolute values of
// several numbers.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main( void )
{
    int ix = -4;
    long lx = -41567L;
    long long llx = -9876543210LL;
    __int64 wx = -1;

    // absolute 32 bit integer value
    printf_s("The absolute value of %d is %d\n", ix, abs(ix));

    // absolute long integer value
    printf_s("The absolute value of %ld is %ld\n", lx, labs(lx));

    // absolute long long integer value
    printf_s("The absolute value of %lld is %lld\n", llx, llabs(llx));

    // absolute 64 bit integer value
    printf_s("The absolute value of 0x%.16I64x is 0x%.16I64x\n", wx,
        _abs64(wx));

    // Integer error cases:
    printf_s("Microsoft implementation-specific results:\n");
    printf_s(" abs(INT_MIN) returns %d\n", abs(INT_MIN));
    printf_s(" labs(LONG_MIN) returns %ld\n", labs(LONG_MIN));
    printf_s(" llabs(LLONG_MIN) returns %lld\n", llabs(LLONG_MIN));
    printf_s(" _abs64(_I64_MIN) returns 0x%.16I64x\n", _abs64(_I64_MIN));
}
```

```Output
The absolute value of -4 is 4
The absolute value of -41567 is 41567
The absolute value of -9876543210 is 9876543210
The absolute value of 0xffffffffffffffff is 0x0000000000000001
Microsoft implementation-specific results:
abs(INT_MIN) returns -2147483648
labs(LONG_MIN) returns -2147483648
llabs(LLONG_MIN) returns -9223372036854775808
_abs64(_I64_MIN) returns 0x8000000000000000
```

## See also

[Data conversion](../data-conversion.md)\
[Math and floating-point support](../floating-point-support.md)\
[`_cabs`](cabs.md)\
[`fabs`, `fabsf`, `fabsl`](fabs-fabsf-fabsl.md)\
[`imaxabs`](imaxabs.md)
