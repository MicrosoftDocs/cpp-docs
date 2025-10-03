---
title: "Linker Tools Warning LNK4219"
description: "Learn more about: Linker Tools Warning LNK4219"
ms.date: 11/04/2016
f1_keywords: ["LNK4219"]
helpviewer_keywords: ["LNK4219"]
---
# Linker Tools Warning LNK4219

> fixup name fixup overflow. Target 'target symbol name' is out of range, inserting thunk

## Remarks

The linker inserted a thunk in a situation where the address or offset was unable to fit in the given instruction because the target symbol is too far away from the instruction's location.

You may want to reorder the image (using the [/ORDER](../../build/reference/order-put-functions-in-order.md) option, for example) to avoid the extra level of indirection.
