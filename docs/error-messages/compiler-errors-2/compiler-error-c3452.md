---
title: "Compiler Error C3452 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3452"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3452"]
ms.assetid: e5293dcf-cb70-4133-ae2a-0bb496950ba0
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3452
list argument member not constant  
  
 An argument was passed to an attribute that expected a constant, a value that can be evaluated at compile time.  
  
## Example  
 The following sample generates C3452.  
  
```  
// C3452.cpp  
// compile with: /c  
int i;  
[module( name="mod", type=dll, custom={i} ) ];   // C3452  
// try the following line instead  
// [module( name="mod", type=dll, custom={"a"} ) ];  
```