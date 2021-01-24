---
description: "Learn more about: Signed Bitwise Operations"
title: "Signed Bitwise Operations"
ms.date: "11/04/2016"
helpviewer_keywords: ["bitwise operations", "signed bitwise operations"]
ms.assetid: 1e5cf65b-ee32-41a0-a5c2-82c1854091f6
---
# Signed Bitwise Operations

**ANSI 3.3** The results of bitwise operations on signed integers

Bitwise operations on signed integers work the same as bitwise operations on unsigned integers. For example, `-16 & 99` can be expressed in binary as

```
  11111111 11110000
& 00000000 01100011
  _________________
  00000000 01100000
```

The result of the bitwise AND is 96.

## See also

[Integers](../c-language/integers.md)
