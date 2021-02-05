---
title: "Error handling and notification"
description: "Learn more about: DLL delay load error handling and notification"
ms.date: "01/19/2021"
helpviewer_keywords: ["error handling, and notification"]
---
# Error handling and notification

If your program uses delay-loaded DLLs, it must handle errors robustly, since failures that occur while the program is running will result in unhandled exceptions. Failure handling is composed of two portions: Recovery through a hook, and reporting via an exception.

For more information on DLL delay load error handling and notification, see [Understand the helper function](understanding-the-helper-function.md).

For more information on hook functions, see [Structure and constant definitions](understanding-the-helper-function.md#structure-and-constant-definitions).

## Recovery through a hook

Your code may need to recover on a failure, or to provide an alternate library or routine. You can provide a hook to the helper function that can supply the alternative code, or remedy the situation. The hook routine needs to return a suitable value, so that processing can continue (an `HINSTANCE` or `FARPROC`). Or, it can return 0 to indicate that an exception should be thrown. It could also throw its own exception or `longjmp` out of the hook. There are notification hooks and failure hooks. The same routine may be used for both.

## <a name="notification-hooks"></a> Notification hooks

The delay load notification hooks are called just before the following actions are taken in the helper routine:

- The stored handle to the library is checked to see if it has already been loaded.

- `LoadLibrary` is called to attempt the load of the DLL.

- `GetProcAddress` is called to attempt to get the address of the procedure.

- Return to the delay import load thunk.

The notification hook is enabled:

- By supplying a new definition of the pointer `__pfnDliNotifyHook2` that's initialized to point to your own function that receives the notifications.

   \-or-

- By setting the pointer `__pfnDliNotifyHook2` to your hook function before any calls to the DLL that the program is delay loading.

If the notification is `dliStartProcessing`, the hook function can return:

- `NULL`

   The default helper handles the loading of the DLL. It's useful to call just for informational purposes.

- a function pointer

   Bypass the default delay-load handling. It lets you supply your own load handler.

If the notification is `dliNotePreLoadLibrary`, the hook function can return:

- 0, if it just wants informational notifications.

- The `HMODULE` for the loaded DLL, if it loaded the DLL itself.

If the notification is `dliNotePreGetProcAddress`, the hook function can return:

- 0, if it just wants informational notifications.

- The imported function's address, if the hook function gets the address itself.

If the notification is `dliNoteEndProcessing`, the hook function's return value is ignored.

If this pointer is initialized (nonzero), the delay load helper invokes the function at certain notification points throughout its execution. The function pointer has the following definition:

```C
// The "notify hook" gets called for every call to the
// delay load helper.  This allows a user to hook every call and
// skip the delay load helper entirely.
//
// dliNotify == {
//  dliStartProcessing |
//  dliNotePreLoadLibrary  |
//  dliNotePreGetProc |
//  dliNoteEndProcessing}
//  on this call.
//
ExternC
PfnDliHook   __pfnDliNotifyHook2;

// This is the failure hook, dliNotify = {dliFailLoadLib|dliFailGetProc}
ExternC
PfnDliHook   __pfnDliFailureHook2;
```

The notifications pass in a `DelayLoadInfo` structure to the hook function along with the notification value. This data is identical to the data used by the delay load helper routine. The notification value will be one of the values defined in [Structure and constant definitions](understanding-the-helper-function.md#structure-and-constant-definitions).

## <a name="failure-hooks"></a> Failure hooks

The failure hook is enabled in the same manner as the [notification hook](#notification-hooks). The hook routine needs to return a suitable value so that processing can continue (an `HINSTANCE` or `FARPROC`), or 0 to indicate that an exception should be thrown.

The pointer variable that refers to the user-defined function is:

```C
// This is the failure hook, dliNotify = {dliFailLoadLib|dliFailGetProc}
ExternC
PfnDliHook   __pfnDliFailureHook2;
```

The **`DelayLoadInfo`** structure contains all the pertinent data necessary for detailed reporting of the error, including the value from `GetLastError`.

If the notification is **`dliFailLoadLib`**, the hook function can return:

- 0, if it can't handle the failure.

- An `HMODULE`, if the failure hook fixed the problem and loaded the library itself.

If the notification is **`dliFailGetProc`**, the hook function can return:

- 0, if it can't handle the failure.

- A valid proc address (import function address), if the failure hook succeeded in getting the address itself.

## Report by using an exception

If all that's required to handle the error is to abort the procedure, no hook is necessary, as long as the user code can handle the exception.

## <a name="delay-load-exception-codes"></a> Delay load exception codes

Structured exception codes can be raised when failures occur during a delayed load. The exception values are specified by using a `VcppException` macro:

```C
//
// Exception information
//
#define FACILITY_VISUALCPP  ((LONG)0x6d)
#define VcppException(sev,err)  ((sev) | (FACILITY_VISUALCPP<<16) | err)
```

For a `LoadLibrary` failure, the standard `VcppException(ERROR_SEVERITY_ERROR, ERROR_MOD_NOT_FOUND)` is thrown. For a `GetProcAddress` failure, the error thrown is `VcppException(ERROR_SEVERITY_ERROR, ERROR_PROC_NOT_FOUND)`. The exception passes a pointer to a `DelayLoadInfo` structure. It's in the `LPDWORD` value retrieved by `GetExceptionInformation` from the [`EXCEPTION_RECORD`](/windows/win32/api/winnt/ns-winnt-exception_record) structure, in the `ExceptionInformation[0]` field.

If the incorrect bits are set in the `grAttrs` field, the exception `ERROR_INVALID_PARAMETER` is thrown. This exception is, for all intents and purposes, fatal.

For more information, see [Structure and constant definitions](understanding-the-helper-function.md#structure-and-constant-definitions).

## See also

[Linker support for delay-loaded DLLs](linker-support-for-delay-loaded-dlls.md)
