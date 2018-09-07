---
title: "Compiler Warning (level 1) C4276 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4276"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4276"]
ms.assetid: 9d738c2d-29e5-408a-b9ff-be1a850b2238
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4276
'function' : no prototype provided; assumed no parameters  
  
 When you take the address of a function with the [__stdcall](../../cpp/stdcall.md) calling convention, you must give a prototype so the compiler can create the function's decorated name. Since *function* has no prototype, the compiler, when creating the decorated name, assumes the function has no parameters.