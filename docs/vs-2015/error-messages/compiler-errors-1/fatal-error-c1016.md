---
title: "Fatal Error C1016 | Microsoft Docs"
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
  - "C1016"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1016"
ms.assetid: 33f45c3e-2d8f-43ad-a445-c412d1d54ce1
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Fatal Error C1016
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Fatal Error C1016](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/fatal-error-c1016).  
  
  
ifdef expected an identifier#ifndef expected an identifier  
  
 The conditional compilation directive ([#ifdef](../../preprocessor/hash-ifdef-and-hash-ifndef-directives-c-cpp.md) or `#ifndef`) has no identifier to evaluate. To resolve the error, specify an identifier.  
  
 The following sample generates C1016:  
  
```  
// C1016.cpp  
#ifdef   // C1016  
#define FC1016  
#endif  
  
int main() {}  
```  
  
 Possible resolution:  
  
```  
// C1016b.cpp  
#ifdef X  
#define FC1016  
#endif  
  
int main() {}  
```

