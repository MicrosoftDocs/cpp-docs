---
title: "_SECURE_SCL"
description: "Learn more about: _SECURE_SCL"
ms.date: 11/04/2016
f1_keywords: ["_SECURE_SCL"]
helpviewer_keywords: ["_SECURE_SCL"]
---
# `_SECURE_SCL`

Superseded by [`_ITERATOR_DEBUG_LEVEL`](iterator-debug-level.md), this macro defines whether [Checked Iterators](checked-iterators.md) are enabled. By default, checked iterators are enabled in Debug builds, and disabled in Retail builds.

> [!IMPORTANT]
> Direct use of the `_SECURE_SCL` macro is deprecated. Instead, use `_ITERATOR_DEBUG_LEVEL` to control checked iterator settings. For more information, see [`_ITERATOR_DEBUG_LEVEL`](iterator-debug-level.md).

## Remarks

When checked iterators are enabled, unsafe iterator use causes a runtime error and the program is terminated. To enable checked iterators, set `_ITERATOR_DEBUG_LEVEL` to 1 or 2. This is equivalent to a `_SECURE_SCL` setting of 1, or enabled:

```cpp
#define _ITERATOR_DEBUG_LEVEL 1
```

To disable checked iterators, set `_ITERATOR_DEBUG_LEVEL` to 0. This is equivalent to a `_SECURE_SCL` setting of 0, or disabled:

```cpp
#define _ITERATOR_DEBUG_LEVEL 0
```

For information on how to disable warnings about checked iterators, see [`_SCL_SECURE_NO_WARNINGS`](scl-secure-no-warnings.md).

## See also

[`_ITERATOR_DEBUG_LEVEL`](iterator-debug-level.md)\
[Checked Iterators](checked-iterators.md)\
[Debug Iterator Support](debug-iterator-support.md)\
[Safe Libraries: C++ Standard Library](safe-libraries-cpp-standard-library.md)
