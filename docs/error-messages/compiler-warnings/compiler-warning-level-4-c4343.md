---
title: "Compiler Warning (level 4) C4343"
description: "Learn more about: Compiler Warning (level 4) C4343"
ms.date: 11/04/2016
f1_keywords: ["C4343"]
helpviewer_keywords: ["C4343"]
---
# Compiler Warning (level 4) C4343

> #pragma optimize("g",off) overrides /Og option

## Remarks

This warning, only valid in the Itanium Processor Family (IPF) compiler, reports that a pragma [optimize](../../preprocessor/optimize.md) overrode a [/Og](../../build/reference/og-global-optimizations.md) compiler option.

## Example

The following example generates C4343:

```cpp
// C4343.cpp
// compile with: /Og /W4 /LD
// processor: IPF
#pragma optimize ("g", off)   // C4343
```
