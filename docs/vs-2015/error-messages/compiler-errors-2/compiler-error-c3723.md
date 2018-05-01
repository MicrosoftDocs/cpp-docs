---
title: "Compiler Error C3723 | Microsoft Docs"
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
  - "C3723"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3723"
ms.assetid: ef0fb1ff-3f9a-4093-a6b6-894d1ab0c4b9
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3723
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3723](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3723).  
  
  
function': could not resolve event  
  
 `function` could not resolve which event to call.  
  
 The following sample generates C3723:  
  
```  
// C3723.cpp  
struct A {  
   // To resolve, comment void f(int); and uncomment the __event function  
   void f(int);  
   // __event void f(int);  
   void f(float);  
  
};  
  
struct B {  
   void g(int);  
   B(A* a) {  
   __hook(&A::f, a, &B::g);   // C3723  
   }  
};  
  
int main() {  
}  
```  
  
 `__hook` and `__unhook` are not compatible with /clr programming.  Use the += and -= operators instead.  
  
 The following sample generates C3723:  
  
```  
// C3723b.cpp  
// compile with: /clr  
using namespace System;  
  
public delegate void delegate1();  
  
public ref class CPSource {  
public:  
   event delegate1^ event1;  
};  
  
public ref class CReceiver {  
public:  
   void Handler1() {  
   }  
  
   void UnhookAll(CPSource^ pSrc) {  
      __unhook(&CPSource::event1, pSrc, &CReceiver::Handler1); // C3723  
      // Try the following line instead.  
      // pSrc->event1 -= gcnew delegate1(this, &CReceiver::Handler1);  
   }  
};  
  
int main() {  
}  
```

