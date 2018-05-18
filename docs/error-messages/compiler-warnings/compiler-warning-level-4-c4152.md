---
title: "Compiler Warning (level 4) C4152 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4152"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4152"]
ms.assetid: 6025ab70-d7cf-4730-913a-3ca0b1186a3a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 4) C4152
non standard extension, function/data ptr conversion in expression  
  
 A function pointer is converted to or from a data pointer. This conversion is allowed under Microsoft extensions (/Ze) but not under ANSI C.