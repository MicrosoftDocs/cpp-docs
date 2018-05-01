---
title: "Compiler Error C2838 | Microsoft Docs"
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
  - "C2838"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2838"
ms.assetid: 176b2ad6-7a84-4019-b97e-328866054457
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2838
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2838](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2838).  
  
  
member' : illegal qualified name in member declaration  
  
 A class, structure, or union uses a fully qualified name to redeclare a member of another class, structure, or union.  
  
 The following sample generates C2838:  
  
```  
// C2838.cpp  
// compile with: /c  
class Bellini {  
public:  
    void Norma();  
};  
  
class Bottesini {  
   Bellini::Norma();  // C2838  
};  
```

