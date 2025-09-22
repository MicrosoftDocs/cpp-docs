---
title: "Linker Tools Warning LNK4071"
description: "Learn more about: Linker Tools Warning LNK4071"
ms.date: 11/04/2016
f1_keywords: ["LNK4071"]
helpviewer_keywords: ["LNK4071"]
---
# Linker Tools Warning LNK4071

> cannot be incrementally linked on subsequent links

## Remarks

LINK found multiple definitions for one or more symbols, but [/FORCE](../../build/reference/force-force-file-output.md) or **/FORCE:MULTIPLE** was used to create an output file regardless of errors. LINK deleted the incremental status (.ilk) file.
