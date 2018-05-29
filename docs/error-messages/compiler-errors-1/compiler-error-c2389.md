---
title: "Compiler Error C2389 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2389"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2389"]
ms.assetid: 6122dc81-4ee3-49a5-a67d-d867808c9bac
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2389
'operator' : illegal operand 'nullptr'  
  
 `nullptr` cannot be an operand.  
  
 The following sample generates C2389:  
  
```  
// C2389.cpp  
// compile with: /clr  
int main() {  
   throw nullptr;   // C2389  
}  
```