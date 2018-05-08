---
title: "Compiler Error C2137 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2137"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2137"]
ms.assetid: 984687ee-7766-4f6b-ae15-0c9a010e2366
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2137
empty character constant  
  
 The empty character constant ( ' ' ) is not permitted.  
  
 The following sample generates C2137:  
  
```  
// C2137.cpp  
int main() {  
   char c = '';   // C2137  
   char d = ' ';   // OK  
}  
```