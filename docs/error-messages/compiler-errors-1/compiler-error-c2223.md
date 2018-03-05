---
title: "Compiler Error C2223 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C2223"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2223"]
ms.assetid: e4506f0f-0317-4a96-8a90-877a156d7939
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Compiler Error C2223
left of '->identifier' must point to struct/union  
  
 The operand to the left of `->` is not a pointer to a class, structure, or union.  
  
 This error can be caused by a left operand that is an undefined variable (therefore type `int`).