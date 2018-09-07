---
title: "Compiler Error C2061 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2061"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2061"]
ms.assetid: b0e61c0c-a205-4820-b9aa-301d6c6fe6eb
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2061
syntax error : identifier 'identifier'  
  
 The compiler found an identifier where it wasn't expected. Make sure that `identifier` is declared before you use it.  
  
 An initializer may be enclosed by parentheses. To avoid this problem, enclose the declarator in parentheses or make it a `typedef`.  
  
 This error could also be caused when the compiler detects an expression as a class template argument; use [typename](../../cpp/typename.md) to tell the compiler it is a type.  
  
 The following sample generates C2061:  
  
```  
// C2061.cpp  
// compile with: /c  
template < A a >   // C2061  
// try the following line instead  
// template < typename b >  
class c{};  
```  
  
 C2061 can occur if you pass an instance name to [typeid](../../windows/typeid-cpp-component-extensions.md):  
  
```  
// C2061b.cpp  
// compile with: /clr  
ref struct G {  
   int i;  
};  
  
int main() {  
   G ^ pG = gcnew G;  
   System::Type ^ pType = typeid<pG>;   // C2061  
   System::Type ^ pType2 = typeid<G>;   // OK  
}  
```