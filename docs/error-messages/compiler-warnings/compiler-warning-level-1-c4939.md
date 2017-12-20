---
title: "Compiler Warning (level 1) C4939 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["C4939"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4939"]
ms.assetid: 07096008-ba47-436c-a84c-2b03ad90d0b3
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4939
\#pragma vtordisp is deprecated and will be removed in a future release of Visual C++  
  
 The [vtordisp](../../preprocessor/vtordisp.md) pragma will be removed in a future release of Visual C++.  
  
## Example  
 The following sample generates C4939.  
  
```  
// C4939.cpp  
// compile with: /c /W1  
#pragma vtordisp(off)   // C4939  
```