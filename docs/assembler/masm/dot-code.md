---
description: "Learn more about: .CODE"
title: ".CODE"
ms.date: "12/17/2019"
f1_keywords: [".CODE"]
helpviewer_keywords: [".CODE directive"]
ms.assetid: 2b8c882c-c0d2-4fa3-8335-e6b12717a4f4
---
# .CODE

(32-bit MASM only.) When used with [.MODEL](dot-model.md), indicates the start of a code segment.

## Syntax

> **.CODE** ⟦*name*⟧\
> ⟦ *segmentItem* ⟧...\
> ⟦ *codesegmentnameId* **ENDS**;;⟧\

### Parameters

*name*\
Optional parameter that specifies the name of the code segment. The default name is **_TEXT** for tiny, small, compact, and flat [models](dot-model.md). The default name is *modulename*_TEXT for other models.

## See also

[Directives Reference](directives-reference.md)\
[.DATA](dot-data.md)\
[MASM BNF Grammar](masm-bnf-grammar.md)
