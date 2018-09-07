---
title: "Compiler Error C2452 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2452"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2452"]
ms.assetid: a4ec7642-6660-4c7a-9866-853d1cc67daf
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2452
'type' : invalid source type for safe_cast  
  
 The source type for [safe_cast](../../windows/safe-cast-cpp-component-extensions.md) was not valid.  For example, all types in a `safe_cast` operation must be CLR types.  
  
 The following sample generates C2452:  
  
```  
// C2452.cpp  
// compile with: /clr  
  
struct A {};  
struct B : public A {};  
  
ref struct C {};  
ref struct D : public C{};  
  
int main() {  
   A a;  
   safe_cast<B*>(&a);   // C2452  
  
   // OK  
   C ^ c = gcnew C;  
   safe_cast<D^>(c);  
}  
```