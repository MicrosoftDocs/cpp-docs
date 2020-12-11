---
description: "Learn more about: Linker Tools Error LNK1223"
title: "Linker Tools Error LNK1223"
ms.date: "11/04/2016"
f1_keywords: ["LNK1223"]
helpviewer_keywords: ["LNK1223"]
ms.assetid: c4728c36-daee-462f-a1c7-8733dcdec88e
---
# Linker Tools Error LNK1223

invalid or corrupt file: file contains invalid .pdata contributions

For RISC platforms that use pdata, this error will occur if the compiler emitted a .pdata section with unsorted entries.

To fix this issue, try compiling without [/GL (Whole Program Optimization)](../../error-messages/tool-errors/linker-tools-error-lnk1223.md) enabled. Empty function bodies can also cause this error in some cases.
