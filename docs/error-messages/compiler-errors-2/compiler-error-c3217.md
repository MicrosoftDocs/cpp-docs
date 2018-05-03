---
title: "Compiler Error C3217 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3217"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3217"]
ms.assetid: 99070417-c23a-4d82-bdd2-04be1a07adea
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3217
'param' : generic parameter cannot be constrained in this declaration  
  
 A constraint was ill formed; the constraint generic parameter must agree with the generic class template parameter.  
  
 The following sample generates C3217:  
  
```  
// C3217.cpp  
// compile with: /clr  
interface struct A {};  
  
generic <class T>  
ref class C {  
   generic <class T1>  
   where T : A   // C3217  
   void f();  
};  
```  
  
 The following sample demonstrates a possible resolution:  
  
```  
// C3217b.cpp  
// compile with: /clr /c  
interface struct A {};  
  
generic <class T>  
ref class C {  
   generic <class T1>  
   where T1 : A  
   void f();  
};  
```