---
title: "Compiler Error C2849 | Microsoft Docs"
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
  - "C2849"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2849"
ms.assetid: e28f6b3e-e0e7-4f92-b006-ebaa81d368e6
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2849
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2849](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2849).  
  
  
destructor' : an interface cannot have a destructor  
  
 A Visual C++ [interface](../../cpp/interface.md) cannot have a destructor.  
  
 The following sample generates C2849:  
  
```  
// C2849.cpp  
// compile with: /c  
__interface C {  
   ~C();   // C2849 destructor not allowed in an interface  
};  
```

