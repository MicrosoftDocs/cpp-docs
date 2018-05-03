---
title: "Compiler Error C3248 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3248"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3248"]
ms.assetid: d00b9d7d-b6be-4a5b-bb52-48174ea71fc4
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3248
'function1': function declared as '__sealed' cannot be overridden by 'function2'  
  
A derived class tried to override a **__sealed** virtual method.  
  
C3248 is only reachable using the obsolete compiler option **/clr:oldSyntax**.  
