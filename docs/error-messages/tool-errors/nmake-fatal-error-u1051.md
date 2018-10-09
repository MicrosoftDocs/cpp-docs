---
title: "NMAKE Fatal Error U1051 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["U1051"]
dev_langs: ["C++"]
helpviewer_keywords: ["U1051"]
ms.assetid: fede5cd5-dac3-47b7-b86d-e1acfb78699f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# NMAKE Fatal Error U1051

out of memory

NMAKE ran out of memory, including virtual memory, because the makefile was too large or complex.

### To fix by using the following possible solutions

1. Free some space on disk.

1. Increase the size of the Windows NT paging file or the Windows swap file.

1. If only part of the makefile is being used, either divide the makefile into separate files or use **!IF** preprocessing directives to limit the amount that NMAKE must process. The **!IF** directives include **!IF**, `!IFDEF`, **!IFNDEF**, **!ELSE IF**, **!ELSE** `IFDEF`, and **!ELSE** `IFNDEF`.