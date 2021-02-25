---
description: "Learn more about: no_sanitize_address"
title: "no_sanitize_address"
ms.date: "11/04/2016"
f1_keywords: ["no_sanitize_address__cpp"]
helpviewer_keywords: ["__declspec keyword [C++], no_sanitize_address", "no_sanitize_address __declspec keyword"]
ms.assetid: 9c6517e5-22d7-4051-9974-3d2200ae4d1d
---
# noreturn

**Microsoft Specific**

This **`__declspec`** attribute tells the compiler to disable the sanitizer on functions, local variables, or global variables. This **`__declspec`** is used in conjunction with [AddressSanitizer](../sanitizers/asan.md).

> [!NOTE]
> **`__declspec(no_sanitize_address)`** disables _compiler_ behavior, not *runtime* behavior.

## Example

See the [AddressSanitizer Build Reference](../sanitizers/asan-building.md#__declspecno_sanitize_address) for examples.

**END Microsoft Specific**

## See also

[__declspec](../cpp/declspec.md)<br/>
[Keywords](../cpp/keywords-cpp.md)<br/>
[AddressSanitizer](../sanitizers/asan.md)