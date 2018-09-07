---
title: "Linker Tools Error LNK2020 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["LNK2020"]
dev_langs: ["C++"]
helpviewer_keywords: ["LNK2020"]
ms.assetid: 4dd017d0-5e83-471b-ac8a-538ac1ed6870
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Linker Tools Error LNK2020
unresolved token 'token'  
  
 Similar to an undefined external error, except that the reference is via metadata. In metadata, all functions and data must be defined.  
  
 To resolve:  
  
-   Define the missing function or data, or  
  
-   Include the object file or library in which the missing function or data is already defined.  
  
## Example  
 The following sample generates LNK2020.  
  
```  
// LNK2020.cpp  
// compile with: /clr /LD  
ref struct A {  
   A(int x);   // LNK2020  
   static int f();   // LNK2020  
};  
  
// OK  
ref struct B {  
   B(int x) {}  
   static int f() { return 0; }  
};  
```  
  
## Example  
 LNK2020 will also occur if you create a variable of a managed template type, but do not also instantiate the type.  
  
 The following sample generates LNK2020.  
  
```  
// LNK2020_b.cpp  
// compile with: /clr   
  
template <typename T>  
ref struct Base {  
   virtual void f1() {};  
};  
  
template <typename T>  
ref struct Base2 {  
   virtual void f1() {};  
};  
  
int main() {  
   Base<int>^ p;   // LNK2020  
   Base2<int>^ p2 = gcnew Base2<int>();   // OK  
};  
```