---
description: "Learn more about: Delay load notification hooks"
title: "Notification hooks"
ms.date: "01/19/2021"
helpviewer_keywords: ["delayed loading of DLLs, notification hooks"]
---
# Notification hooks

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

The notifications pass in a `DelayLoadInfo` structure to the hook function along with the notification value. This data is identical to the data used by the delay load helper routine. The notification value will be one of the values defined in [Structure and constant definitions](structure-and-constant-definitions.md).

## See also

[Error handling and notification](error-handling-and-notification.md)
