---
title: "Compiler Error C3421 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3421"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3421"]
ms.assetid: b52050c6-17a4-424a-8894-337b0cec7010
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3421
'type' : you cannot call the finalizer for this class as it is either inaccessible or it does not exist  
  
 A finalizer is implicitly private, so it cannot be called from outside its enclosing type.  
  
 For more information, see [Destructors and finalizers in How to: Define and consume classes and structs (C++/CLI)](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers).  
  
## Example  
 The following sample generates C3421.  
  
```  
// C3421.cpp  
// compile with: /clr  
ref class A {};  
  
ref class B {   
   !B() {}  
  
public:  
   ~B() {}  
};  
  
int main() {  
   A a;  
   a.!A();   // C3421  
  
   B b;  
   b.!B();   // C3421  
}  
```