---
title: "Compiler Warning (level 3 and level 4) C4278"
description: "Learn more about: Compiler Warning (level 3 and level 4) C4278"
ms.date: 08/27/2018
f1_keywords: ["C4278"]
helpviewer_keywords: ["C4278"]
---
# Compiler Warning (level 3 and level 4) C4278

> '*identifier*': identifier in type library '*tlb*' is already a macro; use the 'rename' qualifier

## Remarks

The [`#import`](../../preprocessor/hash-import-directive-cpp.md) is attempting to import an identifier into the translation unit. However, there's already a symbol with that name. Use the `#import` **rename** attribute to assign an alias to the symbol in the type library.
