---
title: "Compiler Warning (level 1) C4952"
description: "Learn more about: Compiler Warning (level 1) C4952"
ms.date: 08/27/2018
f1_keywords: ["C4952"]
helpviewer_keywords: ["C4952"]
---
# Compiler Warning (level 1) C4952

> '*function*' : no profile data found in program database '*pgd_file*'

## Remarks

When using [/LTCG:PGUPDATE](../../build/reference/ltcg-link-time-code-generation.md), the compiler detected an input module that was recompiled after `/LTCG:PGINSTRUMENT` and has a new function (*function*) present.

This warning is informational. To resolve this warning, run `/LTCG:PGINSTRUMENT`, redo all test runs, and run `/LTCG:PGOPTIMIZE`.

This warning would be replaced with an error if `/LTCG:PGOPTIMIZE` had been used.
