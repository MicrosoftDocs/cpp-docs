---
description: "Learn more about: _set_abort_behavior"
title: "_set_abort_behavior"
ms.date: 07/07/2022
api_name: ["_set_abort_behavior", "_o__set_abort_behavior"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-runtime-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["STDLIB/_set_abort_behavior", "_set_abort_behavior", "set_abort_behavior"]
helpviewer_keywords: ["aborting programs", "_set_abort_behavior function", "set_abort_behavior function"]
---
# `_set_abort_behavior`

Specifies the action to be taken when a program is abnormally terminated.

> [!NOTE]
> Do not use the [`abort`](abort.md) function to shut down a Microsoft Store app, except in testing or debugging scenarios. Programmatic or UI ways to close a Store app are not permitted according to the [Microsoft Store policies](/legal/windows/agreements/store-policies). For more information, see [UWP app lifecycle](/windows/uwp/launch-resume/app-lifecycle).

## Syntax

```C
unsigned int _set_abort_behavior(
   unsigned int flags,
   unsigned int mask
);
```

### Parameters

*`flags`*\
New value of the `abort` flags.

*`mask`*\
Mask for the `abort` flags bits to set.

## Return value

The old value of the flags.

## Remarks

There are two [`abort`](abort.md) flags: `_WRITE_ABORT_MSG` and `_CALL_REPORTFAULT`. `_WRITE_ABORT_MSG` determines whether a helpful text message is printed when a program is abnormally terminated. The message states that the application has called the `abort` function. The default behavior is to print the message. `_CALL_REPORTFAULT`, if set, invokes the Windows Error Reporting Service mechanism (formerly known as Dr. Watson) to report failures to Microsoft when `abort` is called. By default, crash dump reporting is enabled in non-DEBUG builds. If the Windows error reporting handler isn't invoked, then `abort` calls [`_exit`](exit-exit-exit.md) to terminate the process with exit code 3 and returns control to the parent process or the operating system. `_exit` doesn't flush stream buffers or do `atexit`/`_onexit` processing.

For Windows compatibility reasons, when `abort` calls `_exit`, it may invoke the Windows [`ExitProcess`](/windows/win32/api/processthreadsapi/nf-processthreadsapi-exitprocess) API, which in turn allows DLL termination routines to run. Destructors aren't run in the executable, but the same may not be true of DLLs loaded in the executable's process space. This behavior doesn't strictly conform to the C++ standard. To immediately terminate a process including any DLLs, use the Windows [`TerminateProcess`](/windows/desktop/api/processthreadsapi/nf-processthreadsapi-terminateprocess) API. You can also register an abort signal handler that invokes `TerminateProcess` for standard-compliant behavior. Compliant behavior may come at some cost in Windows compatibility.

By default, this function's global state is scoped to the application. To change it, see [Global state in the CRT](../global-state.md).

## Requirements

| Routine | Required header |
|--|--|
| **`_set_abort_behavior`** | `<stdlib.h>` |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_set_abort_behavior.c
// compile with: /TC
#include <stdlib.h>

int main()
{
   printf("Suppressing the abort message. If successful, this message"
          " will be the only output.\n");
   // Suppress the abort message
   _set_abort_behavior( 0, _WRITE_ABORT_MSG);
   abort();
}
```

```Output
Suppressing the abort message. If successful, this message will be the only output.
```

## See also

[`abort`](abort.md)
