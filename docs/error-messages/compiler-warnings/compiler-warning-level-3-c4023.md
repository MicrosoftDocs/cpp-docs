---
title: "Compiler Warning (level 3) C4023 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4023"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4023"]
ms.assetid: 615d5374-d7c1-42eb-acfd-917c053270c8
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 3) C4023

'symbol' : based pointer passed to unprototyped function : parameter number

Passing a based pointer to an unprototyped function causes the pointer to be normalized, with unpredictable results.

This warning may be fixed if you use prototype functions that are passed based pointers.