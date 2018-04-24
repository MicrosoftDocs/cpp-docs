---
title: "Compiler Error C2884 | Microsoft Docs"
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
  - "C2884"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2884"
ms.assetid: 8b4d43e3-3fb5-4360-86c8-de59d8736d4f
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2884
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2884](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2884).  
  
  
name' : introduced by using-declaration conflicts with local function 'function'  
  
 You tried to define a function more than once. The first definition is a local definition. The second is from a namespace with a `using` declaration.  
  
 The following sample generates C2884:  
  
```  
// C2884.cpp  
namespace A {  
   void z(int);  
}  
  
void f() {  
   void z(int);  
   using A::z;   // C2884 z is already defined  
}  
```

