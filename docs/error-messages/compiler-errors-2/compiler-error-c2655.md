---
title: "Compiler Error C2655 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2655"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2655"]
ms.assetid: beaefa6e-51b3-4df9-9150-960f3fbf40e0
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2655
'identifier' : definition or redeclaration illegal in current scope  
  
 An identifier can be redeclared only at global scope.  
  
 The following sample generates C2655:  
  
```  
// C2655.cpp  
class A {};  
class B {  
public:  
   static int i;  
};  
  
int B::i;  // OK  
  
int main() {  
   A B::i;  // C2655  
}  
```