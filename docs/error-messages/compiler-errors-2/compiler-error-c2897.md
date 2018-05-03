---
title: "Compiler Error C2897 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2897"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2897"]
ms.assetid: a88349e2-823f-42a0-8660-0653b677afa4
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2897
a destructor/finalizer cannot be a function template  
  
 Destructors or finalizers cannot be overloaded, so declaring a destructor as a template (which would define a set of destructors) is not allowed.  
  
 The following sample generates C2897:  
  
## Example  
 The following sample generates C2897.  
  
```  
// C2897.cpp  
// compile with: /c  
class X {  
public:  
   template<typename T> ~X() {}   // C2897  
};  
```  
  
## Example  
 The following sample generates C2897.  
  
```  
// C2897_b.cpp  
// compile with: /c /clr  
ref struct R2 {  
protected:  
   template<typename T> !R2(){}   // C2897 error  
};  
```