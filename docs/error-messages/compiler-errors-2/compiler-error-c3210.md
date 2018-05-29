---
title: "Compiler Error C3210 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3210"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3210"]
ms.assetid: c6e9d309-fabc-4e7d-b526-be20d9fe3f6a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3210
'type' : access declaration can only be applied to a base class member  
  
 A [using declaration](../../cpp/using-declaration.md) was specified incorrectly.  
  
## Example  
 The following sample generates C3210.  
  
```  
// C3210.cpp  
// compile with: /c  
struct A {  
protected:  
   int i;  
};  
  
struct B {  
   using A::i;   // C3210  
};  
  
struct C : public A {  
   using A::i;   // OK  
};  
```