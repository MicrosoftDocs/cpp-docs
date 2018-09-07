---
title: "Compiler Error C2929 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2929"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2929"]
ms.assetid: 11134027-6adc-4733-b6bd-b94486bd1933
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2929
'identifier' : explicit instantiation; cannot explicitly force and suppress instantiation of template-class member  
  
 You cannot explicitly instantiate an identifier while preventing it from being instantiated.  
  
 The following sample generates C2929:  
  
```  
// C2929.cpp  
// compile with: /c  
template<typename T>  
class A {  
public:  
   A() {}  
};  
  
template A<int>::A();  
  
extern template A<int>::A();   // C2929  
```