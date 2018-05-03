---
title: "Linker Tools Warning LNK4206 | Microsoft Docs"
ms.date: "12/05/2017"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["LNK4206"]
dev_langs: ["C++"]
helpviewer_keywords: ["LNK4206"]
ms.assetid: 6c108e33-00cf-4c5a-830d-d65d470930a7
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Linker Tools Warning LNK4206

> precompiled type information not found; '*filename*' not linked or overwritten; linking object as if no debug info

The *filename* object file, compiled by using [/Yc](../../build/reference/yc-create-precompiled-header-file.md), was either not specified in the LINK command or was overwritten.

A common scenario for this warning is when the .obj that was compiled with /Yc is in a library, and where there are no symbol references to that .obj from your code.  In that case, the linker will not use (or even see) the .obj file.  In this situation, you should recompile your code and use [/Yl](../../build/reference/yl-inject-pch-reference-for-debug-library.md) for the objects compiled by using [/Yu](../../build/reference/yu-use-precompiled-header-file.md).