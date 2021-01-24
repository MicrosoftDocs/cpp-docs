---
description: "Learn more about: _lock"
title: "_lock"
ms.date: "11/04/2016"
api_name: ["_lock"]
api_location: ["msvcr110_clr0400.dll", "msvcr120.dll", "msvcr100.dll", "msvcr90.dll", "msvcr80.dll", "msvcr110.dll", "msvcrt.dll", "msvcr120_clr0400.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["lock", "_lock"]
helpviewer_keywords: ["lock function", "_lock function"]
ms.assetid: 29f77c37-30de-4b3d-91b6-030216e645a6
---
# _lock

Acquires a multi-thread lock.

> [!IMPORTANT]
> This function is obsolete. Beginning in Visual Studio 2015, it is not available in the CRT.

## Syntax

```cpp
void __cdecl _lock
   int locknum
);
```

#### Parameters

*locknum*<br/>
[in] The identifier of the lock to acquire.

## Remarks

If the lock has already been acquired, this method acquires the lock anyway and causes an internal C run-time (CRT) error. If the method cannot acquire a lock, it exits with a fatal error and sets the error code to `_RT_LOCK`.

## Requirements

**Source:** mlock.c

## See also

[Alphabetical Function Reference](../c-runtime-library/reference/crt-alphabetical-function-reference.md)<br/>
[_unlock](../c-runtime-library/unlock.md)
