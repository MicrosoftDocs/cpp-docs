---
title: "Compiler Error C2524 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2524"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2524"]
ms.assetid: e71d17f5-2fc2-416b-8dbd-e9bed85eb33a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2524
'destructor' : a destructor/finalizer must have a 'void' parameter list  
  
 The destructor or finalizer had a parameter list that is not [void](../../cpp/void-cpp.md). Other parameter types are not allowed.  
  
## Example  
 The following code reproduces C2524.  
  
```  
// C2524.cpp  
// compile with: /c  
class A {  
   A() {}  
   ~A(int i) {}    // C2524  
   // try the following line instead  
   // ~A() {}  
};  
```  
  
## Example  
 The following code reproduces C2524.  
  
```  
// C2524_b.cpp  
// compile with: /clr /c  
ref struct I1 {  
protected:  
   !I1(int i);   // C2524  
   // try the following line instead  
   // !I1();  
};  
```