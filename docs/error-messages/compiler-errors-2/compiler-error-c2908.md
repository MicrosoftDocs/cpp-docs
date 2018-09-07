---
title: "Compiler Error C2908 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2908"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2908"]
ms.assetid: 49cd2a21-cad8-4ba0-9a0b-3a0190d9344c
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2908
explicit specialization; 'template' has already been instantiated  
  
 A specialization of the primary template occurs before the explicit specialization.  
  
 The following sample generates C2908:  
  
```  
// C2908.cpp  
// compile with: /c  
template<class T> class X {};  
  
void f() {  
X<int> x;   //specialization and instantiation  
            //of X<int>  
}  
  
template<> class X<int> {}  // C2908, explicit specialization  
```