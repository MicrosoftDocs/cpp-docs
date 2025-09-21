---
title: "Linker Tools Error LNK2008"
description: "Learn more about: Linker Tools Error LNK2008"
ms.date: 11/04/2016
f1_keywords: ["LNK2008"]
helpviewer_keywords: ["LNK2008"]
---
# Linker Tools Error LNK2008

> Fixup target is not aligned 'symbol_name'

## Remarks

LINK found a fixup target in your object file that was not aligned properly.

This error can be caused by custom secton alignment (for example, #pragma [pack](../../preprocessor/pack.md)), [align](../../cpp/align-cpp.md) modifier, or by using assembly language code that modifies secton alignment.

If your code does not use any of the above, this may be caused by the compiler.
