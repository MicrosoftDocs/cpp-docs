---
description: "Learn more about: Notification Hooks"
title: "Notification Hooks"
ms.date: "11/04/2016"
helpviewer_keywords: ["delayed loading of DLLs, notification hooks"]
ms.assetid: e9c291ed-2f2d-4319-a171-09800625256f
---
# Notification Hooks

The notification hooks are called just before the following actions are taken in the helper routine:

- The stored handle to the library is checked to see if it has already been loaded.

- **LoadLibrary** is called to attempt the load of the DLL.

- **GetProcAddress** is called to attempt to get the address of the procedure.

- Return to the delay import load thunk.

The notification hook is enabled:

- By supplying a new definition of the pointer **__pfnDliNotifyHook2** that is initialized to point to your own function that receives the notifications.

   \-or-

- By setting the pointer **__pfnDliNotifyHook2** to your hook function before any calls to the DLL that the program is delay loading.

If the notification is **dliStartProcessing**, the hook function can return:

- NULL

   The default helper handles the loading of the DLL. This is useful to be called just for informational purposes.

- function pointer

   Bypass the default delay-load handling. This lets you supply your own load handler.

If the notification is **dliNotePreLoadLibrary**, the hook function can return:

- 0, if it just wants informational notifications.

- The HMODULE for the loaded DLL, if it loaded the DLL itself.

If the notification is **dliNotePreGetProcAddress**, the hook function can return:

- 0, if it just wants informational notifications.

- The imported function's address, if the hook function gets the address itself.

If the notification is **dliNoteEndProcessing**, the hook function's return value is ignored.

If this pointer is initialized (nonzero), the delay load helper will invoke the function at certain notification points throughout its execution. The function pointer has the following definition:

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

The notifications pass in a **DelayLoadInfo** structure to the hook function along with the notification value. This data is identical to that used by the delay load helper routine. The notification value will be one of the values defined in [Structure and Constant Definitions](structure-and-constant-definitions.md).

## See also

[Error Handling and Notification](error-handling-and-notification.md)
