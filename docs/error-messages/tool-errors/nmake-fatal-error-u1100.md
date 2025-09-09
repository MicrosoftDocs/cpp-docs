---
title: "NMAKE Fatal Error U1100"
description: "A description of the causes of Microsoft NMAKE fatal error U1100."
ms.date: 07/17/2020
f1_keywords: ["U1100"]
helpviewer_keywords: ["U1100"]
---
# NMAKE Fatal Error U1100

> macro '*macro-name*' is illegal in the context of batch rule '*rule-name*'

## Remarks

NMAKE generates this error when the command block of a batch-mode rule directly or indirectly references a special file macro that isn't `$<`.

`$<` is the only allowed macro for batch-mode rules.

For more information about NMAKE macros in batch rules, see [Special NMAKE macros](../../build/reference/special-nmake-macros.md).
