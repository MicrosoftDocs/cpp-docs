---
title: "Compiler Error C3248 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["C3248"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3248"]
ms.assetid: d00b9d7d-b6be-4a5b-bb52-48174ea71fc4
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Compiler Error C3248
'function1': function declared as '__sealed' cannot be overridden by 'function2'  
  
A derived class tried to override a **__sealed** virtual method.  
  
C3248 is only reachable using the obsolete compiler option **/clr:oldSyntax**.  
