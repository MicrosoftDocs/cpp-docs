---
title: "Compiler Warning (level 4) C4092 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4092"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4092"]
ms.assetid: 396ae826-a892-4327-bd66-f4762376d72b
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 4) C4092
sizeof returns 'unsigned long'  
  
 The operand of the `sizeof` operator was very large, so `sizeof` returned an unsigned **long**. This warning occurs under the Microsoft extensions ([/Ze](../../build/reference/za-ze-disable-language-extensions.md)). Under ANSI compatibility (/Za), the result is truncated instead.