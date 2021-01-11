---
description: "Learn more about: _get_invalid_parameter_handler, _get_thread_local_invalid_parameter_handler"
title: "_get_invalid_parameter_handler, _get_thread_local_invalid_parameter_handler"
ms.date: "4/2/2020"
api_name: ["_get_invalid_parameter_handler", "_get_thread_local_invalid_parameter_handler", "_o__get_invalid_parameter_handler", "_o__get_thread_local_invalid_parameter_handler"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-runtime-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_get_invalid_parameter_handler", "stdlib/_get_invalid_parameter_handler", "_get_thread_local_invalid_parameter_handler", "stdlib/_get_thread_local_invalid_parameter_handler"]
helpviewer_keywords: ["_get_thread_local_invalid_parameter_handler function", "_get_invalid_parameter_handler function"]
ms.assetid: a176da0e-38ca-4d99-92bb-b0e2b8072f53
---
# _get_invalid_parameter_handler, _get_thread_local_invalid_parameter_handler

Gets the function that is called when the CRT detects an invalid argument.

## Syntax

```C
_invalid_parameter_handler _get_invalid_parameter_handler(void);
_invalid_parameter_handler _get_thread_local_invalid_parameter_handler(void);
```

## Return Value

A pointer to the currently set invalid parameter handler function, or a null pointer if none has been set.

## Remarks

The **_get_invalid_parameter_handler** function gets the currently set global invalid parameter handler. It returns a null pointer if no global invalid parameter handler was set. Similarly, the **_get_thread_local_invalid_parameter_handler** gets the current thread-local invalid parameter handler of the thread it is called on, or a null pointer if no handler was set. For information about how to set global and thread-local invalid parameter handlers, see [_set_invalid_parameter_handler, _set_thread_local_invalid_parameter_handler](set-invalid-parameter-handler-set-thread-local-invalid-parameter-handler.md).

The returned invalid parameter handler function pointer has the following type:

```C
typedef void (__cdecl* _invalid_parameter_handler)(
    wchar_t const*,
    wchar_t const*,
    wchar_t const*,
    unsigned int,
    uintptr_t
    );
```

For details on the invalid parameter handler, see the prototype in [_set_invalid_parameter_handler, _set_thread_local_invalid_parameter_handler](set-invalid-parameter-handler-set-thread-local-invalid-parameter-handler.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_get_invalid_parameter_handler**, **_get_thread_local_invalid_parameter_handler**|C: \<stdlib.h><br /><br /> C++: \<cstdlib> or \<stdlib.h>|

The **_get_invalid_parameter_handler** and **_get_thread_local_invalid_parameter_handler** functions are Microsoft-specific. For compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[_set_invalid_parameter_handler, _set_thread_local_invalid_parameter_handler](set-invalid-parameter-handler-set-thread-local-invalid-parameter-handler.md)<br/>
[Security-Enhanced Versions of CRT Functions](../../c-runtime-library/security-enhanced-versions-of-crt-functions.md)<br/>
