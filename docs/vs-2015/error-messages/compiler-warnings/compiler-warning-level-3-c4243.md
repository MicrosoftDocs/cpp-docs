---
title: "Compiler Warning (level 3) C4243 | Microsoft Docs"
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
  - "C4243"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4243"
ms.assetid: ca72f9ad-ce0b-43a9-a68c-106e1f8b90ef
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 3) C4243
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 3) C4243](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4243).  
  
  
conversion type' conversion exists from 'type1' to 'type2', but is inaccessible  
  
 A pointer to a derived class is converted to a pointer to a base class, but the derived class inherits the base class with private or protected access.  
  
 The following sample generates C4243:  
  
```  
// C4243.cpp  
// compile with: /W3  
// C4243 expected  
struct B {  
   int f() {  
      return 0;  
   };  
};  
  
struct D : private B {};  
struct E : public B {};  
  
int main() {  
   // Delete the following 2 lines to resolve.  
   int (D::* d)() = (int(D::*)()) &B::f;   
   d;  
  
   int (E::* e)() = (int(E::*)()) &B::f; // OK  
   e;  
}  
```

