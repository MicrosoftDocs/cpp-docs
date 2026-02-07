---
title: "C Runtime errors"
description: "Learn more about: C Runtime errors (Rxxxx)"
ms.date: 04/16/2019
f1_keywords: ["c.errors", "R6000", "R6003", "R6010", "R6022", "R6023", "R6034"]
---
# C Runtime errors (Rxxxx)

The C Runtime library (CRT) may report a runtime error when your app is loaded or running. Even though each message refers to the Microsoft Visual C++ runtime library, it doesn't mean there's a bug in the library. These errors indicate either a bug in your app's code, or a condition that the runtime library can't handle, such as low memory. End users of your app may see these errors unless your write your app to prevent them, or to capture the errors and present a friendly error message to your users instead.

[!INCLUDE[error-boilerplate](../includes/error-boilerplate.md)]

## C Runtime errors

| Error | Message |
|--|--|
| [C Runtime Error R6002](c-runtime-error-r6002.md) | floating-point support not loaded |
| [C Runtime Error R6008](c-runtime-error-r6008.md) | not enough space for arguments |
| [C Runtime Error R6009](c-runtime-error-r6009.md) | not enough space for environment |
| [C Runtime Error R6016](c-runtime-error-r6016.md) | not enough space for thread data |
| [C Runtime Error R6017](c-runtime-error-r6017.md) | unexpected multithread lock error |
| [C Runtime Error R6018](c-runtime-error-r6018.md) | unexpected heap error |
| [C Runtime Error R6019](c-runtime-error-r6019.md) | unable to open console device |
| [C Runtime Error R6024](c-runtime-error-r6024.md) | not enough space for _onexit/atexit table |
| [C Runtime Error R6025](c-runtime-error-r6025.md) | pure virtual function call |
| [C Runtime Error R6026](c-runtime-error-r6026.md) | not enough space for stdio initialization |
| [C Runtime Error R6027](c-runtime-error-r6027.md) | not enough space for lowio initialization |
| [C Runtime Error R6028](c-runtime-error-r6028.md) | unable to initialize heap |
| [C Runtime Error R6030](c-runtime-error-r6030.md) | CRT not initialized |
| [C Runtime Error R6031](c-runtime-error-r6031.md) | Attempt to initialize the CRT more than once. This indicates a bug in your application. |
| [C Runtime Error R6032](c-runtime-error-r6032.md) | Not enough space for locale information |
| [C Runtime Error R6033](c-runtime-error-r6033.md) | Attempt to use MSIL code from this assembly during native code initialization. This indicates a bug in your application. It is most likely the result of calling an MSIL-compiled (/clr) function from a native constructor or from DllMain. |
| [C Runtime Error R6035](c-runtime-error-r6035.md) | A module in this application is initializing the module's global security cookie while a function relying on that security cookie is active.  Call __security_init_cookie earlier. |

## See also

[C/C++ Compiler and build tools errors and warnings](../compiler-errors-1/c-cpp-build-errors.md)
