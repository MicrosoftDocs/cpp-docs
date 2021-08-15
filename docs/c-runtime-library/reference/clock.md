---
description: "Learn more about: clock"
title: "clock"
ms.date: "11/04/2016"
api_name: ["clock"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-time-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["clock"]
helpviewer_keywords: ["processor time used, calculating", "time, calculating processor", "clock function", "processor time used", "calculating processor time used"]
ms.assetid: 3e1853dd-498f-49ba-b06a-f2315f20904e
---
# clock

Calculates the wall-clock time used by the calling process.

## Syntax

```C
clock_t clock( void );
```

## Return Value

The elapsed time since the CRT initialization at the start of the process, measured in **CLOCKS_PER_SEC** units per second. If the elapsed time is unavailable or has exceeded the maximum positive time that can be recorded as a **clock_t** type, the function returns the value `(clock_t)(-1)`.

## Remarks

The **clock** function tells how much wall-clock time has passed since the CRT initialization during process start. Note that this function does not strictly conform to ISO C, which specifies net CPU time as the return value. To obtain CPU times, use the Win32 [GetProcessTimes](/windows/win32/api/processthreadsapi/nf-processthreadsapi-getprocesstimes) function. To determine the elapsed time in seconds, divide the value returned by the **clock** function by the macro **CLOCKS_PER_SEC**.

Given enough time, the value returned by **clock** can exceed the maximum positive value of **clock_t**. When the process has run longer, the value returned by **clock** is always `(clock_t)(-1)`, as specified by the ISO C99 standard (7.23.2.1) and ISO C11 standard (7.27.2.1). Microsoft implements **clock_t** as a **`long`**, a signed 32-bit integer, and the **CLOCKS_PER_SEC** macro is defined as 1000. This gives a maximum **clock** function return value of 2147483.647 seconds, or about 24.8 days. Do not rely on the value returned by **clock** in processes that have run for longer than this amount of time. You can use the 64-bit [time](time-time32-time64.md) function or the Windows [QueryPerformanceCounter](/windows/win32/api/profileapi/nf-profileapi-queryperformancecounter) function to record process elapsed times of many years.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**clock**|\<time.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_clock.c
// This sample uses clock() to 'sleep' for three
// seconds, then determines how long it takes
// to execute an empty loop 600000000 times.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Pauses for a specified number of clock cycles.
void do_sleep( clock_t wait )
{
   clock_t goal;
   goal = wait + clock();
   while( goal > clock() )
      ;
}

const long num_loops = 600000000L;

int main( void )
{
   long    i = num_loops;
   clock_t start, finish;
   double  duration;

   // Delay for a specified time.
   printf( "Delay for three seconds\n" );
   do_sleep( (clock_t)3 * CLOCKS_PER_SEC );
   printf( "Done!\n" );

   // Measure the duration of an event.
   start = clock();
   while( i-- )
      ;
   finish = clock();
   duration = (double)(finish - start) / CLOCKS_PER_SEC;
   printf( "Time to do %ld empty loops is ", num_loops );
   printf( "%2.3f seconds\n", duration );
}
```

```Output
Delay for three seconds
Done!
Time to do 600000000 empty loops is 1.354 seconds
```

## See also

[Time Management](../../c-runtime-library/time-management.md)<br/>
[difftime, _difftime32, _difftime64](difftime-difftime32-difftime64.md)<br/>
[time, _time32, _time64](time-time32-time64.md)<br/>
