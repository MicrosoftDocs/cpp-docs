---
description: "Learn more about: difftime, _difftime32, _difftime64"
title: "difftime, _difftime32, _difftime64"
ms.date: "4/2/2020"
api_name: ["_difftime32", "difftime", "_difftime64", "_o__difftime32", "_o__difftime64"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-time-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_difftime64", "difftime", "difftime64", "_difftime32", "difftime32"]
helpviewer_keywords: ["_difftime32 function", "difftime function", "time, finding the difference", "difftime64 function", "_difftime64 function", "difftime32 function"]
ms.assetid: 4cc0ac2b-fc7b-42c0-8283-8c9d10c566d0
---
# difftime, _difftime32, _difftime64

Finds the difference between two times.

## Syntax

```C
double difftime( time_t timeEnd, time_t timeStart );
double _difftime32( __time32_t timeEnd, __time32_t timeStart );
double _difftime64( __time64_t timeEnd, __time64_t timeStart );
```

### Parameters

*timeEnd*<br/>
Ending time.

*timeStart*<br/>
Beginning time.

## Return Value

**difftime** returns the elapsed time in seconds, from *timeStart* to *timeEnd*. The value returned is a double precision floating-point number. The return value may be 0, indicating an error.

## Remarks

The **difftime** function computes the difference between the two supplied time values *timeStart* and *timeEnd*.

The time value supplied must fit within the range of **time_t**. **time_t** is a 64-bit value. Thus, the end of the range was extended from 23:59:59 January 18, 2038, UTC to 23:59:59, December 31, 3000. The lower range of **time_t** is still midnight, January 1, 1970.

**difftime** is an inline function that evaluates to either **_difftime32** or **_difftime64** depending on whether **_USE_32BIT_TIME_T** is defined. _difftime32 and _difftime64 can be used directly to force the use of a particular size of the time type.

These functions validate their parameters. If either of the parameters is zero or negative, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions return 0 and set **errno** to **EINVAL**.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**difftime**|\<time.h>|
|**_difftime32**|\<time.h>|
|**_difftime64**|\<time.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```cpp
// crt_difftime.c
// This program calculates the amount of time
// needed to do a floating-point multiply 100 million times.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <float.h>

double RangedRand( float range_min, float range_max)
{
   // Generate random numbers in the half-closed interval
   // [range_min, range_max). In other words,
   // range_min <= random number < range_max
   return ((double)rand() / (RAND_MAX + 1) * (range_max - range_min)
            + range_min);
}

int main( void )
{
   time_t   start, finish;
   long     loop;
   double   result, elapsed_time;
   double   arNums[3];

   // Seed the random-number generator with the current time so that
   // the numbers will be different every time we run.
   srand( (unsigned)time( NULL ) );

   arNums[0] = RangedRand(1, FLT_MAX);
   arNums[1] = RangedRand(1, FLT_MAX);
   arNums[2] = RangedRand(1, FLT_MAX);
   printf( "Using floating point numbers %.5e %.5e %.5e\n", arNums[0], arNums[1], arNums[2] );

   printf( "Multiplying 2 numbers 100 million times...\n" );

   time( &start );
   for( loop = 0; loop < 100000000; loop++ )
      result = arNums[loop%3] * arNums[(loop+1)%3];
   time( &finish );

   elapsed_time = difftime( finish, start );
   printf( "\nProgram takes %6.0f seconds.\n", elapsed_time );
}
```

```Output
Using random floating point numbers 1.04749e+038 2.01482e+038 1.72737e+038
Multiplying 2 floating point numbers 100 million times...
Program takes      3 seconds.
```

## See also

[Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
[Time Management](../../c-runtime-library/time-management.md)<br/>
[time, _time32, _time64](time-time32-time64.md)<br/>
