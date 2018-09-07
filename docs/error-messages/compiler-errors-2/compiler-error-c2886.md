---
title: "Compiler Error C2886 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2886"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2886"]
ms.assetid: c01588a1-484c-4dc9-a3f1-f900c6e44543
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2886
'class::identifier' : symbol cannot be used in a member using-declaration  
  
 A `using` declaration uses a symbol, such as a namespace name. A `using` declaration is for declaring base class members.  
  
 The following sample generates C2886:  
  
```  
// C2886.cpp  
// compile with: /c  
namespace Z {  
    int i;  
}  
  
class B {  
protected:  
    int i;  
};  
  
class D : public B {  
    // Error: Z is a namespace  
    using Z::i;   // C2886  
  
    // OK: B is a base class  
    using B::i;  
};  
```