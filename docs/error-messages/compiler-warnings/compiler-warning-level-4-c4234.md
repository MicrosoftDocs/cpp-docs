---
description: "Learn more about: Compiler Warning (level 4) C4234"
title: "Compiler Warning (level 4) C4234"
ms.date: "11/04/2016"
f1_keywords: ["C4234"]
helpviewer_keywords: ["C4234"]
ms.assetid: f7fecd5c-8248-4fde-8446-502aedc357ca
---
# Compiler Warning (level 4) C4234

nonstandard extension used: 'keyword' keyword reserved for future use

The compiler does not yet implement the keyword you used.

This warning is automatically promoted to an error. If you wish to modify this behavior, use [#pragma warning](../../preprocessor/warning.md). For example, to make C4234 into a level 4 warning issue,

```cpp
#pragma warning(2:4234)
```

in your source code file.
