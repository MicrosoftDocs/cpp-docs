---
title: "Compiler Error C2680 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2680"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2680"
ms.assetid: d6f7129e-dd17-4661-b680-18d6b925b1cc
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Compiler Error C2680
'type' : invalid target type for name  
  
 A casting operator tried to convert to a type that is not a pointer or reference. The [dynamic_cast](../../cpp/dynamic-cast-operator.md) operator can be used only for pointers or references.  
  
 The following sample generates C2680:  
  
```  
// C2680.cpp  
// compile with: /c  
class A { virtual void f(); };  
class B : public A {};  
  
void g(B b) {  
   A a;  
   a = dynamic_cast<A>(b);   // C2680  target not a reference type  
   a = dynamic_cast<A&>(b);   // OK  
}  
```  
  
 C2680 can also occur when the target is not defined:  
  
```  
// C2680b.cpp  
// compile with: /clr /c  
// C2680 expected  
using namespace System::Collections;  
  
// Delete the following line to resolve.  
ref class A;   // not defined  
  
// Uncomment the following line to resolve.  
// ref class A{};  
  
public ref class B : ArrayList {  
   property A^ C[int] {  
      A^ get(int index) {  
         return dynamic_cast<A^>(this->default::get(index));  
      }  
      void set(int index, A^ value) {  
         this->default::set(index, value);   
      }  
   }  
};  
```