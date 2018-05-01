---
title: "Compiler Error C2791 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2791"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2791"
ms.assetid: 938ad1fb-75d9-4ce2-ad92-83d6249005b5
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2791
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2791](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2791).  
  
  
illegal use of 'super': 'class' does not have any base classes  
  
 The keyword [super](../../cpp/super.md) was used within the context of a member function of a class that does not have any base classes.  
  
 The following sample generates C2791:  
  
```  
// C2791.cpp  
struct D {  
   void mf() {  
      __super::mf();   // C2791  
   }  
};  
```

