---
title: "Compiler Error C3351 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3351"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3351"]
ms.assetid: c021bbbe-1067-4f51-af4f-940d2b792eb5
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3351
'object' : delegate constructor: second argument must be address of a static member function or global function  
  
 The compiler expected the address of a function declared `static`.  
  
 The following sample generates C3351:  
  
```  
// C3351a.cpp  
// compile with: /clr  
delegate int D(int, int);  
  
ref class C {  
public:  
   int mf(int, int) {  
      return 1;  
   }  
  
   static int mf2(int, int) {  
      return 1;  
   }  
};  
  
int main() {  
   System::Delegate ^pD = gcnew D(nullptr, &C::mf);   // C3351  
   System::Delegate ^pD2 = gcnew D(&C::mf2);  
}  
```  
