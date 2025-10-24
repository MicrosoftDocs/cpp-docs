---
title: "Linker Tools Warning LNK4096"
description: "Learn more about: Linker Tools Warning LNK4096"
ms.date: 11/04/2016
f1_keywords: ["LNK4096"]
helpviewer_keywords: ["LNK4096"]
---
# Linker Tools Warning LNK4096

> /BASE value "number" is invalid for Windows 95 and Windows 98; image may not run

## Remarks

The base address you specified is invalid. Windows 95 and Windows 98 executable files must have a base address greater than 0x400000. For more information on base addresses, see the [/BASE](../../build/reference/base-base-address.md) linker option.
