---
title: "_cwait | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["_cwait"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-process-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["_cwait"]
dev_langs: ["C++"]
helpviewer_keywords: ["cwait function", "_cwait function"]
ms.assetid: d9b596b5-45f4-4e03-9896-3f383cb922b8
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# _cwait

Waits until another process terminates.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
intptr_t _cwait(
   int *termstat,
   intptr_t procHandle,
   int action
);
```

### Parameters

*termstat*<br/>
Pointer to a buffer where the result code of the specified process will be stored, or **NULL**.

*procHandle*<br/>
The handle to the process to wait on (that is, the process that has to terminate before **_cwait** can return).

*action*<br/>
NULL: Ignored by Windows operating system applications; for other applications: action code to perform on *procHandle*.

## Return Value

When the specified process has successfully completed, returns the handle of the specified process and sets *termstat* to the result code that's returned by the specified process. Otherwise, returns -1 and sets **errno** as follows.

|Value|Description|
|-----------|-----------------|
|**ECHILD**|No specified process exists, *procHandle* is invalid, or the call to the [GetExitCodeProcess](/windows/desktop/api/processthreadsapi/nf-processthreadsapi-getexitcodeprocess) or [WaitForSingleObject](/windows/desktop/api/synchapi/nf-synchapi-waitforsingleobject) API failed.|
|**EINVAL**|*action* is invalid.|

For more information about these and other return codes, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

The **_cwait** function waits for the termination of the process ID of the specified process that's provided by *procHandle*. The value of *procHandle* that's passed to **_cwait** should be the value that's returned by the call to the [_spawn](../../c-runtime-library/spawn-wspawn-functions.md) function that created the specified process. If the process ID terminates before **_cwait** is called, **_cwait** returns immediately. **_cwait** can be used by any process to wait for any other known process for which a valid handle (*procHandle*) exists.

*termstat* points to a buffer where the return code of the specified process will be stored. The value of *termstat* indicates whether the specified process terminated normally by calling the Windows [ExitProcess](/windows/desktop/api/processthreadsapi/nf-processthreadsapi-exitprocess) API. **ExitProcess** is called internally if the specified process calls **exit** or **_exit**, returns from **main**, or reaches the end of **main**. For more information about the value that's passed back through *termstat*, see [GetExitCodeProcess](/windows/desktop/api/processthreadsapi/nf-processthreadsapi-getexitcodeprocess). If **_cwait** is called by using a **NULL** value for *termstat*, the return code of the specified process is not stored.

The *action* parameter is ignored by the Windows operating system because parent-child relationships are not implemented in these environments.

Unless *procHandle* is -1 or -2 (handles to the current process or thread), the handle will be closed. Therefore, in this situation, do not use the returned handle.

## Requirements

|Routine|Required header|Optional header|
|-------------|---------------------|---------------------|
|**_cwait**|\<process.h>|\<errno.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_cwait.c
// compile with: /c
// This program launches several processes and waits
// for a specified process to finish.

#define _CRT_RAND_S

#include <windows.h>
#include <process.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

// Macro to get a random integer within a specified range
#define getrandom( min, max ) (( (rand_s (&number), number) % (int)((( max ) + 1 ) - ( min ))) + ( min ))

struct PROCESS
{
   int     nPid;
   char    name[40];
} process[4] = { { 0, "Ann" }, { 0, "Beth" }, { 0, "Carl" }, { 0, "Dave" } };

int main( int argc, char *argv[] )
{
   int termstat, c;
   unsigned int number;

   srand( (unsigned)time( NULL ) );    // Seed randomizer

   // If no arguments, this is the calling process
   if ( argc == 1 )
   {
      // Spawn processes in numeric order
      for ( c = 0; c < 4; c++ ) {
         _flushall();
         process[c].nPid = _spawnl( _P_NOWAIT, argv[0], argv[0],
                                    process[c].name, NULL );
      }

      // Wait for randomly specified process, and respond when done
      c = getrandom( 0, 3 );
      printf( "Come here, %s.\n", process[c].name );
      _cwait( &termstat, process[c].nPid, _WAIT_CHILD );
      printf( "Thank you, %s.\n", process[c].name );

   }
   // If there are arguments, this must be a spawned process
   else
   {
      // Delay for a period that's determined by process number
      Sleep( (argv[1][0] - 'A' + 1) * 1000L );
      printf( "Hi, Dad. It's %s.\n", argv[1] );
   }
}
```

```Output
Hi, Dad. It's Ann.
Come here, Ann.
Thank you, Ann.
Hi, Dad. It's Beth.
Hi, Dad. It's Carl.
Hi, Dad. It's Dave.
```

## See also

[Process and Environment Control](../../c-runtime-library/process-and-environment-control.md)<br/>
[_spawn, _wspawn Functions](../../c-runtime-library/spawn-wspawn-functions.md)<br/>
