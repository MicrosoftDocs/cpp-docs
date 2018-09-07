---
title: "Compiler Error C3299 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3299"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3299"]
ms.assetid: 7cabdf01-bceb-404f-9401-cdd9c7fc1641
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3299
'member_function' : cannot specify constraints, they are inherited from the base method  
  
 When overriding a generic member function, you cannot specify constraint clauses (repeating the constraints implies that the constraints are not inherited).  
  
 The constraint clauses on the generic function you are overriding will be inherited.  
  
 For more information, see [Constraints on Generic Type Parameters (C++/CLI)](../../windows/constraints-on-generic-type-parameters-cpp-cli.md).  
  
## Example  
 The following sample generates C3299.  
  
```  
// C3299.cpp  
// compile with: /clr /c  
public ref struct R {  
   generic<class T>   
   where T : R  
   virtual void f();  
};  
  
public ref struct S : R {  
   generic<class T>   
   where T : R   // C3299  
   virtual void f() override;  
};  
```