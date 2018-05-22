---
title: "Compiler Error C2614 | Microsoft Docs"
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
  - "C2614"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2614"
ms.assetid: a550c1d5-8718-4e17-a888-b2619e00fe11
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2614
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2614](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2614).  
  
  
class1' : illegal member initialization: 'class2' is not a base or member  
  
 Only member or base classes can appear in the initialization list for a class or structure.  
  
## Example  
 The following sample generates C2614.  
  
```  
// C2614.cpp  
// compile with: /c  
struct A {  
   int i;  
   A( int ia ) : B( i ) {};   // C2614 B is not a member of A  
};  
  
struct A2 {  
   int B;  
   int i;  
   A2( int ia ) : B( i ) {};   // OK  
};  
```

