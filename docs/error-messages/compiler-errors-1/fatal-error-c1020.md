---
title: "Fatal Error C1020 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C1020"]
dev_langs: ["C++"]
helpviewer_keywords: ["C1020"]
ms.assetid: 42f429e2-5e3b-4086-a10d-b99e032e51c5
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Fatal Error C1020
unexpected #endif  
  
 The `#endif` directive has no matching `#if`, `#ifdef`, or `#ifndef` directive. Be sure each `#endif` has a matching directive.  
  
 The following sample generates C1020:  
  
```  
// C1020.cpp  
#endif     // C1020  
```  
  
 Possible resolution:  
  
```  
// C1020b.cpp  
// compile with: /c  
#if 1  
#endif  
```