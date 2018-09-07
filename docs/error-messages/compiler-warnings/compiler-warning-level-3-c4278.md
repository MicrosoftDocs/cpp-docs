---
title: "Compiler Warning (level 3) C4278 | Microsoft Docs"
ms.custom: ""
ms.date: "08/27/2018"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4278"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4278"]
ms.assetid: 4b6053fb-df62-4c04-b6c8-c011759557b8
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 3) C4278

> '*identifier*': identifier in type library '*tlb*' is already a macro; use the 'rename' qualifier

When using [#import](../../preprocessor/hash-import-directive-cpp.md), an identifier in the typelib you are importing is attempting to declare an identifier *identifier*. However, this is already a valid symbol.

Use the `#import` **rename** attribute to assign an alias to the symbol in the type library.