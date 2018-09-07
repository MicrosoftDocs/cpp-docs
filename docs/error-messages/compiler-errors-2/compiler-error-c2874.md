---
title: "Compiler Error C2874 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2874"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2874"]
ms.assetid: b54fa9d8-8df5-40d9-9b3b-aa3e9dd6a3be
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2874
using-declaration causes a multiple declaration of 'symbol'  
  
 The declaration causes the same item to be defined twice.  
  
 The following sample generates C2874:  
  
```  
// C2874.cpp  
namespace Z {  
   int i;  
}  
  
int main() {  
   int i;  
   using Z::i;   // C2874, i already declared  
}  
```