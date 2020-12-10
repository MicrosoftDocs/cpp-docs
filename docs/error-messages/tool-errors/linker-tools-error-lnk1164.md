---
description: "Learn more about: Linker Tools Error LNK1164"
title: "Linker Tools Error LNK1164"
ms.date: "11/04/2016"
f1_keywords: ["LNK1164"]
helpviewer_keywords: ["LNK1164"]
ms.assetid: da89765c-affa-4f88-b170-6d6b19a577cf
---
# Linker Tools Error LNK1164

section section alignment (number) greater than /ALIGN value

The alignment size for the given section in the object file exceeds the value specified with the [/ALIGN](../../build/reference/align-section-alignment.md) option. The **/ALIGN** value must be a power of 2 and must equal or exceed the section alignment given in the object file.

Either recompile with a smaller section alignment or increase the **/ALIGN** value.
