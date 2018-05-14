---
title: "Compiler Error C3550 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3550"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3550"]
ms.assetid: 9f2d5ffc-e429-41a1-89e3-7acc4fd47e14
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3550
only plain 'decltype(auto)' is allowed in this context  
  
 If `decltype(auto)` is used as a placeholder for the return type of a function, it must be used by itself. It cannot be used as part of a pointer declaration (`decltype(auto*)`), a reference declaration (`decltype(auto&)`), or any other such qualification.  
  
## See Also  
 [auto](../../cpp/auto-cpp.md)