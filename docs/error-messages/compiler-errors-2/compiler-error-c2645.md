---
title: "Compiler Error C2645 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2645"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2645"]
ms.assetid: 6609c2fa-c3b2-4a6b-8e8d-58fb52f67175
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2645
no qualified name for pointer to member (found ':: *')  
  
 The declaration of a pointer to a member does not specify a class.  
  
 The following sample generates C2645:  
  
```  
// C2645.cpp  
class A {};  
int main() {  
   int B::* bp;   // C2645 B not defined  
   int A::* ap;   // OK  
}  
```