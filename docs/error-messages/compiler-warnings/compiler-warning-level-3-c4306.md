---
title: "Compiler Warning (level 3) C4306 | Microsoft Docs"
ms.custom: ""
ms.date: "08/27/2018"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4306"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4306"]
ms.assetid: 5b2192d7-402d-4b6d-8619-08105e7dcac7
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 3) C4306

> '*identifier*' : conversion from '*type1*' to '*type2*' of greater size

The identifier is type cast to a larger pointer. The unfilled high bits of the new type will be zero-filled.

This warning may indicate an unwanted conversion. The resulting pointer may not be valid.