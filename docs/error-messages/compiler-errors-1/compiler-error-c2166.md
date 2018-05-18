---
title: "Compiler Error C2166 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2166"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2166"]
ms.assetid: 12789c3a-cc76-48bb-ae2e-64283e0964ed
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2166
l-value specifies const object  
  
 Code attempts to modify an item declared `const`.  
  
 The following sample generates C2166:  
  
```  
// C2166.cpp  
int f();  
int main() {  
   ( (const int&) 1 ) = 5;   // C2166  
}  
```