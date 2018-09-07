---
title: "Compiler Error C2120 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2120"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2120"]
ms.assetid: b0f3f66c-6cd2-4f48-9ea3-c270b53c2b8c
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2120
'void' illegal with all types  
  
 The `void` type is used in a declaration with another type.  
  
 The following sample generates C2120:  
  
```  
// C2120.cpp  
int main() {  
   void int i;   // C2120  
   int j;   // OK  
}  
```