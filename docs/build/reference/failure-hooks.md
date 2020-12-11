---
description: "Learn more about: Failure Hooks"
title: "Failure Hooks"
ms.date: "11/04/2016"
helpviewer_keywords: ["delayed loading of DLLs, failure hooks"]
ms.assetid: 12bb303b-ffe6-4471-bffe-9ef4f8bb2d30
---
# Failure Hooks

The failure hook is enabled in the same manner as the [notification hook](notification-hooks.md). The hook routine needs to return a suitable value so that processing can continue (an HINSTANCE or FARPROC) or 0 to indicate that an exception should be thrown.

The pointer variable that refers to the user-defined function is:

```
// This is the failure hook, dliNotify = {dliFailLoadLib|dliFailGetProc}
ExternC
PfnDliHook   __pfnDliFailureHook2;
```

The **DelayLoadInfo** structure contains all the pertinent data necessary for accurate reporting of the error, including the value from `GetLastError`.

If the notification is **dliFailLoadLib**, the hook function can return:

- 0, if it cannot handle the failure.

- An HMODULE, if the failure hook fixed the problem and loaded the library itself.

If the notification is **dliFailGetProc**, the hook function can return:

- 0, if it cannot handle the failure.

- A valid proc address (import function address), if the failure hook succeeded in getting the address itself.

## See also

[Error Handling and Notification](error-handling-and-notification.md)
