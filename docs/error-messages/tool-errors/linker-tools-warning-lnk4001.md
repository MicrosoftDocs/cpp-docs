---
description: "Learn more about: Linker Tools Warning LNK4001"
title: "Linker Tools Warning LNK4001"
ms.date: "11/04/2016"
f1_keywords: ["LNK4001"]
helpviewer_keywords: ["LNK4001"]
ms.assetid: 0a8b1c3a-64ce-4311-b7c0-065995059246
---
# Linker Tools Warning LNK4001

no object files specified; libraries used

The linker was passed one or more .lib files, but no .obj files.

Because the linker is not able to access information in a .lib file that it is able to access in an .obj file, this warning indicates that you will have to explicitly specify other linker options. For example, you may have to specify the [/MACHINE](../../build/reference/machine-specify-target-platform.md), [/OUT](../../build/reference/out-output-file-name.md), or [/ENTRY](../../build/reference/entry-entry-point-symbol.md) options.
