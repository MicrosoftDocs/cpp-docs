---
title: "Secure Template Overloads"
description: "A description of Microsoft C runtime template overloads that provide security-enhanced functions."
ms.date: "11/04/2016"
ms.topic: "conceptual"
f1_keywords: ["_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES", "_CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES", "_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT"]
helpviewer_keywords: ["_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES", "_CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES", "_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT", "secure template overloads"]
ms.assetid: 562741d0-39c0-485e-8529-73d740f29f8f
---
# Secure template overloads

Microsoft has deprecated many C Runtime library (CRT) functions in favor of security-enhanced versions. For example, `strcpy_s` is the more secure replacement for `strcpy`. The deprecated functions are common sources of security bugs, because they don't prevent operations that can overwrite memory. By default, the compiler produces a deprecation warning when you use one of these functions. The CRT provides C++ template overloads for these functions to help ease the transition to the more secure variants.

For example, this code snippet generates a warning because `strcpy` is deprecated:

```cpp
char szBuf[10];
strcpy(szBuf, "test"); // warning: deprecated
```

The deprecation warning is there to tell you that your code may be unsafe. If you've verified that your code can't overwrite memory, you have several choices. You can choose to ignore the warning, you can define the symbol `_CRT_SECURE_NO_WARNINGS` before the include statements for the CRT headers to suppress the warning, or you can update your code to use `strcpy_s`:

```cpp
char szBuf[10];
strcpy_s(szBuf, 10, "test"); // security-enhanced _s function
```

The template overloads provide more choices. If you define `_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES` to 1, it enables template overloads of standard CRT functions that call the more secure variants automatically. If `_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES` is 1, then no changes to your code are necessary. Behind the scenes, the call to `strcpy` is changed to a call to `strcpy_s` with the size argument supplied automatically.

```cpp
#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES 1

// ...

char szBuf[10];
strcpy(szBuf, "test"); // ==> strcpy_s(szBuf, 10, "test")
```

The macro `_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES` doesn't affect the functions that take a count, such as `strncpy`. To enable template overloads for the count functions, define `_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT` to 1. Before doing so, however, make sure that your code passes the count of characters, not the size of the buffer (a common mistake). Also, code that explicitly writes a null terminator at the end of the buffer after the function call is unnecessary if the secure variant is called. If you need truncation behavior, see [`_TRUNCATE`](./truncate.md).

> [!NOTE]
> The macro `_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT` requires that `_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES` is also defined as 1. If `_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT` is defined as 1 and `_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES` is defined as 0, the application will not perform any template overloads.

When you define `_CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES` to 1, it enables template overloads of the secure variants (names ending in "_s"). In this case, if `_CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES` is 1, then one small change must be made to the original code:

```cpp
#define _CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES 1

// ...

char szBuf[10];
strcpy_s(szBuf, "test"); // ==> strcpy_s(szBuf, 10, "test")
```

Only the name of the function needs to be changed (by adding "_s"); the template overload takes care of providing the size argument.

By default, `_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES` and `_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT` are defined as 0 (disabled) and `_CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES` is defined as 1 (enabled).

The template overloads only work for static arrays. Dynamically allocated buffers require other source code changes. Revisiting the above examples:

```cpp
#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES 1

// ...

char *szBuf = (char*)malloc(10);
strcpy(szBuf, "test"); // still deprecated; change it to
                       // strcpy_s(szBuf, 10, "test");
```

And this example:

```cpp
#define _CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES 1

// ...

char *szBuf = (char*)malloc(10);
strcpy_s(szBuf, "test"); // doesn't compile; change it to
                         // strcpy_s(szBuf, 10, "test");
```

## See also

[Security features in the CRT](./security-features-in-the-crt.md)\
[C runtime (CRT) and C++ Standard Library (STL) `.lib` files](./crt-library-features.md)
