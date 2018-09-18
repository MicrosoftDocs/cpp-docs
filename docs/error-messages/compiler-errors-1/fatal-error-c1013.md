---
title: "Fatal Error C1013 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C1013"]
dev_langs: ["C++"]
helpviewer_keywords: ["C1013"]
ms.assetid: 5514a679-efe7-4055-bdd3-5693ca0c332f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Fatal Error C1013

compiler limit : too many open parentheses

An expression contains too many levels of parentheses in a single expression. Simplify the expression or break it into multiple statements.

Prior to Visual C++ 6.0 Service Pack 3, the limit on nested parenthesis in a single expression was 59. Currently, the limit on nested parenthesis is 256.