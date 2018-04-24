---
title: "Compiler Error C3241 | Microsoft Docs"
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
  - "C3241"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3241"
ms.assetid: 2ca14879-bba0-4a23-b22a-72cfff92d6a4
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3241
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3241](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3241).  
  
  
method' : this method was not introduced by 'interface'  
  
 When you explicitly override a function, the function signature must exactly match the declaration for the function that you are overriding.  
  
 The following sample generates C3241:  
  
```  
// C3241.cpp  
#pragma warning(disable:4199)  
  
__interface IX12A {  
   void mf();  
};  
  
__interface IX12B {  
   void mf(int);  
};  
  
class CX12 : public IX12A, public IX12B { // C3241  
   void IX12A::mf(int);  
};  
```

