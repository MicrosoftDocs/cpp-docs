---
title: "Compiler Error C3748 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3748"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3748"]
ms.assetid: 6fe71a0a-dd93-4ce6-9729-b9616360cf34
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3748
'interface': managed interfaces may not fire events  
  
 The [__event](../../cpp/event.md) keyword cannot appear inside an interface.  
  
 The following sample generates C3748:  
  
```  
// C3748.cpp  
__interface I {  
// try the following line instead  
// struct I {  
   __event void f();   // C3748  
};  
  
int main() {  
}  
```