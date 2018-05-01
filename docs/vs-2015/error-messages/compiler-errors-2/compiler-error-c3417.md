---
title: "Compiler Error C3417 | Microsoft Docs"
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
  - "C3417"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3417"
ms.assetid: 3e7869ea-8948-42fb-ba30-6ccafe499c35
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3417
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3417](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3417).  
  
  
member' : value types cannot contain user-defined special member functions  
  
 Value types cannot contain functions such as a default instance constructor, destructor, or copy constructor.  
  
 The following sample generates C3517:  
  
```  
// C3417.cpp  
// compile with: /clr /c  
value class VC {  
   VC(){}   // C3417  
  
   // OK  
   static VC(){}  
   VC(int i){}  
};  
```

