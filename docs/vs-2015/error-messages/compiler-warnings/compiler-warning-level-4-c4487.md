---
title: "Compiler Warning (level 4) C4487 | Microsoft Docs"
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
  - "C4487"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4487"
ms.assetid: 796144cf-cd3c-4edc-b6a4-96192b7eb4f0
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 4) C4487
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 4) C4487](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4487).  
  
  
derived_class_function' : matches inherited non-virtual method 'base_class_function' but is not explicitly marked 'new'  
  
 A function in a derived class has the same signature as a non-virtual base class function. C4487 reminds you that the derived class function does not override the base class function. Explicitly mark the derived class function as `new` to resolve this warning.  
  
 For more information, see [new (new slot in vtable)](../../windows/new-new-slot-in-vtable-cpp-component-extensions.md).  
  
## Example  
 The following sample generates C4487.  
  
```  
// C4487.cpp  
// compile with: /W4 /clr  
using namespace System;  
public ref struct B {  
   void f() { Console::WriteLine("in B::f"); }  
   void g() { Console::WriteLine("in B::g"); }  
};  
  
public ref struct D : B {  
   void f() { Console::WriteLine("in D::f"); }   // C4487  
   void g() new { Console::WriteLine("in D::g"); }   // OK  
};  
  
int main() {  
   B ^ a = gcnew D;  
   // will call base class functions  
   a->f();  
   a->g();  
}  
```

