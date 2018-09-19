---
title: "Fatal Error C1009 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C1009"]
dev_langs: ["C++"]
helpviewer_keywords: ["C1009"]
ms.assetid: dcc8383c-3362-4c47-9c26-25d2451ebd53
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Fatal Error C1009

compiler limit : macros nested too deeply

The compiler tried to expand too many macros at the same time. The compiler has a limit of 256 levels of nested macros. Split nested macros into simpler macros.