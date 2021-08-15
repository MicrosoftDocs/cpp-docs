---
description: "Learn more about: set_terminate (CRT)"
title: "set_terminate (CRT)"
ms.date: "4/2/2020"
api_name: ["set_terminate", "_o_set_terminate"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-runtime-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["set_terminate"]
helpviewer_keywords: ["set_terminate function", "terminate function", "exception handling, termination"]
ms.assetid: 3ff1456a-7898-44bc-9266-a328a80b6006
---
# set_terminate (CRT)

Installs your own termination routine to be called by **terminate**.

## Syntax

```cpp
terminate_function set_terminate( terminate_function termFunction );
```

### Parameters

*termFunction*<br/>
Pointer to a terminate function that you write.

## Return Value

Returns a pointer to the previous function registered by **set_terminate** so that the previous function can be restored later. If no previous function has been set, the return value may be used to restore the default behavior; this value may be **NULL**.

## Remarks

The **set_terminate** function installs *termFunction* as the function called by **terminate**. **set_terminate** is used with C++ exception handling and may be called at any point in your program before the exception is thrown. **terminate** calls [abort](abort.md) by default. You can change this default by writing your own termination function and calling **set_terminate** with the name of your function as its argument. **terminate** calls the last function given as an argument to **set_terminate**. After performing any desired cleanup tasks, *termFunction* should exit the program. If it does not exit (if it returns to its caller), [abort](abort.md) is called.

In a multithreaded environment, terminate functions are maintained separately for each thread. Each new thread needs to install its own terminate function. Thus, each thread is in charge of its own termination handling.

The **terminate_function** type is defined in EH.H as a pointer to a user-defined termination function, *termFunction* that returns **`void`**. Your custom function *termFunction* can take no arguments and should not return to its caller. If it does, [abort](abort.md) is called. An exception may not be thrown from within *termFunction*.

```cpp
typedef void ( *terminate_function )( );
```

> [!NOTE]
> The **set_terminate** function only works outside the debugger.

There is a single **set_terminate** handler for all dynamically linked DLLs or EXEs; even if you call **set_terminate** your handler may be replaced by another, or you may be replacing a handler set by another DLL or EXE.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**set_terminate**|\<eh.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

See the example for [terminate](terminate-crt.md).

## See also

[Exception Handling Routines](../../c-runtime-library/exception-handling-routines.md)<br/>
[abort](abort.md)<br/>
[_get_terminate](get-terminate.md)<br/>
[set_unexpected](set-unexpected-crt.md)<br/>
[terminate](terminate-crt.md)<br/>
[unexpected](unexpected-crt.md)<br/>
