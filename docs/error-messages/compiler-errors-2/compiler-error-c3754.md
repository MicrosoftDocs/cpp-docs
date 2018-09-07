---
title: "Compiler Error C3754 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3754"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3754"]
ms.assetid: 14b877bc-9277-40ec-af1c-196a58b45f10
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3754
delegate constructor: member function 'function' cannot be called on an instance of type 'type'  
  
 A call was made to a function through a pointer to a type that does not contain the function.  
  
## Example  
 The following sample generates C3754:  
  
```  
// C3754a.cpp  
// compile with: /clr  
using namespace System;  
  
delegate void MyDel();  
  
interface class MyInterface {};  
  
ref struct MyClass : MyInterface {  
   void f() {}  
};  
  
int main() {  
   MyInterface^ p = gcnew MyClass;  
   MyDel^ q = gcnew MyDel(p, &MyClass::f);   // C3754  
   // try the following line instead  
//   MyDel^ q = gcnew MyDel(safe_cast<MyClass^>(p), &MyClass::f);  
}  
```  
