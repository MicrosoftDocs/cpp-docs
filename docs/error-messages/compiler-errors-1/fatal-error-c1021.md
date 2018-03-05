---
title: "Fatal Error C1021 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["C1021"]
dev_langs: ["C++"]
helpviewer_keywords: ["C1021"]
ms.assetid: e23171f4-ca6b-40c0-a913-a2edc6fa3766
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Fatal Error C1021
invalid preprocessor command 'string'  
  
 `string` is not a valid [preprocessor directive](../../preprocessor/preprocessor-directives.md). To resolve the error, use a valid preprocessor name for `string`.  
  
 The following sample generates C1021:  
  
```  
// C1021.cpp  
#BadPreProcName    // C1021 delete line  
```