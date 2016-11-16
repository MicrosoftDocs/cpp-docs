---
title: "Compiler Error C2819 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2819"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2819"
ms.assetid: fcc7762d-cb82-4bb1-a715-0d82da832edf
caps.latest.revision: 9
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
# Compiler Error C2819
type 'type' does not have an overloaded member 'operator ->'  
  
 You need to define `operator->()` to use this pointer operation.  
  
 The following sample generates C2819:  
  
```  
// C2819.cpp  
// compile with: /c  
class A {  
   public:  
      int i;  
};  
  
class B {};  
  
void C(B j) {  
   j->i;   // C2819  
}  
  
class D {  
   A* pA;  
  
   public:  
      A* operator->() {  
         return pA;  
      }  
};  
  
void F(D j) {  
   j->i;  
}  
```  
  
 C2819 can also occur when using [C++ Stack Semantics for Reference Types](../../dotnet/cpp-stack-semantics-for-reference-types.md). The following sample generates C2819:  
  
```  
// C2819_b.cpp  
// compile with: /clr  
ref struct R {  
   void Test() {}  
};  
  
int main() {  
   R r;  
   r->Test();   // C2819  
   r.Test();   // OK  
}  
```