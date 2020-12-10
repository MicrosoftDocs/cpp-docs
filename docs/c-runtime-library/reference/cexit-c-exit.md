---
description: "Learn more about: _cexit, _c_exit"
title: "_cexit, _c_exit"
ms.date: "4/2/2020"
api_name: ["_c_exit", "_cexit", "_o__cexit"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-runtime-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_cexit", "c_exit", "_c_exit", "cexit"]
helpviewer_keywords: ["cleanup operations during processes", "cexit function", "_c_exit function", "_cexit function", "c_exit function"]
ms.assetid: f3072045-9924-4b1a-9fef-b0dcd6d12663
---
# _cexit, _c_exit

Performs cleanup operations and returns without terminating the process.

## Syntax

```C
void _cexit( void );
void _c_exit( void );
```

## Remarks

The **_cexit** function calls, in last-in, first-out (LIFO) order, the functions registered by **atexit** and **_onexit**. Then **_cexit** flushes all I/O buffers and closes all open streams before returning. **_c_exit** is the same as **_exit** but returns to the calling process without processing **atexit** or **_onexit** or flushing stream buffers. The behavior of **exit**, **_exit**, **_cexit**, and **_c_exit** is shown in the following table.

|Function|Behavior|
|--------------|--------------|
|**exit**|Performs complete C library termination procedures, terminates process, and exits with supplied status code.|
|**_exit**|Performs quick C library termination procedures, terminates process, and exits with supplied status code.|
|**_cexit**|Performs complete C library termination procedures and returns to caller, but does not terminate process.|
|**_c_exit**|Performs quick C library termination procedures and returns to caller, but does not terminate process.|

When you call the **_cexit** or **_c_exit** functions, the destructors for any temporary or automatic objects that exist at the time of the call are not called. An automatic object is an object that is defined in a function where the object is not declared to be static. A temporary object is an object created by the compiler. To destroy an automatic object before calling **_cexit** or **_c_exit**, explicitly call the destructor for the object, as follows:

```cpp
myObject.myClass::~myClass( );
```

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_cexit**|\<process.h>|
|**_c_exit**|\<process.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Process and Environment Control](../../c-runtime-library/process-and-environment-control.md)<br/>
[abort](abort.md)<br/>
[atexit](atexit.md)<br/>
[_exec, _wexec Functions](../../c-runtime-library/exec-wexec-functions.md)<br/>
[exit, _Exit, _exit](exit-exit-exit.md)<br/>
[_onexit, _onexit_m](onexit-onexit-m.md)<br/>
[_spawn, _wspawn Functions](../../c-runtime-library/spawn-wspawn-functions.md)<br/>
[system, _wsystem](system-wsystem.md)<br/>
