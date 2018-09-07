---
title: "Compiler Warning (levels 2 and 3) C4008 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4008"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4008"]
ms.assetid: fb45e535-cb68-4743-80e9-a6e34cfffeca
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (levels 2 and 3) C4008
'identifier' : 'attribute' attribute ignored  
  
 The compiler ignored the `__fastcall`, **static**, or **inline** attribute for a function (level 3 warning) or data (level 2 warning).  
  
### To fix by checking the following possible causes  
  
1.  `__fastcall` attribute with data.  
  
2.  **static** or **inline** attribute with **main** function.