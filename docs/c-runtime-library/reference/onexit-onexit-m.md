---
description: "Learn more about: _onexit, _onexit_m"
title: "_onexit, _onexit_m"
ms.date: "11/04/2016"
api_name: ["_onexit", "_onexit_m"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_onexit", "onexit_m", "onexit", "_onexit_m"]
helpviewer_keywords: ["onexit function", "registry, registering exit routines", "_onexit_m function", "onexit_m function", "_onexit function", "registering exit routines", "registering to be called on exit"]
ms.assetid: 45743298-0e2f-46cf-966d-1ca44babb443
---
# _onexit, _onexit_m

Registers a routine to be called at exit time.

## Syntax

```C
_onexit_t _onexit(
   _onexit_t function
);
_onexit_t_m _onexit_m(
   _onexit_t_m function
);
```

### Parameters

*function*<br/>
Pointer to a function to be called at exit.

## Return Value

**_onexit** returns a pointer to the function if successful or **NULL** if there is no space to store the function pointer.

## Remarks

The **_onexit** function is passed the address of a function (*function*) to be called when the program terminates normally. Successive calls to **_onexit** create a register of functions that are executed in LIFO (last-in-first-out) order. The functions passed to **_onexit** cannot take parameters.

In the case when **_onexit** is called from within a DLL, routines registered with **_onexit** run on a DLL's unloading after **DllMain** is called with DLL_PROCESS_DETACH.

**_onexit** is a Microsoft extension. For ANSI portability, use [atexit](atexit.md). The **_onexit_m** version of the function is for mixed mode use.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_onexit**|\<stdlib.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_onexit.c

#include <stdlib.h>
#include <stdio.h>

/* Prototypes */
int fn1(void), fn2(void), fn3(void), fn4 (void);

int main( void )
{
   _onexit( fn1 );
   _onexit( fn2 );
   _onexit( fn3 );
   _onexit( fn4 );
   printf( "This is executed first.\n" );
}

int fn1()
{
   printf( "next.\n" );
   return 0;
}

int fn2()
{
   printf( "executed " );
   return 0;
}

int fn3()
{
   printf( "is " );
   return 0;
}

int fn4()
{
   printf( "This " );
   return 0;
}
```

### Output

```Output
This is executed first.
This is executed next.
```

## See also

[Process and Environment Control](../../c-runtime-library/process-and-environment-control.md)<br/>
[atexit](atexit.md)<br/>
[exit, _Exit, _exit](exit-exit-exit.md)<br/>
[__dllonexit](../../c-runtime-library/dllonexit.md)<br/>
