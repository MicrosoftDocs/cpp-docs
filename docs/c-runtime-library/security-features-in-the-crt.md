---
title: "Security Features in the CRT"
description: "An overview of secure CRT functions in the Microsoft C runtime."
ms.date: "09/29/2020"
ms.topic: "conceptual"
f1_keywords: ["_CRT_SECURE_NO_DEPRECATE", "_CRT_NONSTDC_NO_DEPRECATE", "_CRT_NONSTDC_NO_WARNINGS", "_CRT_SECURE_NO_WARNINGS"]
helpviewer_keywords: ["security deprecation warnings [C++]", "CRT_NONSTDC_NO_DEPRECATE", "buffers [C++], buffer overruns", "deprecation warnings (security-related), disabling", "_CRT_NONSTDC_NO_WARNINGS", "security [CRT]", "_CRT_SECURE_NO_WARNINGS", "_CRT_NONSTDC_NO_DEPRECATE", "_CRT_SECURE_NO_DEPRECATE", "security-enhanced CRT", "CRT_SECURE_NO_WARNINGS", "CRT_SECURE_NO_DEPRECATE", "deprecation warnings (security-related)", "buffer overruns", "CRT_NONSTDC_NO_WARNINGS", "CRT, security enhancements", "parameters [C++], validation"]
ms.assetid: d9568b08-9514-49cd-b3dc-2454ded195a3
---
# Security Features in the CRT

Many old CRT functions have newer, more secure versions. If a secure function exists, the older, less secure version is marked as deprecated. The new version has the `_s` ("secure") suffix.

In this context, "deprecated" means that use of the function isn't recommended. It doesn't mean the function will be removed from the CRT.

The secure functions don't prevent or correct security errors. Instead, they catch errors when they occur. They do extra checks for error conditions. If there's an error, they invoke an error handler (see [Parameter validation](./parameter-validation.md)).

For example, the `strcpy` function can't tell if the string it copies is too large for the destination buffer. Its secure counterpart, `strcpy_s`, takes the size of the buffer as a parameter. So, it can determine if a buffer overrun will occur. If you use `strcpy_s` to copy 11 characters into a 10 character buffer, that's an error on your part; `strcpy_s` can't correct your mistake. But it can detect your error and inform you by invoking the invalid parameter handler.

## Eliminating deprecation warnings

There are several ways to eliminate deprecation warnings for the older, less secure functions. The simplest is simply to define `_CRT_SECURE_NO_WARNINGS` or use the [`warning`](../preprocessor/warning.md) pragma. Either will disable deprecation warnings, but the security issues that caused the warnings still exist. It's better to leave deprecation warnings enabled and take advantage of the new CRT security features.

In C++, the easiest way to eliminate the deprecation warnings is to use [Secure template overloads](./secure-template-overloads.md). The overloads eliminate deprecation warnings in many cases. They replace calls to deprecated functions with calls to secure versions of the functions. For example, consider this deprecated call to `strcpy`:

```cpp
char szBuf[10];
strcpy(szBuf, "test"); // warning: deprecated
```

Defining `_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES` as 1 eliminates the warning by changing the `strcpy` call to `strcpy_s`, which prevents buffer overruns. For more information, see [Secure template overloads](./secure-template-overloads.md).

For those deprecated functions without secure template overloads, you should definitely consider manually updating your code to use the secure versions.

Another source of deprecation warnings, unrelated to security, is the POSIX functions. Replace POSIX function names with their standard equivalents (for example, change [`access`](./reference/access-crt.md) to [`_access`](./reference/access-waccess.md)), or disable POSIX-related deprecation warnings by defining `_CRT_NONSTDC_NO_WARNINGS`. For more information, see [Compatibility](compatibility.md).

## More security features

Some of the security features include:

- **Parameter Validation**

  Secure functions, and many of their unsecure counterparts, validate parameters. Validation may  include:

  - Checking for `NULL` values.
  - Checking enumerated values for validity.
  - Checking that integral values are in valid ranges.

  For more information, see [Parameter validation](./parameter-validation.md).

  A handler for invalid parameters is also accessible to the developer. When a function encounters an invalid parameter, instead of asserting and exiting the application, the CRT allows you to check these problems via [`_set_invalid_parameter_handler` or `_set_thread_local_invalid_parameter_handler`](./reference/set-invalid-parameter-handler-set-thread-local-invalid-parameter-handler.md).

- **Sized Buffers**

  You must pass the buffer size to any secure function that writes to a buffer. The secure versions validate that the buffer is large enough before writing to it. The validation helps avoid dangerous buffer overrun errors that could allow malicious code to execute. These functions usually return an `errno` error code and invoke the invalid parameter handler if the size of the buffer is too small. Functions that read from input buffers, such as `gets`, have secure versions that require you to specify a maximum size.

- **Null termination**

  Some functions that left potentially non-terminated strings have secure versions, which ensure that strings are properly null-terminated.

- **Enhanced error reporting**

  The secure functions return error codes with more error information than was available with the pre-existing functions. The secure functions and many of the pre-existing functions now set `errno` and often return an `errno` code type as well, to provide better error reporting.

- **Filesystem security**

  Secure file I/O APIs support secure file access in the default case.

- **Windows security**

  Secure process APIs enforce security policies and allow ACLs to be specified.

- **Format string syntax checking**

  Invalid strings are detected, for example, when you use incorrect type field characters in `printf` format strings.

## See also

[Parameter validation](./parameter-validation.md)\
[Secure template overloads](./secure-template-overloads.md)\
[C runtime (CRT) and C++ Standard Library (STL) `.lib` files](./crt-library-features.md)
