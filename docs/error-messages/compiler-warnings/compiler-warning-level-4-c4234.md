---
title: "Compiler Warning (level 4) C4234"
description: "Learn more about: Compiler Warning (level 4) C4234"
ms.date: 11/04/2016
f1_keywords: ["C4234"]
helpviewer_keywords: ["C4234"]
---
# Compiler Warning (level 4) C4234

> nonstandard extension used: 'keyword' keyword reserved for future use

## Remarks

The compiler does not yet implement the keyword you used.

This warning is automatically promoted to an error. If you wish to modify this behavior, use [#pragma warning](../../preprocessor/warning.md). For example, to make C4234 into a level 4 warning issue,

```cpp
#pragma warning(2:4234)
```

in your source code file.
