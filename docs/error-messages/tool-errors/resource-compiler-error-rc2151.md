---
title: "Resource Compiler Error RC2151 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["RC2151"]
dev_langs: ["C++"]
helpviewer_keywords: ["RC2151"]
ms.assetid: 3c47e535-c78d-4338-aab9-9b47e2c34728
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Resource Compiler Error RC2151
cannot re-use string constants  
  
 You are using the same value twice in a **STRINGTABLE** statement. Make sure you are not mixing overlapping decimal and hexadecimal values.  
  
 Each ID in a **STRINGTABLE** must be unique. For maximum efficiency use contiguous constants that start on a multiple of 16.