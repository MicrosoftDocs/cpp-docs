---
title: "Compiler Error C2977 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2977"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2977"]
ms.assetid: 3c4218e0-5d03-4a2b-b757-c507c35f3542
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2977
'identifier' : too many type arguments  
  
 A generic or template has too many actual arguments. Check the generic or template declaration to find the correct number of parameters.  
  
 The following sample generates C2977:  
  
```  
// C2977.cpp  
// compile with: /c  
template<class T, int i>   
class MyClass {};  
  
template MyClass< int , 1, 1 >;   // C2977  
template MyClass< int , 1 >;   // OK  
```  
  
 C2977 can also occur when using generics:  
  
```  
// C2977b.cpp  
// compile with: /clr  
// C2977 expected  
generic <class T, class U>   
void f(){}  
  
generic <class T>   
ref struct GC1 {};  
  
int main() {  
   // Delete the following 2 lines to resolve.  
   GC1<int, char> ^ pgc1;  
   f<int,int,int>();  
  
   // OK  
   GC1<int> ^ pgc1;  
   f<int, int>();  
}  
```