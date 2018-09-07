---
title: "Compiler Error C2601 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2601"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2601"]
ms.assetid: 88275582-5f37-45d7-807d-05f06ba00965
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2601
'function' : local function definitions are illegal  
  
 Code tries to define a function within a function.  
  
 Or, there may be an extra brace in your source code before the location of the C2601 error.  
  
 The following sample generates C2601:  
  
```  
// C2601.cpp  
int main() {  
   int i = 0;  
  
   void funcname(int j) {   // C2601  
      j++;  
   }  
}  
```