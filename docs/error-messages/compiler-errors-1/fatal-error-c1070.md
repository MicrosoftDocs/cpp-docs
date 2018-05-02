---
title: "Fatal Error C1070 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C1070"]
dev_langs: ["C++"]
helpviewer_keywords: ["C1070"]
ms.assetid: 1058269a-5db6-4c23-a97f-b5269eb9188b
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Fatal Error C1070
mismatched #if/#endif pair in file 'filename'  
  
 An `#if`, `#ifdef`, or `#ifndef` directive has no corresponding `#endif`.  
  
 The following sample generates C1070:  
  
```  
// C1070.cpp  
#define TEST  
  
#ifdef TEST  
  
#ifdef TEST  
#endif  
// C1070  
```  
  
 Possible resolution:  
  
```  
// C1070b.cpp  
// compile with: /c  
#define TEST  
  
#ifdef TEST  
#endif  
  
#ifdef TEST  
#endif  
```