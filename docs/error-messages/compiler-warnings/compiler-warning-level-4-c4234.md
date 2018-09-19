---
title: "Compiler Warning (level 4) C4234 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4234"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4234"]
ms.assetid: f7fecd5c-8248-4fde-8446-502aedc357ca
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 4) C4234

nonstandard extension used: 'keyword' keyword reserved for future use

The compiler does not yet implement the keyword you used.

This warning is automatically promoted to an error. If you wish to modify this behavior, use [#pragma warning](../../preprocessor/warning.md). For example, to make C4234 into a level 4 warning issue,

```
#pragma warning(2:4234)
```

in your source code file.