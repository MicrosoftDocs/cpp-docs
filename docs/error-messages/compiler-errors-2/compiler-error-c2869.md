---
title: "Compiler Error C2869 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2869"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2869"]
ms.assetid: 6e30c001-47f3-4101-b9f1-cc542c9fffae
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2869
'name' : has already been defined to be a namespace  
  
 You cannot reuse a name already used as a namespace.  
  
 The following sample generates C2869:  
  
```  
// C2869.cpp  
// compile with: /c  
namespace A { int i; };  
  
class A {};   // C2869, A is already used  
```