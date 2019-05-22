---
title: ".DOSSEG"
ms.date: "08/30/2018"
f1_keywords: [".DOSSEG"]
helpviewer_keywords: [".DOSSEG directive"]
ms.assetid: 175ad470-0a2b-4e2b-b078-65e224fec040
---
# .DOSSEG

Orders the segments according to the MS-DOS segment convention: CODE first, then segments not in DGROUP, and then segments in DGROUP.

## Syntax

> .DOSSEG

## Remarks

The segments in DGROUP follow this order: segments not in BSS or STACK, then BSS segments, and finally STACK segments. Primarily used for ensuring CodeView support in MASM stand-alone programs. Same as [DOSSEG](../../assembler/masm/dosseg.md).

## See also

[Directives Reference](../../assembler/masm/directives-reference.md)<br/>