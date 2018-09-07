---
title: "Compiler Error C2939 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2939"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2939"]
ms.assetid: 455b050b-f2dc-4b5b-bd6a-e1f81d3d1644
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2939
'class' : type-class-id redefined as a local data variable  
  
 You cannot use a generic or template class as a local data variable.  
  
 This error can be caused if braces are improperly matched.  
  
 The following sample generates C2939:  
  
```  
// C2939.cpp  
template<class T>  
struct TC { };   
int main() {  
   int TC<int>;   // C2939  
   int TC;   // OK  
}  
```  
  
 C2939 can also occur when using generics:  
  
```  
// C2939b.cpp  
// compile with: /clr  
generic<class T>  
ref struct GC { };  
  
int main() {  
   int GC<int>;   // C2939  
   int GC;   // OK  
}  
```