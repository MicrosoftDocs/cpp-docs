---
title: "Compiler Error C2762 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2762"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2762"]
ms.assetid: 8b81a801-fd48-40a1-8bee-0748795b12e4
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2762
'class' : invalid expression as a template argument for 'argument'  
  
 When using [/Za](../../build/reference/za-ze-disable-language-extensions.md), the compiler will not convert an integral to a pointer.  
  
 The following sample generates C2762:  
  
```  
// C2762.cpp  
// compile with: /Za  
template<typename T, T *pT>  
class X2 {};  
  
void f2() {  
   X2<int, 0> x21;   // C2762  
   // try the following line instead  
   // X2<int, static_cast<int *>(0)> x22;  
}  
```