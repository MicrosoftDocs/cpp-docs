---
title: "Compiler Warning (level 2) C4756 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4756"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4756"]
ms.assetid: 5a16df83-6b82-4619-83bd-319af4ef1d1d
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 2) C4756
overflow in constant arithmetic  
  
 The compiler generated an exception while doing constant arithmetic during compilation.  
  
 The following sample generates C4756:  
  
```  
// C4756.cpp  
// compile with: /W2 /Od  
int main()  
{  
   float f = 1e100+1e100;   // C4756  
}  
```