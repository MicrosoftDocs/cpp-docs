---
title: "Compiler Error C2326 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2326"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2326"]
ms.assetid: 01a5ea40-de83-4e6f-a4e8-469f441258e0
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2326
'declarator' : function cannot access 'name'  
  
 The code tries to modify a member variable, which is not possible.  
  
## Example  
 The following sample generates C2326:  
  
```  
// C2326.cpp  
void MyFunc() {  
   int i;  
  
   class MyClass  {  
   public:  
      void mf() {  
         i = 4;   // C2326 i is inaccessible  
      }  
   };  
}  
```