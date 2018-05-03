---
title: "Compiler Error C3874 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3874"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3874"]
ms.assetid: fd55fc05-69a7-4237-b3b7-dca1d5400b4f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3874
return type of 'function' should be 'int' instead of 'type'  
  
 A function does not have the return type that was expected by the compiler.  
  
 The following sample generates C3874:  
  
```  
// C3874b.cpp  
double main()  
{   // C3874  
}  
```