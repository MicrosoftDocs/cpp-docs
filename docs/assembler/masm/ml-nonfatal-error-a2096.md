---
description: "Learn more about: ML Nonfatal Error A2096"
title: "ML Nonfatal Error A2096"
ms.date: "12/17/2019"
ms.custom: "error-reference"
f1_keywords: ["A2096"]
helpviewer_keywords: ["A2096"]
ms.assetid: bab0b5ee-b39f-4e44-a41a-3f949fab4297
---
# ML Nonfatal Error A2096

**segment, group, or segment register expected**

A segment or group was expected but was not found.

One of the following occurred:

- The left operand specified with the segment override operator (**:**) was not a segment register (CS, DS, SS, ES, FS, or GS), group name, segment name, or segment expression.

- The [ASSUME](assume.md) directive was given a segment register without a valid segment address, segment register, group, or the special **FLAT** group.

## See also

[ML Error Messages](ml-error-messages.md)
