---
title: "Compiler Warning (level 1) C5089"
description: "Learn more about: Compiler Warning (level 1) C5089"
ms.date: 07/29/2026
f1_keywords: ["C5089"]
helpviewer_keywords: ["C5089"]
---
# Compiler warning (level 1) C5089

> using `/fsanitize=address` with `/clr` is experimental and may result in unexpected behavior.

## Remarks

This warning occurs when you compile with both [`/fsanitize=address`](../../build/reference/fsanitize.md) (AddressSanitizer) and [`/clr`](../../build/reference/clr-common-language-runtime-compilation.md) (Common Language Runtime compilation). Although you can use AddressSanitizer with managed C++, support is still experimental. This limitation can lead to missed detections and unpredictable application behavior. For more information on ASan compatibility, see [AddressSanitizer known issues](../../sanitizers/asan-known-issues.md#incompatible-options).

## Example

The following command line generates warning C5089:

```cmd
cl /fsanitize=address /clr test.cpp
```

To fix it, remove either [`/fsanitize=address`](../../build/reference/fsanitize.md) or [`/clr`](../../build/reference/clr-common-language-runtime-compilation.md) from the command line.

## See also

[Address Sanitizer (ASAN)](../../sanitizers/asan.md)\
[AddressSanitizer known issues](../../sanitizers/asan-known-issues.md)
