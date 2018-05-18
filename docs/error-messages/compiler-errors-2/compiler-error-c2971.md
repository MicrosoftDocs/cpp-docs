---
title: "Compiler Error C2971 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2971"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2971"]
ms.assetid: fdb5467b-9a41-41ef-ac20-2e9428d5a4fc
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2971
'class' : template parameter 'param' : 'arg' : a local variable cannot be used as a non-type argument  
  
 You cannot use the name or address of a local variable as a template argument.  
  
 The following sample generates C2971:  
  
```  
// C2971.cpp  
template <int *pi>   
class Y {};  
  
int global_var = 0;  
  
int main() {  
   int local_var = 0;  
   Y<&local_var> aY;   // C2971  
   // try the following line instead  
   // Y<&global_var> aY;  
}  
```