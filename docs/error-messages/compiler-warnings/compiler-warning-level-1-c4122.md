---
title: "Compiler Warning (level 1) C4122 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4122"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4122"]
ms.assetid: 9a83eb0d-8708-42f7-988a-b0b6f2f646a0
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4122

'function' : alloc_text applicable only to functions with C linkage

The **alloc_text** pragma applies only to functions declared with **extern c**. It cannot be used with external C++ functions.

The pragma is ignored.