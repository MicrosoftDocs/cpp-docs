---
title: "Fatal Error C1018 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C1018"]
dev_langs: ["C++"]
helpviewer_keywords: ["C1018"]
ms.assetid: 2ceb8a99-30b2-4b80-bf42-e9f3305b3c52
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Fatal Error C1018
unexpected #elif  
  
 The `#elif` directive appears outside an `#if`, `#ifdef`, or `#ifndef` construct. Use `#elif` only within one of these constructs.  
  
 The following sample generates C1018:  
  
```  
// C1018.cpp  
#elif      // C1018  
#endif  
  
int main() {}  
```  
  
 Possible resolution:  
  
```  
// C1018b.cpp  
#if 1  
#elif  
#endif  
  
int main() {}  
```