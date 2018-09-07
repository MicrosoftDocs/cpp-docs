---
title: "Compiler Error C3393 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3393"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3393"]
ms.assetid: d57f7c69-0a02-4fe3-9e45-bc62644fd77c
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3393
syntax error in constraint clause: 'identifier' is not a type  
  
 The identifier passed to a constraint, which must be a type, was not a type.  For more information, see [Constraints on Generic Type Parameters (C++/CLI)](../../windows/constraints-on-generic-type-parameters-cpp-cli.md).  
  
## Example  
 The following sample generates C3393:  
  
```  
// C3393.cpp  
// compile with: /clr /c  
void MyInterface() {}  
interface class MyInterface2 {};  
  
generic<typename T>  
where T : MyInterface   // C3393  
// try the following line instead  
// where T : MyInterface2  
ref class R {};  
```