---
description: "Learn more about: atexit"
title: "atexit"
ms.date: "11/04/2016"
api_name: ["atexit"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["atexit"]
helpviewer_keywords: ["processing, at exit", "atexit function"]
ms.assetid: 92c156d2-8052-4e58-96dc-00128baac6f9
---
# atexit

Processes the specified function at exit.

## Syntax

```C
int atexit(
   void (__cdecl *func )( void )
);
```

### Parameters

*func*<br/>
Function to be called.

## Return Value

**atexit** returns 0 if successful, or a nonzero value if an error occurs.

## Remarks

The **atexit** function is passed the address of a function *func* to be called when the program terminates normally. Successive calls to **atexit** create a register of functions that are executed in last-in, first-out (LIFO) order. The functions passed to **atexit** cannot take parameters. **atexit** and **_onexit** use the heap to hold the register of functions. Thus, the number of functions that can be registered is limited only by heap memory.

The code in the **atexit** function should not contain any dependency on any DLL which could have already been unloaded when the **atexit** function is called.

To generate an ANSI-compliant application, use the ANSI-standard **atexit** function (rather than the similar **_onexit** function).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**atexit**|\<stdlib.h>|

## Example

This program pushes four functions onto the stack of functions to be executed when **atexit** is called. When the program exits, these programs are executed on a last in, first out basis.

```C
// crt_atexit.c
#include <stdlib.h>
#include <stdio.h>

void fn1( void ), fn2( void ), fn3( void ), fn4( void );

int main( void )
{
   atexit( fn1 );
   atexit( fn2 );
   atexit( fn3 );
   atexit( fn4 );
   printf( "This is executed first.\n" );
}

void fn1()
{
   printf( "next.\n" );
}

void fn2()
{
   printf( "executed " );
}

void fn3()
{
   printf( "is " );
}

void fn4()
{
   printf( "This " );
}
```

```Output
This is executed first.
This is executed next.
```

## See also

[Process and Environment Control](../../c-runtime-library/process-and-environment-control.md)<br/>
[abort](abort.md)<br/>
[exit, _Exit, _exit](exit-exit-exit.md)<br/>
[_onexit, _onexit_m](onexit-onexit-m.md)<br/>
