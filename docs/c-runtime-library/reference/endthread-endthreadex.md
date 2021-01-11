---
description: "Learn more about: _endthread, _endthreadex"
title: "_endthread, _endthreadex"
ms.date: "4/2/2020"
api_name: ["_endthread", "_endthreadex", "_o__endthread", "_o__endthreadex"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-runtime-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_endthread", "endthreadex", "_endthreadex", "endthread"]
helpviewer_keywords: ["_endthread function", "endthread function", "terminating threads", "endthreadex function", "_endthreadex function", "threading [C++], terminating threads"]
ms.assetid: 18a91f2f-659e-40b4-b266-ec12dcf2abf5
---
# _endthread, _endthreadex

Terminates a thread; **_endthread** terminates a thread that's created by **_beginthread** and  **_endthreadex** terminates a thread that's created by **_beginthreadex**.

## Syntax

```C
void _endthread( void );
void _endthreadex(
   unsigned retval
);
```

### Parameters

*retval*<br/>
Thread exit code.

## Remarks

You can call **_endthread** or **_endthreadex** explicitly to terminate a thread; however, **_endthread** or **_endthreadex** is called automatically when the thread returns from the routine passed as a parameter to **_beginthread** or **_beginthreadex**. Terminating a thread with a call to **endthread** or **_endthreadex** helps ensure proper recovery of resources allocated for the thread.

> [!NOTE]
> For an executable file linked with Libcmt.lib, do not call the Win32 [ExitThread](/windows/win32/api/processthreadsapi/nf-processthreadsapi-exitthread) API; this prevents the run-time system from reclaiming allocated resources. **_endthread** and **_endthreadex** reclaim allocated thread resources and then call **ExitThread**.

**_endthread** automatically closes the thread handle. (This behavior differs from the Win32 **ExitThread** API.) Therefore, when you use **_beginthread** and **_endthread**, do not explicitly close the thread handle by calling the Win32 [CloseHandle](/windows/win32/api/handleapi/nf-handleapi-closehandle) API.

Like the Win32 **ExitThread** API, **_endthreadex** does not close the thread handle. Therefore, when you use **_beginthreadex** and **_endthreadex**, you must close the thread handle by calling the Win32 **CloseHandle** API.

> [!NOTE]
> **_endthread** and **_endthreadex** cause C++ destructors pending in the thread not to be called.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Function|Required header|
|--------------|---------------------|
|**_endthread**|\<process.h>|
|**_endthreadex**|\<process.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

Multithreaded versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md) only.

## Example

See the example for [_beginthread](beginthread-beginthreadex.md).

## See also

[Process and Environment Control](../../c-runtime-library/process-and-environment-control.md)<br/>
[_beginthread, _beginthreadex](beginthread-beginthreadex.md)<br/>
