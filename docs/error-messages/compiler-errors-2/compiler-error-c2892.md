---
title: "Compiler Error C2892 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2892"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2892"]
ms.assetid: c22a5084-2f50-42c2-a56b-6dfe5442edc9
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2892
local class shall not have member templates  
  
 Templated member functions are not valid in a class that is defined in a function.  
  
 The following sample generates C2892:  
  
```  
// C2892.cpp  
int main() {  
   struct local {  
      template<class T>   // C2892  
      void f() {}  
   };  
}  
```