---
title: "Compiler Warning (level 1) C4616 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C4616"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4616"]
ms.assetid: 71e15265-c5bc-42ce-a6a9-4879892472b1
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4616
\#pragma warning : warning number 'number' not a valid compiler warning  
  
 The warning number specified in the [warning](../../preprocessor/warning.md) pragma cannot be reassigned. The pragma was ignored.  
  
 The following sample generates C4616:  
  
```  
// C4616.cpp  
// compile with: /W1 /c  
#pragma warning( disable : 0 )   // C4616  
#pragma warning( disable : 999 )   // OK  
#pragma warning( disable : 4998 )   // OK  
```