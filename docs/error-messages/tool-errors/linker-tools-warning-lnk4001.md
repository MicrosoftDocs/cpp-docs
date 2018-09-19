---
title: "Linker Tools Warning LNK4001 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["LNK4001"]
dev_langs: ["C++"]
helpviewer_keywords: ["LNK4001"]
ms.assetid: 0a8b1c3a-64ce-4311-b7c0-065995059246
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Linker Tools Warning LNK4001

no object files specified; libraries used

The linker was passed one or more .lib files, but no .obj files.

Because the linker is not able to access information in a .lib file that it is able to access in an .obj file, this warning indicates that you will have to explicitly specify other linker options. For example, you may have to specify the [/MACHINE](../../build/reference/machine-specify-target-platform.md), [/OUT](../../build/reference/out-output-file-name.md), or [/ENTRY](../../build/reference/entry-entry-point-symbol.md) options.