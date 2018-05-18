---
title: "Compiler Error C2255 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2255"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2255"]
ms.assetid: 67dc4cb0-de6b-4405-bd64-d47736367a93
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2255
'element' : not allowed outside of a class definition  
  
 For example, a nonmember function is declared a `friend`.  
  
 The following sample generates C2255:  
  
```  
// C2255.cpp  
// compile with: /c  
class A {  
private:  
   void func1();  
   friend void func2();  
};  
  
friend void func1() {}   // C2255  
void func2(){}  
```