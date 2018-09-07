---
title: "Compiler Error C2196 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2196"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2196"]
ms.assetid: fd2f6a58-48ce-4e58-96f8-e37720feb8e7
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2196
case value 'value' already used.  
  
 A switch statement uses the same case value more than once.  
  
 The following sample generates C2196:  
  
```  
// C2196.cpp  
int main() {  
   int i = 0;  
   switch( i ) {  
   case 0:  
      break;  
   case 0:   // C2196  
   // try the following line instead  
   // case 1:  
      break;  
   }  
}  
```