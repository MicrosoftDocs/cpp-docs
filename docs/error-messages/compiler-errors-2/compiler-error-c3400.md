---
title: "Compiler Error C3400 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3400"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3400"]
ms.assetid: d44169a8-73b6-4766-b406-b3a6c93f2a4d
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3400
circular constraint dependency involving 'constraint_1' and 'constraint_2'  
  
 The compiler detected circular constraints.  
  
 For more information, see [Constraints on Generic Type Parameters (C++/CLI)](../../windows/constraints-on-generic-type-parameters-cpp-cli.md).  
  
## Example  
 The following sample generates C3400.  
  
```  
// C3400.cpp  
// compile with: /clr /c  
generic<class T, class U>  
where T : U  
where U : T   // C3400  
public ref struct R {};  
```