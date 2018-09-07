---
title: "Compiler Error C2264 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2264"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2264"]
ms.assetid: 158b72cc-cee9-4a08-bd79-b7a5955345a8
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2264
'function' : error in function definition or declaration; function not called  
  
 The function cannot be called due to an incorrect definition or declaration.  
  
 The following sample generates C2264:  
  
```  
// C2264.cpp  
struct C {  
   // Delete the following line to resolve.  
   operator int(int = 0){}   // incorrect declaration  
};  
  
struct D {  
   operator int(){return 0;}   // OK  
};  
  
int main() {  
   int i;  
  
   C c;  
   i = c;   // C2264  
  
   D d;  
   i = d;   // OK  
}  
```