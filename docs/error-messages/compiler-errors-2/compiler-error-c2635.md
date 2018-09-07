---
title: "Compiler Error C2635 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2635"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2635"]
ms.assetid: 9deca2a8-2d61-42eb-9783-6578132ee3fb
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2635
cannot convert an 'identifier1*' to an 'identifier2\*'; conversion from a virtual base class is implied  
  
 The conversion requires a cast from a `virtual` base class to a derived class, which is not allowed.  
  
 The following sample generates C2635:  
  
```  
// C2635.cpp  
class B {};  
class D : virtual public B {};  
class E : public B {};  
  
int main() {  
   B b;  
   D d;  
   E e;  
  
   D * pD = &d;  
   E * pE = &e;  
   pD = (D*)&b;   // C2635  
   pE = (E*)&b;   // OK  
}  
```