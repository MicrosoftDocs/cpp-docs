---
title: "Compiler Error C2708 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2708"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2708"]
ms.assetid: d52d3088-1141-42f4-829c-74755a7fcc3a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2708
'identifier' : actual parameters length in bytes differs from previous call or reference  
  
 A [__stdcall](../../cpp/stdcall.md) function must be preceded by a prototype. Otherwise, the compiler interprets the first call to the function as a prototype and this error occurs when the compiler encounters a call that does not match.  
  
 To fix this error add a function prototype.