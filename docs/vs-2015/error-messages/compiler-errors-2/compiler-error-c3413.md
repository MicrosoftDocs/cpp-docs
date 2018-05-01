---
title: "Compiler Error C3413 | Microsoft Docs"
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
  - "C3413"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3413"
ms.assetid: de6c9b05-c373-4bd8-8cb0-12c2cd2e5674
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3413
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3413](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3413).  
  
  
name' : invalid explicit instantiation  
  
 The compiler detected an ill-formed explicit instantiation.  
  
 The following sample generates C3413:  
  
```  
// C3413.cpp  
template  
class MyClass {};   // C3413  
```  
  
 Possible resolution:  
  
```  
// C3413b.cpp  
// compile with: /c  
template <class T>  
class MyClass {};  
  
template <>  
class MyClass<int> {};  
```

