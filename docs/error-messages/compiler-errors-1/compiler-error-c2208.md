---
title: "Compiler Error C2208 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2208"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2208"]
ms.assetid: 9ae704bc-bf70-45f1-8e47-0470f21edd4e
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2208
'type' : no members defined using this type  
  
 An identifier resolving to a type name is in an aggregate declaration, but the compiler cannot declare a member.  
  
 The following sample generates C2208:  
  
```  
// C2208.cpp  
class C {  
   C;   // C2208  
   C(){}   // OK  
};  
```