---
title: "Compiler Error C2896 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2896"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2896"]
ms.assetid: b600407b-cb05-42e3-9069-2aa6960f0eaa
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2896
'function1' : cannot use function template 'function2' as argument  
  
 A function template cannot be an argument to another function template.  
  
 The following sample generates C2896:  
  
```  
// C2896.cpp  
template<class T1, class T2> void f1(void(*)(T1, T2));  
template<class T1, class T2> void f2(T1, T2);  
  
int main() {  
   f1(f2);   // C2896  
}  
```  
  
 C2896 can also occur when you use generics:  
  
```  
// C2896b.cpp  
// compile with: /clr  
generic<class T1> void gf1(T1){}  
generic<class T1> void gf2(T1){}  
  
int main() {  
   gf1(gf2);   // C2896  
   gf1(1);   // OK  
}  
```