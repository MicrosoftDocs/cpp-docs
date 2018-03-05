---
title: "Fatal Error C1046 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C1046"]
dev_langs: ["C++"]
helpviewer_keywords: ["C1046"]
ms.assetid: 822ec5f5-b0b0-4711-99e1-fc237b619af6
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Fatal Error C1046
compiler limit : structure nested too deeply  
  
 The structure, union, or class exceeded the nesting limit, which is 15 levels. Rewrite the definition to reduce the nesting level. Split the structure, union, or class into two or more parts by using `typedef` to define one or more of the nested structures.