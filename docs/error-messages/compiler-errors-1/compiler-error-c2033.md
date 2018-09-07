---
title: "Compiler Error C2033 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2033"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2033"]
ms.assetid: fd5a1637-9db2-4c98-a7cc-b63b39737cd9
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2033
'identifier' : bit field cannot have indirection  
  
 The bit field was declared as a pointer, which is not allowed.  
  
 The following sample generates C2033:  
  
```  
// C2033.cpp  
struct S {  
   int *b : 1;  // C2033  
};  
```  
  
 Possible resolution:  
  
```  
// C2033b.cpp  
// compile with: /c  
struct S {  
   int b : 1;  
};  
```