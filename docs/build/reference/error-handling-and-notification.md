---
title: "Error handling and notification"
description: "Learn more about: DLL delay load error handling and notification"
ms.date: "01/19/2021"
helpviewer_keywords: ["error handling, and notification"]
---
# Error handling and notification

If your program uses delay-loaded DLLs, it must handle errors robustly, since failures that occur while the program is running will result in unhandled exceptions. Failure handling is composed of two portions: Recovery through a hook, and reporting via an exception.

For more information on DLL delay load error handling and notification, see [Understanding the helper function](understanding-the-helper-function.md).

For more information on hook functions, see [Structure and constant definitions](structure-and-constant-definitions.md).

## Recovery through a hook

Your code may need to recover on a failure, or to provide an alternate library or routine. You can provide a hook to the helper function that can supply the alternative code, or remedy the situation. The hook routine needs to return a suitable value, so that processing can continue (an `HINSTANCE` or `FARPROC`). Or, it can return 0 to indicate that an exception should be thrown. It could also throw its own exception or `longjmp` out of the hook. There are notification hooks and failure hooks.

## Reporting via an exception

If all that's required to handle the error is to abort the procedure, no hook is necessary, as long as the user code can handle the exception.

The following articles discuss error handling and notification:

- [Notification hooks](notification-hooks.md)

- [Failure hooks](failure-hooks.md)

- [DLL delay load exception codes](exceptions-c-cpp.md)

## See also

[Linker support for delay-loaded DLLs](linker-support-for-delay-loaded-dlls.md)
