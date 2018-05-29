---
title: "Compiler Error C2499 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2499"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2499"]
ms.assetid: b323ff4d-b3c1-4bfd-b052-ae7292d53222
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2499
'class' : a class cannot be its own base class  
  
 You attempted to specify the class that you are defining as a base class.  
  
 The following sample generates C2499:  
  
```  
// C2499.cpp  
// compile with: /c  
class CMyClass : public CMyClass {};   // C2499  
class CMyClass{};   // OK  
```