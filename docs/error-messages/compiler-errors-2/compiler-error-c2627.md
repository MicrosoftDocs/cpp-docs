---
title: "Compiler Error C2627 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2627"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2627"]
ms.assetid: 7fc6c5ac-c7c9-4f0b-ad52-f52252526458
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2627
'function' : member function not allowed in anonymous union  
  
 An [anonymous union](../../cpp/unions.md#anonymous_unions) cannot have member functions.  
  
 The following sample generates C2627:  
  
```  
// C2627.cpp  
int main() {  
   union { void f(){} };   // C2627  
   union X { void f(){} };  
}  
```