---
title: "Compiler Warning (level 1) C5072"
description: "Learn more about: Compiler Warning (level 1) C5072"
ms.date: 02/09/2024
f1_keywords: ["C5072"]
helpviewer_keywords: ["C5072"]
---
# Compiler Warning (level 1) C5072

> ASAN enabled without debug information emission. Enable debug info for better ASAN error reporting

## Remarks

This warning occurs when you compile with [Address Sanitizer](../../sanitizers/asan.md) (ASAN) turned on, but you don't also instruct the compiler to emit debug info. ASAN uses debug info to provide better diagnostics.

## Example

The following command line generates warning C5072:

```cmd
cl /fsanitize=address /EHsc test.cpp
```

To fix it, have the compiler generate debug information by using a switch like [`/Zi`](../../build/reference/z7-zi-zi-debug-information-format.md#zi) or [`/Z7`](../../build/reference/z7-zi-zi-debug-information-format.md#z7), like this:

```cmd
cl /fsanitize=address /EHsc /Zi test.cpp
```

## See also

[Address Sanitizer (ASAN)](../../sanitizers/asan.md)
