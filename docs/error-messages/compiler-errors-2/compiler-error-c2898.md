---
title: "Compiler Error C2898 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2898"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2898"]
ms.assetid: 68466e11-2541-4f6b-b772-13a642f30dfb
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2898
'declaration' : member function templates cannot be virtual  
  
 The following sample generates C2898:  
  
```  
// C2898.cpp  
// compile with: /c  
class X {  
public:  
   template<typename T> virtual void f(T t) {}   // C2898  
};  
```