---
title: "Compiler Error C3083 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3083"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3083"]
ms.assetid: 05ff791d-52bb-41eb-9511-3ef89d7f4710
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3083
'function': the symbol to the left of a '::' must be a type  
  
 A function was called incorrectly.  
  
## Example  
 The following sample generates C3083.  
  
```  
// C3083.cpp  
// compile with: /c  
struct N {  
   ~N();  
};  
  
struct N1 {  
   ~N1();  
};  
  
N::N::~N() {}   // C3083  
N1::~N1() {}   // OK  
```