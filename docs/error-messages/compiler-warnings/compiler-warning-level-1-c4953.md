---
title: "Compiler Warning (level 1) C4953"
description: "Learn more about: Compiler Warning (level 1) C4953"
ms.date: 08/27/2018
f1_keywords: ["C4953"]
helpviewer_keywords: ["C4953"]
---
# Compiler Warning (level 1) C4953

> Inlinee '*function*' has been edited since profile data was collected, profile data not used

## Remarks

When using [/LTCG:PGUPDATE](../../build/reference/ltcg-link-time-code-generation.md), the compiler detected an input module that was recompiled after `/LTCG:PGINSTRUMENT` and has a function (*function*) that was edited and where existing test runs identified the function as a candidate for inlining. However, as a result of recompiling the module, the function will no longer be a candidate for inlining.

This warning is informational. To resolve this warning, run `/LTCG:PGINSTRUMENT`, redo all test runs, and run `/LTCG:PGOPTIMIZE`.

This warning would be replaced with an error if `/LTCG:PGOPTIMIZE` had been used.
