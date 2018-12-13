---
title: "Bitfields"
ms.date: "12/14/2018"
helpviewer_keywords: ["bitfields"]
ms.assetid: e9a1010d-1e1b-487f-9943-3c574e08f544
---
# Bitfields

Structure bit fields are limited to 64 bits and can be of type signed int, unsigned int, int64, or unsigned int64. Bit fields that cross the type boundary will skip bits to align the bitfield to the next type alignment. For example, integer bitfields may not cross a 32-bit boundry.

## See Also

[Types and Storage](types-and-storage.md)