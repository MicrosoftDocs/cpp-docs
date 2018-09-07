---
title: "Compiler Error C2474 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2474"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2474"]
ms.assetid: 64e6c61e-6e77-480e-bcf0-b30a2fc482ac
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2474
'keyword' : missing an adjacent semicolon, could be either keyword or identifier.  
  
 The compiler expected to find a semicolon, and was unable to determine your intent. Add the semicolon to resolve this error.  
  
## Example  
 The following sample generates C2474.  
  
```  
// C2474.cpp  
// compile with: /clr /c  
  
ref class A {  
   ref class B {}  
   property int i;   // C2474 error  
};  
  
// OK  
ref class B {  
   ref class D {};  
   property int i;  
};  
  
ref class E {  
   ref class F {} property;   
   int i;  
};  
```