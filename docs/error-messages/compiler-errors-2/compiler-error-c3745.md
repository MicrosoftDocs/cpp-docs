---
title: "Compiler Error C3745 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3745"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3745"]
ms.assetid: 1e64aec5-7e53-47e5-bc7d-3905230cfc66
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3745
'function': only an event can be 'raised'  
  
 Only a function defined with the [__event](../../cpp/event.md) keyword can be passed to the [__raise](../../cpp/raise.md) keyword.  
  
 The following sample generates C3745:  
  
```  
// C3745.cpp  
struct E {  
   __event void func();  
   void func(int) {  
   }  
  
   void func2() {  
   }  
  
   void bar() {  
      __raise func();  
      __raise func(1);   // C3745  
      __raise func2();   // C3745  
   }  
};  
  
int main() {  
   E e;  
   __raise e.func();  
   __raise e.func(1);   // C3745  
   __raise e.func2();   // C3745  
}  
```