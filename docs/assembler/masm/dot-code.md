---
title: ".CODE"
description: "Learn more about: .CODE"
ms.date: "12/17/2019"
f1_keywords: [".CODE"]
helpviewer_keywords: [".CODE directive"]
---
# .CODE

Indicates the start of a code segment.

When using 32-bit MASM, this should be used along with [.MODEL](dot-model.md).

## Syntax

> **.CODE** ⟦*name*⟧\
> ⟦ *segmentItem* ⟧...\
> ⟦ *codesegmentnameId* **ENDS**;;⟧

### Parameters

*name*\
Optional parameter that specifies the name of the code segment. The default name is **_TEXT** for tiny, small, compact, and flat [models](dot-model.md). The default name is *modulename*_TEXT for other models.

## See also

[Directives Reference](directives-reference.md)\
[.DATA](dot-data.md)\
[MASM BNF Grammar](masm-bnf-grammar.md)
