---
title: "Compiler Warning (level 4) C4510 | Microsoft Docs"
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
  - "C4510"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4510"
ms.assetid: fd28d1d4-ad27-4dad-94c0-9dba46c93180
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 4) C4510
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 4) C4510](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4510).  
  
  
class' : default constructor could not be generated  
  
 The compiler cannot generate a default constructor for the specified class and no user-defined constructor was created. You will not be able to create objects of this type.  
  
 There are several situations that prevent the compiler from generating a default constructor, including:  
  
-   A const data member.  
  
-   A data member that is a reference.  
  
 You need to create a user-defined default constructor for the class that initializes these members.  
  
 The following sample generates C4510:  
  
```  
// C4510.cpp  
// compile with: /W4  
struct A {  
   const int i;  
   int &j;  
   A& operator=( const A& ); // C4510 expected  
   // uncomment the following line to resolve this C4510  
   // A(int ii, int &jj) : i(ii), j(jj) {}  
};   // C4510  
  
int main() {  
}  
```

