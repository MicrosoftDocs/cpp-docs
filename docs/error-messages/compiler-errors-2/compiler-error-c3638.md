---
title: "Compiler Error C3638 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3638"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3638"]
ms.assetid: 8d8bc5ca-75aa-480e-b6b6-3178fab51b1d
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3638
'operator' : the standard boxing and unboxing conversion operators cannot be redefined  
  
 The compiler defines a conversion operator for each managed class to support implicit boxing. This operator cannot be redefined.  
  
 For more information, see [Implicit Boxing](../../windows/boxing-cpp-component-extensions.md).  
  
 The following sample generates C3638:  
  
```  
// C3638.cpp  
// compile with: /clr  
value struct V {  
   V(){}  
   static operator V^(V);   // C3638  
};  
  
int main() {  
   V myV;  
   V ^ pmyV = myV;   // operator supports implicit boxing  
}  
```