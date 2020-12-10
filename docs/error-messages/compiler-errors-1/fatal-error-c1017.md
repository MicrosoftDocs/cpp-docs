---
description: "Learn more about: Fatal Error C1017"
title: "Fatal Error C1017"
ms.date: "11/04/2016"
f1_keywords: ["C1017"]
helpviewer_keywords: ["C1017"]
ms.assetid: 5542e604-599d-4e36-8f83-1d454c5753c9
---
# Fatal Error C1017

invalid integer constant expression

The expression in an `#if` directive did not exist or did not evaluate to a constant.

Constants defined using `#define` must have values that evaluate to an integer constant if they are used in an `#if`, `#elif`, or `#else` directive.

The following sample generates C1017:

```cpp
// C1017.cpp
#define CONSTANT_NAME "YES"
#if CONSTANT_NAME   // C1017
#endif
```

Possible resolution:

```cpp
// C1017b.cpp
// compile with: /c
#define CONSTANT_NAME 1
#if CONSTANT_NAME
#endif
```

Because `CONSTANT_NAME` evaluates to a string and not an integer, the `#if` directive generates fatal error C1017.

In other cases, the preprocessor evaluates an undefined constant as zero. This can cause unintended results, as shown in the following sample. `YES` is undefined, so it evaluates to zero. The expression `#if` `CONSTANT_NAME` evaluates to false and the code to be used on `YES` is removed by the preprocessor. `NO` is also undefined (zero), so `#elif` `CONSTANT_NAME==NO` evaluates to true (`0 == 0`), causing the preprocessor to leave the code in the `#elif` portion of the statement — exactly the opposite of the intended behavior.

```cpp
// C1017c.cpp
// compile with: /c
#define CONSTANT_NAME YES
#if CONSTANT_NAME
   // Code to use on YES...
#elif CONSTANT_NAME==NO
   // Code to use on NO...
#endif
```

To see exactly how the compiler handles preprocessor directives, use [/P](../../build/reference/p-preprocess-to-a-file.md), [/E](../../build/reference/e-preprocess-to-stdout.md), or [/EP](../../build/reference/ep-preprocess-to-stdout-without-hash-line-directives.md).
