---
title: "Compiler Error C2669 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2669"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2669"]
ms.assetid: f9cb8111-bcdc-484b-a863-2c42e15a0496
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2669
member function not allowed in anonymous union  
  
[Anonymous unions](../../cpp/unions.md#anonymous_unions) cannot have member functions.  
  
## Example  
The following sample generates C2669:  
  
```cpp  
// C2669.cpp  
struct X {  
   union {  
      int i;  
      void f() {   // C2669, remove function  
         i = 0;   
      }  
   };  
};  
```  
  