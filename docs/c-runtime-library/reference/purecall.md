---
description: "Learn more about: _purecall"
title: "_purecall"
ms.date: "4/2/2020"
api_name: ["_purecall", "_o__purecall"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ntoskrnl.exe", "ucrtbase.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["purecall", "_purecall"]
helpviewer_keywords: ["_purecall function", "purecall function"]
ms.assetid: 56135d9b-3403-4e22-822d-e714523801cc
---
# _purecall

The default pure virtual function call error handler. The compiler generates code to call this function when a pure virtual member function is called.

## Syntax

```C
extern "C" int __cdecl _purecall();
```

## Remarks

The **_purecall** function is a Microsoft-specific implementation detail of the Microsoft C++ compiler. This function is not intended to be called by your code directly, and it has no public header declaration. It is documented here because it is a public export of the C Runtime Library.

A call to a pure virtual function is an error because it has no implementation. The compiler generates code to invoke the **_purecall** error handler function when a pure virtual function is called. By default, **_purecall** terminates the program. Before terminating, the **_purecall** function invokes a **_purecall_handler** function if one has been set for the process. You can install your own error handler function for pure virtual function calls, to catch them for debugging or reporting purposes. To use your own error handler, create a function that has the **_purecall_handler** signature, then use [_set_purecall_handler](get-purecall-handler-set-purecall-handler.md) to make it the current handler.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

The **_purecall** function does not have a header declaration. The **_purecall_handler** typedef is defined in \<stdlib.h>.

## See also

[Alphabetical Function Reference](crt-alphabetical-function-reference.md)<br/>
[_get_purecall_handler, _set_purecall_handler](get-purecall-handler-set-purecall-handler.md)<br/>
