---
title: "Fatal Error C1002 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C1002"]
dev_langs: ["C++"]
helpviewer_keywords: ["C1002"]
ms.assetid: bd6d274a-c7b4-43af-8bf2-23c5e442aa22
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Fatal Error C1002
compiler is out of heap space in pass 2  
  
 The compiler ran out of dynamic memory space during its second pass, probably due to a program with too many symbols or complex expressions.  
  
### To fix by using the following possible solutions  
  
1.  Divide the source file into several smaller files.  
  
2.  Break expressions into smaller subexpressions.  
  
3.  Remove other programs or drivers that consume memory.