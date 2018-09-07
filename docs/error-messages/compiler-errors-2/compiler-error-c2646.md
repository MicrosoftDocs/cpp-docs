---
title: "Compiler Error C2646 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2646"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2646"]
ms.assetid: 92ff1f02-5eaf-40a5-8b7a-a682f149e967
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2646
an anonymous struct or union at global or namespace scope must be declared static  
  
 An anonymous struct or union has global or namespace scope but is not declared `static`.  
  
 The following sample generates C2646 and shows how to fix it:  
  
```  
// C2646.cpp  
// compile with: /c  
union { int i; };   // C2646 not static  
  
// OK  
static union { int j; };  
union U { int i; };  
```