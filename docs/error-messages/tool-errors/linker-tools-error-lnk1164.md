---
title: "Linker Tools Error LNK1164 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["LNK1164"]
dev_langs: ["C++"]
helpviewer_keywords: ["LNK1164"]
ms.assetid: da89765c-affa-4f88-b170-6d6b19a577cf
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Linker Tools Error LNK1164

section section alignment (number) greater than /ALIGN value

The alignment size for the given section in the object file exceeds the value specified with the [/ALIGN](../../build/reference/align-section-alignment.md) option. The **/ALIGN** value must be a power of 2 and must equal or exceed the section alignment given in the object file.

Either recompile with a smaller section alignment or increase the **/ALIGN** value.