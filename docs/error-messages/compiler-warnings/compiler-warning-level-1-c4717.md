---
title: "Compiler Warning (level 1) C4717 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4717"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4717"]
ms.assetid: 5ef3c6c7-8599-4714-a973-0f5b69cdab3c
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4717
'function' : recursive on all control paths, function will cause runtime stack overflow  
  
 Every path through a function contains a call to the function. Since there is no way to exit the function without first calling itself recursively, the function will never exit.  
  
 The following sample generates C4717:  
  
```  
// C4717.cpp  
// compile with: /W1 /c  
// C4717 expected  
int func(int x) {  
   if (x > 1)  
      return func(x - 1); // recursive call  
   else {  
      int y = func(0) + 1; // recursive call  
      return y;  
   }  
}  
  
int main(){  
   func(1);  
}  
```