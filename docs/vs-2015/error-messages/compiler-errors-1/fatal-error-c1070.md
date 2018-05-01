---
title: "Fatal Error C1070 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C1070"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1070"
ms.assetid: 1058269a-5db6-4c23-a97f-b5269eb9188b
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Fatal Error C1070
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Fatal Error C1070](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/fatal-error-c1070).  
  
  
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

