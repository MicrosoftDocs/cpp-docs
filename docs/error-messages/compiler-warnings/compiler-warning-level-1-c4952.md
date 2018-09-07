---
title: "Compiler Warning (level 1) C4952 | Microsoft Docs"
ms.custom: ""
ms.date: "08/27/2018"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4952"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4952"]
ms.assetid: 593324f0-5cfe-42fb-b221-2f71308765dd
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4952

> '*function*' : no profile data found in program database '*pgd_file*'

When using [/LTCG:PGUPDATE](../../build/reference/ltcg-link-time-code-generation.md), the compiler detected an input module that was recompiled after `/LTCG:PGINSTRUMENT` and has a new function (*function*) present.

This warning is informational. To resolve this warning, run `/LTCG:PGINSTRUMENT`, redo all test runs, and run `/LTCG:PGOPTIMIZE`.

This warning would be replaced with an error if `/LTCG:PGOPTIMIZE` had been used.