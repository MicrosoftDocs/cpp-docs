---
title: "Compiler Error C3218 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3218"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3218"]
ms.assetid: 0eea19e0-503e-4e07-ae8b-2cb2e95922cd
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3218
'type' : type not allowed as a constraint  
  
 For a type to be a constraint, it must be either a value type or reference to a managed class or interface.  
  
## Example  
 The following sample generates C3218.  
  
```  
// C3218.cpp  
// compile with: /clr /c  
class A {};  
ref class B {};  
  
// Delete the following 3 lines to resolve.  
generic <class T>  
where T : A   // C3218  
ref class C {};  
  
// OK  
generic <class T>  
where  T : B  
ref class D {};  
```