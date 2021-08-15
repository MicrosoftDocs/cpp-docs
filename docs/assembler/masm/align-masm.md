---
description: "Learn more about: ALIGN"
title: "ALIGN (MASM)"
ms.date: "12/17/2019"
f1_keywords: ["align"]
helpviewer_keywords: ["ALIGN directive"]
ms.assetid: 1c386b23-439f-4ec3-a6de-74427b25e47f
---
# ALIGN

The **ALIGN** directive aligns the next data element or instruction on an address that is a multiple of its parameter. The parameter must be a power of 2 (for example, 1, 2, 4, and so on) that is less than or equal to the segment alignment.

## Syntax

> **ALIGN** ⟦*constantExpression*⟧

## Remarks

The **ALIGN** directive allows you to specify the beginning offset of a data element or an instruction. Aligned data can improve performance, at the expense of wasted space between data elements. Large performance improvements can be seen when data accesses are on boundaries that fit within cache lines. Accesses on natural boundaries for native types means less time spent in internal hardware realignment microcode.

The need for aligned instructions is rare on modern processors that use a flat addressing model, but may be required for jump targets in older code for other addressing models.

When data is aligned, the skipped space is padded with zeroes. When instructions are aligned, the skipped space is filled with appropriately-sized NOP instructions.

## See also

[EVEN](even.md)\
[Directives reference](directives-reference.md)\
[MASM BNF Grammar](masm-bnf-grammar.md)
