---
title: "Compiler Error C2063 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2063"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2063"]
ms.assetid: 0a90c18f-4029-416a-9128-e8713b53e6f1
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2063
'identifier' : not a function  
  
 The identifier is used as a function but not declared as a function.  
  
 The following sample generates C2063:  
  
```  
// C2063.c  
int main() {  
   int i, j;  
   j = i();    // C2063, i is not a function  
}  
```  
  
 Possible resolution:  
  
```  
// C2063b.c  
int i() { return 0;}  
int main() {  
   int j;  
   j = i();  
}  
```