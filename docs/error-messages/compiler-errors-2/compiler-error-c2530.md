---
title: "Compiler Error C2530 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2530"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2530"]
ms.assetid: b790a312-48df-4a6a-9e27-be2c5f32f16c
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2530
'identifier' : references must be initialized  
  
 You must initialize a reference when it was declared, unless it is declared already:  
  
-   With the keyword [extern](../../cpp/using-extern-to-specify-linkage.md).  
  
-   As a member of a class, structure, or union (and it is initialized in the constructor).  
  
-   As a parameter in a function declaration or definition.  
  
-   As the return type of a function.  
  
 The following sample generates C2530:  
  
```  
// C2530.cpp  
int main() {  
   int i = 0;  
   int &j;   // C2530  
   int &k = i;   // OK  
}  
```