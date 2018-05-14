---
title: "Compiler Error C2234 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2234"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2234"]
ms.assetid: cfa42458-c803-4717-a017-9eca1c0cbfb0
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2234
'name' : arrays of references are illegal  
  
 Because pointers to references are not allowed, arrays of references are not possible.  
  
 The following sample generates C2234:  
  
```  
// C2234.cpp  
int main() {  
   int i = 0, j = 0, k = 0, l = 0;  
   int &array[4] = {i,j,k,l};   // C2234  
   int array2[4] = {i,j,k,l};   // OK  
}  
```