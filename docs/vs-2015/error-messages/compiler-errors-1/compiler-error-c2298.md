---
title: "Compiler Error C2298 | Microsoft Docs"
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
  - "C2298"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2298"
ms.assetid: eb0120ad-c850-4bdd-911d-0361229cc859
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2298
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2298](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2298).  
  
  
operation' : illegal operation on pointer to member function expression  
  
 A pointer to member-function expression must call the member function.  
  
## Example  
 The following sample generates C2298.  
  
```  
// C2298.cpp  
#include <stdio.h>  
  
struct X {  
   void mf() {  
      puts("in X::mf");  
   }  
  
   void mf2() {  
      puts("in X::mf2");  
   }  
};  
  
X x;  
// pointer to member functions with no params and void return in X  
typedef void (X::*pmf_t)();   
  
// a pointer to member function X::mf  
void (X::*pmf)() = &X::mf;  
  
int main() {  
   int (*pf)();  
   pf = x.*pmf;   // C2298  
   +(x.*pmf);     // C2298  
  
   pmf_t pf2 = &X::mf2;  
   (x.*pf2)();   // uses X::mf2  
   (x.*pmf)();   // uses X::mf  
}  
```  
  
## Example  
 The following sample generates C2298.  
  
```  
// C2298_b.cpp  
// compile with: /c  
void F() {}  
  
class Measure {  
public:  
   void SetTrackingFunction(void (Measure::*fnc)()) {  
      TrackingFunction = this->*fnc;   // C2298  
      TrackingFunction = fnc;   // OK  
      GlobalTracker = F;   // OK  
   }  
private:  
   void (Measure::*TrackingFunction)(void);  
   void (*GlobalTracker)(void);  
};  
```

