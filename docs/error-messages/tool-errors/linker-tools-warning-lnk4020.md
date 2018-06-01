---
title: "Linker Tools Warning LNK4020 | Microsoft Docs"
ms.custom: ""
ms.date: "05/29/2018"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["LNK4020"]
dev_langs: ["C++"]
helpviewer_keywords: ["LNK4020"]
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Linker Tools Warning LNK4020

> a type record in '*filename*' is corrupted; some symbols and types may not be accessible from the debugger

The PDB file *filename* has a corrupted type record.

This issue is often secondary to other build issues; unless this is the first reported build issue, deal with the other errors and warnings first. If this is the first reported issue, you may need to clean your build directories and rebuild your project. If you use parallel build processes, see if the error persists when you serialize your build.