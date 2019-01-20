---
title: ".CODE"
ms.date: "08/30/2018"
f1_keywords: [".CODE"]
helpviewer_keywords: [".CODE directive"]
ms.assetid: 2b8c882c-c0d2-4fa3-8335-e6b12717a4f4
---
# .CODE

When used with [.MODEL](../../assembler/masm/dot-model.md), indicates the start of a code segment.

## Syntax

> .CODE [[name]]

#### Parameters

|Parameter|Description|
|---------------|-----------------|
|`name`|Optional parameter that specifies the name of the code segment. The default name is _TEXT for tiny, small, compact, and flat [models](../../assembler/masm/dot-model.md). The default name is *modulename*_TEXT for other models.|

## See also

- [Directives Reference](../../assembler/masm/directives-reference.md)
- [.DATA](../../assembler/masm/dot-data.md)
