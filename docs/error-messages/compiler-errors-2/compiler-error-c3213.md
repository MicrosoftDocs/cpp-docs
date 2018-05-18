---
title: "Compiler Error C3213 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3213"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3213"]
ms.assetid: 1f079e36-b3e9-40f8-8e95-08eeba3adc82
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3213
base class 'base_type' is less accessible than 'derived_type'  
  
 A type that will be visible from an assembly must use publicly visible base classes.  
  
 The following sample generates C3213:  
  
```  
// C3213.cpp  
// compile with: /clr  
private ref struct privateG {  
public:  
   int i;  
};  
  
public ref struct publicG {  
public:  
   int i;  
};  
  
public ref struct V : public privateG {   // C3213  
public:  
   int j;  
};  
  
public ref struct W: public publicG {   // OK  
public:  
   int j;  
};  
```