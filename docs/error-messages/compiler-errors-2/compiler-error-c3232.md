---
title: "Compiler Error C3232 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3232"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3232"]
ms.assetid: 3119b3a9-0eff-4a3f-b805-e4d160af9e39
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3232
'param' : a generic type parameter cannot be used in a qualified name  
  
 A generic type parameter was used incorrectly.  
  
 The following sample generates C3232:  
  
```  
// C3232.cpp  
// compile with: /clr  
generic <class T>  
ref class C {  
   typename T::TYPE t;   // C3232  
};  
```