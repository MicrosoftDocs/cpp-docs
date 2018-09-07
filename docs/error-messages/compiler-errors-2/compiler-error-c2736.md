---
title: "Compiler Error C2736 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2736"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2736"]
ms.assetid: 95a6bc28-c0cb-49dc-87e6-e993dbbba881
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2736
'keyword' keyword is not permitted in cast  
  
 The keyword is invalid in a cast.  
  
 The following sample generates C2736:  
  
```  
// C2736.cpp  
int main() {  
   return (virtual) 0;   // C2736  
   // try the following line instead  
   // return 0;  
}  
```