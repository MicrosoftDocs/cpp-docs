---
title: "Compiler Warning (level 4) C4206 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4206"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4206"]
ms.assetid: 3df97812-3ed7-4003-9769-057acf97ce3c
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 4) C4206

**nonstandard extension used : translation unit is empty**

The file was empty after preprocessing.

This extension can prevent your code from being portable to other compilers. It generates an error under ANSI compatibility ([/Za](../../build/reference/za-ze-disable-language-extensions.md)) and only applies to C source code.