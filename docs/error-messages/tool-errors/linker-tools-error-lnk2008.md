---
title: "Linker Tools Error LNK2008 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["LNK2008"]
dev_langs: ["C++"]
helpviewer_keywords: ["LNK2008"]
ms.assetid: bbcd83c5-c8ae-439e-a033-63643a5bb373
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Linker Tools Error LNK2008

Fixup target is not aligned 'symbol_name'

LINK found a fixup target in your object file that was not aligned properly.

This error can be caused by custom secton alignment (for example, #pragma [pack](../../preprocessor/pack.md)), [align](../../cpp/align-cpp.md) modifier, or by using assembly language code that modifies secton alignment.

If your code does not use any of the above, this may be caused by the compiler.