---
title: "Compiler Warning (level 1) C4618 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4618"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4618"]
ms.assetid: 6ff10d0a-6d5b-4373-8196-1d57bb6b1611
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4618

pragma parameters included an empty string; pragma ignored

A null string was given as an argument to a **#pragma**.

The pragma was processed without the argument.

The following sample generates C4618:

```
// C4618.cpp
// compile with: /W1 /LD
#pragma code_seg("")   // C4618
```